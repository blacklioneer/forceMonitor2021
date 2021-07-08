#include<stdio.h>             //导入标准输入输出库的头文件
#include <sstream>
#include <fstream>
#include <assert.h>
#pragma comment(lib,"ws2_32.lib")
#include "SensorClient.h"
#include <QMessageBox>
#include "MyCRC.h"
#include <windows.h>
using namespace std;          //使用标准命名空间

/*
 'inet_addr': Use inet_pton() or InetPton() instead or define _WINSOCK_DEPRECATED_NO_WARNINGS to disable deprecated API warnings
 方法1：
	 #pragma warning(disable:4996)	// 忽略报错inet_addr
	 clientSockInfo.sin_addr.s_addr = inet_addr(stIp);
 方法2：
	clientSockInfo.sin_addr.s_addr = inet_pton(AF_INET, stIp, (void*)&clientSockInfo.sin_addr.S_un.S_addr);
*/
#pragma warning(disable:4996)	// 忽略报错inet_addr


CSensorClient * CSensorClient::GetSensorInstance(const char* stIp, int nPort)
{
    static CSensorClient Sensor;	// C++11的新特性，局部静态变量只初始化一次
	//int nConnect = 0;
	//char recvMessage[2000] = "";
	//while (recv(Sensor.m_socketClient, recvMessage, 2000, 0) <= 0 && ++nConnect < 5) {
	//	printf_s("力传感器：第%d次尝试连接...\n", nConnect);
	//	Sensor.InitTCP(stIp, nPort);
	//	Sleep(1);
	//}

	char recvMessage[2000] = "";
	if (recv(Sensor.m_socketClient, recvMessage, 2000, 0) <= 0) {
		Sensor.InitTCP(stIp, nPort);
	}
	return &Sensor;
}

CSensorClient::CSensorClient()
{
}


CSensorClient::~CSensorClient()
{
    DiscTCP();
}
/*
清理关闭socket
*/
int CSensorClient::DiscTCP() {
	int sendRet = 0;
	if (m_flagGSD) {
		//std::string cmd = "AT+GSD=STOP\r\n";
		//cmd.data();
		const char *cmd = "AT+GSD=STOP\r\n";
		sendRet = send(m_socketClient, cmd, strlen(cmd), 0);
		m_flagGSD = false;
	}
	if (m_flagGOD) {
		const char *cmd = "AT+GOD=STOP\r\n";
		sendRet = send(m_socketClient, cmd, strlen(cmd), 0);
		m_flagGOD = false;
	}
	closesocket(m_socketClient);
	WSACleanup();
	return 1;
}
/*
初始化TCP
*/
int CSensorClient::InitTCP(const char* stIp, int nPort) {
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);	//  WinSock 规范的版本号的版本号为2.2
	//创建Socket
	m_socketClient = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (m_socketClient == INVALID_SOCKET) {
		printf("创建的socketServ无效\n");
		DiscTCP();
		return 0;
	}
	SOCKADDR_IN clientSockInfo;
	//clientSockInfo.sin_addr.s_addr = inet_addr("192.168.0.108");
	//clientSockInfo.sin_addr.s_addr = inet_pton(AF_INET, stIp, (void*)&clientSockInfo.sin_addr.S_un.S_addr);
	//int res = inet_pton(AF_INET, "127.0.0.1", &clientSockInfo.sin_addr);
	clientSockInfo.sin_addr.s_addr = inet_addr(stIp);
	clientSockInfo.sin_family = AF_INET;
	clientSockInfo.sin_port = htons(nPort);

	//unsigned long ul = 1;	// 0  阻塞
	//ioctlsocket(m_socketClient, FIONBIO, &ul); //设置为非阻塞模式
	printf_s("力传感器：第%d次尝试连接...\n", 1);
	if (connect(m_socketClient, (SOCKADDR*)&clientSockInfo, sizeof(SOCKADDR)) == 0) {
		// 若成功则为0，若出错则为-1
		printf("力传感器%s:%d 连接成功!\n", stIp, nPort);
	}
	else {
        QMessageBox msgBox;
        msgBox.setWindowTitle(QString::fromLocal8Bit("警告"));/** 设置标题 **/
        msgBox.setText(QString::fromLocal8Bit("力传感器连接失败，请检查连接"));
//                msgBox.setInformativeText("Do you want to save your changes?");/** 设置更丰富一点的信息 **/
        msgBox.setStandardButtons(QMessageBox::Yes);/** 添加标准按钮 **/
        msgBox.setDefaultButton(QMessageBox::Yes);/** 设置默认按钮 **/
        msgBox.setIcon(QMessageBox::Warning);/** 设置图标 **/
        msgBox.exec();/** 返回点击的按钮对应的整型值 **/
		printf("connect error !");
		DiscTCP();
		return 0;
	}
	return 1;
}
/*

*/
//typedef unsigned int size_t;
int CSensorClient::GetDataGOD(double(&dDecodedValue)[M3706C_CHN_NUMBER]) {
	int sendRet = 0;
	if (m_flagGSD) {
		//std::string cmd = "AT+GSD=STOP\r\n";
		//cmd.data();
		const char *cmd = "AT+GSD=STOP\r\n";
		sendRet = send(m_socketClient, cmd, strlen(cmd), 0);
		m_flagGSD = false;
	}
	m_flagGOD = true;
	char cmd[20] = { 0 };
	sprintf_s(cmd, sizeof(cmd), "AT+GOD\r\n");
	//std::string cmd = "AT+SMPF=" + std::to_string(frequency) + "\s\n";
	// strlen()参数是char *，返回的是实际内容所占空间
	// sizeof()参数不唯一，返回的是“参数”分配的空间
	sendRet = send(m_socketClient, cmd, strlen(cmd), 0);
	if (sendRet == SOCKET_ERROR) {
		printf("回复客户端的send出错\n");
		DiscTCP();   //关闭
		return 0;
	}
	DWORD dataBufferLen = 8192;//8K
	BYTE* dataBuffer = new BYTE[dataBufferLen];
	memset(dataBuffer, 0, dataBufferLen);
	DWORD recvDataLen = 0;

	recvDataLen = recv(m_socketClient, (char*)dataBuffer, dataBufferLen, 0);
	if ((recvDataLen > 0) && (recvDataLen <= dataBufferLen))
	{
		__DataDecoding(dataBuffer, recvDataLen, dDecodedValue);
	}
	else {
		int errorCode = WSAGetLastError();
		if (WSAETIMEDOUT == errorCode)//The connection has been dropped because of a network failure or because the peer system failed to respond.
		{
			printf("The connection has been dropped because of a network failure");
		}
	}
	delete dataBuffer;
	return 1;
}


int CSensorClient::SetGSDParams(int nFrequency) {
	assert(nFrequency >= 10 && "nFrequency should not be less than 10");
	int sendRet = 0;
	if (m_flagGOD) {
		const char *cmd = "AT+GOD=STOP\r\n";
		sendRet = send(m_socketClient, cmd, strlen(cmd), 0);
		m_flagGOD = false;
	}
	if (m_flagGSD == false) {
		m_flagGSD = true;
		char cmd[20] = { 0 };
		sprintf_s(cmd, sizeof(cmd), "AT+SMPF=%d\r\n", nFrequency);
		sendRet = send(m_socketClient, cmd, strlen(cmd), 0);
		Sleep(100);
		sprintf_s(cmd, sizeof(cmd), "AT+GSD\r\n");
		sendRet = send(m_socketClient, cmd, strlen(cmd), 0);
		if (sendRet == SOCKET_ERROR) {
			printf("回复客户端的send出错\n");
			DiscTCP();   //关闭,同时将flagGSD和flagGOD都置false
			return 0;
		}
	}
}


int CSensorClient::GetDataGSD(double(&dDecodedValue)[M3706C_CHN_NUMBER]) {

	DWORD dataBufferLen = 8192;//8K
	BYTE* dataBuffer = new BYTE[dataBufferLen];
	memset(dataBuffer, 0, dataBufferLen);
	DWORD recvDataLen = 0;

	recvDataLen = recv(m_socketClient, (char*)dataBuffer, dataBufferLen, 0);
	if ((recvDataLen > 0) && (recvDataLen <= dataBufferLen))
	{
		__DataDecoding(dataBuffer, recvDataLen, dDecodedValue);
	}
	else {
		int errorCode = WSAGetLastError();
		if (WSAETIMEDOUT == errorCode)//The connection has been dropped because of a network failure or because the peer system failed to respond.
		{
			printf("The connection has been dropped because of a network failure");
		}
	}
	delete dataBuffer;
	return 1;
}



//	FrameHeader	PackageLength	DataNo	     Data	     ChkSum
//  0xAA,0x55	   HB,LB          2B	(ChNum*N*PNpCH)B   1B
int CSensorClient::__DataDecoding(BYTE* pRxBuffer, DWORD dataLen, double(&dDecodedValue)[M3706C_CHN_NUMBER]) {
	int i = 0x00;
	while (true)
	{
		if (pRxBuffer[i] == 0xAA && pRxBuffer[i + 1] == 0x55)
		{
			break;
		}
		i++;
		if (i >= dataLen)	return 0;
	}
	// 即PackageLength的数值
	int Length = pRxBuffer[i + 2] * 256 + pRxBuffer[i + 3];
	// 指针指到PackageNo
	//printf("PackageNo %d\n", pRxBuffer[i + 4] * 256 + pRxBuffer[i + 5]);
	char PackageInfor[40] = { 0 };
	sprintf_s(PackageInfor, sizeof(PackageInfor), "Time:%dms,PackageNo %d", ::GetTickCount(), pRxBuffer[i + 4] * 256 + pRxBuffer[i + 5]);
	ofstream file;
	file.open("../../code/Robot/M3706C/log.txt", ios::app);//以写的方式打开，没有会创建
	if (file.is_open())
	{
		file << PackageInfor << endl;
		file.close();
	}
	// 指针指到Data区域
	int Index = i + 6;
	// Sum校验方式
	BYTE CheckSum = 0x00;
	for (int j = 0x00; j < M3706C_CHN_NUMBER * 4; j++)
	{
		CheckSum += pRxBuffer[Index++];
	}
	if (CheckSum != pRxBuffer[Index])	return false;
	// Crc校验方式
	//Index = i + 6;
	//DWORD dwCheckCrc32 = 0x00, dwRxCheckCrc32 = 0x00;
	//CMyCRC m_MyCRC;
	//dwCheckCrc32 = m_MyCRC.GetCRC32(&pRxBuffer[Index], M3706C_CHN_NUMBER * 4);
	//DWORD CrcIndex = Index + M3706C_CHN_NUMBER * 4;
	//dwRxCheckCrc32 = pRxBuffer[CrcIndex] << 24 | pRxBuffer[CrcIndex + 1] << 16 | pRxBuffer[CrcIndex + 2] << 8 | pRxBuffer[CrcIndex + 3];
	////考虑 可能的两种 校验方法
	//if (dwCheckCrc32 != dwRxCheckCrc32 && CheckSum != pRxBuffer[CrcIndex]) return false;
	// 解析data数据
	Index = i + 6;
	for (int k = 0x00; k < M3706C_CHN_NUMBER; k++)
	{
		for (int m = 0x00; m < 4; m++)
		{
			DealDataBufferUnion[k].m_ByteResultDataBuffer[m] = pRxBuffer[Index++];
		}
		dDecodedValue[k] = DealDataBufferUnion[k].m_FloatResultData;
	}

}



void GetData(CSensorClient &Stcp, double(&dValueGSD)[M3706C_CHN_NUMBER], int &nFrequency, bool &bStopFlag)
{
	//const char* stIp = "192.168.0.108";
	//int nPort = 4008;
	//CSensorClient Stcp;
	//Stcp.InitTCP(stIp, nPort);
	//Stcp.GetDataGOD();
	//double dValueGSD[M3706C_CHN_NUMBER];
	Stcp.SetGSDParams(nFrequency);
	while (true) {
		Stcp.GetDataGSD(dValueGSD);
		//for (int i=0; i < M3706C_CHN_NUMBER; i++) {
		//	printf("通道%d:%f\n",i,dValueGSD[i]);
		//}
		//Sleep(1000);
		//printf("执行GetDataGSD\n");
		if (bStopFlag) {
			break;
		}
	}
	Stcp.DiscTCP();
}


