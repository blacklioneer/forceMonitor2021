#include<stdio.h>             //�����׼����������ͷ�ļ�
#include <sstream>
#include <fstream>
#include <assert.h>
#pragma comment(lib,"ws2_32.lib")
#include "SensorClient.h"
#include <QMessageBox>
#include "MyCRC.h"
#include <windows.h>
using namespace std;          //ʹ�ñ�׼�����ռ�

/*
 'inet_addr': Use inet_pton() or InetPton() instead or define _WINSOCK_DEPRECATED_NO_WARNINGS to disable deprecated API warnings
 ����1��
	 #pragma warning(disable:4996)	// ���Ա���inet_addr
	 clientSockInfo.sin_addr.s_addr = inet_addr(stIp);
 ����2��
	clientSockInfo.sin_addr.s_addr = inet_pton(AF_INET, stIp, (void*)&clientSockInfo.sin_addr.S_un.S_addr);
*/
#pragma warning(disable:4996)	// ���Ա���inet_addr


CSensorClient * CSensorClient::GetSensorInstance(const char* stIp, int nPort)
{
    static CSensorClient Sensor;	// C++11�������ԣ��ֲ���̬����ֻ��ʼ��һ��
	//int nConnect = 0;
	//char recvMessage[2000] = "";
	//while (recv(Sensor.m_socketClient, recvMessage, 2000, 0) <= 0 && ++nConnect < 5) {
	//	printf_s("������������%d�γ�������...\n", nConnect);
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
����ر�socket
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
��ʼ��TCP
*/
int CSensorClient::InitTCP(const char* stIp, int nPort) {
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);	//  WinSock �淶�İ汾�ŵİ汾��Ϊ2.2
	//����Socket
	m_socketClient = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (m_socketClient == INVALID_SOCKET) {
		printf("������socketServ��Ч\n");
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

	//unsigned long ul = 1;	// 0  ����
	//ioctlsocket(m_socketClient, FIONBIO, &ul); //����Ϊ������ģʽ
	printf_s("������������%d�γ�������...\n", 1);
	if (connect(m_socketClient, (SOCKADDR*)&clientSockInfo, sizeof(SOCKADDR)) == 0) {
		// ���ɹ���Ϊ0����������Ϊ-1
		printf("��������%s:%d ���ӳɹ�!\n", stIp, nPort);
	}
	else {
        QMessageBox msgBox;
        msgBox.setWindowTitle(QString::fromLocal8Bit("����"));/** ���ñ��� **/
        msgBox.setText(QString::fromLocal8Bit("������������ʧ�ܣ���������"));
//                msgBox.setInformativeText("Do you want to save your changes?");/** ���ø��ḻһ�����Ϣ **/
        msgBox.setStandardButtons(QMessageBox::Yes);/** ��ӱ�׼��ť **/
        msgBox.setDefaultButton(QMessageBox::Yes);/** ����Ĭ�ϰ�ť **/
        msgBox.setIcon(QMessageBox::Warning);/** ����ͼ�� **/
        msgBox.exec();/** ���ص���İ�ť��Ӧ������ֵ **/
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
	// strlen()������char *�����ص���ʵ��������ռ�ռ�
	// sizeof()������Ψһ�����ص��ǡ�����������Ŀռ�
	sendRet = send(m_socketClient, cmd, strlen(cmd), 0);
	if (sendRet == SOCKET_ERROR) {
		printf("�ظ��ͻ��˵�send����\n");
		DiscTCP();   //�ر�
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
			printf("�ظ��ͻ��˵�send����\n");
			DiscTCP();   //�ر�,ͬʱ��flagGSD��flagGOD����false
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
	// ��PackageLength����ֵ
	int Length = pRxBuffer[i + 2] * 256 + pRxBuffer[i + 3];
	// ָ��ָ��PackageNo
	//printf("PackageNo %d\n", pRxBuffer[i + 4] * 256 + pRxBuffer[i + 5]);
	char PackageInfor[40] = { 0 };
	sprintf_s(PackageInfor, sizeof(PackageInfor), "Time:%dms,PackageNo %d", ::GetTickCount(), pRxBuffer[i + 4] * 256 + pRxBuffer[i + 5]);
	ofstream file;
	file.open("../../code/Robot/M3706C/log.txt", ios::app);//��д�ķ�ʽ�򿪣�û�лᴴ��
	if (file.is_open())
	{
		file << PackageInfor << endl;
		file.close();
	}
	// ָ��ָ��Data����
	int Index = i + 6;
	// SumУ�鷽ʽ
	BYTE CheckSum = 0x00;
	for (int j = 0x00; j < M3706C_CHN_NUMBER * 4; j++)
	{
		CheckSum += pRxBuffer[Index++];
	}
	if (CheckSum != pRxBuffer[Index])	return false;
	// CrcУ�鷽ʽ
	//Index = i + 6;
	//DWORD dwCheckCrc32 = 0x00, dwRxCheckCrc32 = 0x00;
	//CMyCRC m_MyCRC;
	//dwCheckCrc32 = m_MyCRC.GetCRC32(&pRxBuffer[Index], M3706C_CHN_NUMBER * 4);
	//DWORD CrcIndex = Index + M3706C_CHN_NUMBER * 4;
	//dwRxCheckCrc32 = pRxBuffer[CrcIndex] << 24 | pRxBuffer[CrcIndex + 1] << 16 | pRxBuffer[CrcIndex + 2] << 8 | pRxBuffer[CrcIndex + 3];
	////���� ���ܵ����� У�鷽��
	//if (dwCheckCrc32 != dwRxCheckCrc32 && CheckSum != pRxBuffer[CrcIndex]) return false;
	// ����data����
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
		//	printf("ͨ��%d:%f\n",i,dValueGSD[i]);
		//}
		//Sleep(1000);
		//printf("ִ��GetDataGSD\n");
		if (bStopFlag) {
			break;
		}
	}
	Stcp.DiscTCP();
}


