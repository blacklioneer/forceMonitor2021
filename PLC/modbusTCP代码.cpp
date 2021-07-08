#include "winsock2.h"
#pragma comment(lib, "DMT.lib")	
#pragma comment(lib, "ws2_32.lib")
#include <iostream>
#include <string>
#define _IP_MARK "."
using namespace std;

//�ⲿ����
#ifdef	__cplusplus
extern "C"
{
#endif	/*  __cplusplus */
	int WINAPI OpenModbusTCPSocket(int conn_num, int ipaddr, int port = 502);
	int WINAPI RequestData(int comm_type, int conn_num, int slave_addr, int func_code, const unsigned char *sendbuf, int sendlen);
	int WINAPI ResponseData(int comm_type, int conn_num, int *slave_addr, int *func_code, unsigned char *recvbuf);
#ifdef	__cplusplus
}
#endif	/*  __cplusplus */




unsigned int IP_to_BYTE(const string & strIP)
{
	unsigned int nRet = 0;
	char chBuf[16] = "";
	memcpy_s(chBuf, 15, strIP.c_str(), 15);

	char* szBufTemp = NULL;
	char* szBuf = strtok_s(chBuf, _IP_MARK, &szBufTemp);

	int i = 0;//����
	while (NULL != szBuf)//ȡһ��
	{
		nRet += atoi(szBuf) << ((3 - i) * 8);
		szBuf = strtok_s(NULL, _IP_MARK, &szBufTemp);
		i++;
	}
	return nRet;
}





int main()
{
	string strReqData = "010500000000";
	string strResData = "";
	string strValid = "0123456789ABCDEF";
	unsigned char sendbuf[1024] = { 0 };
	unsigned char recvbuf[1024] = { 0 };
	int modbus_addr = 0;
	int modbus_func = 0;
	int modbus_addr_ret = 0;
	int modbus_func_ret = 0;
	char A2H[3] = { 0 };

	int conn_num = 0;
	int data_len = 8;
	int modbus_mode = 2; // 1:ASCII , 2:RTU
	int comm_type = 1; // 0:RS-232 , 1:Ethernet
	int sendlen = 0;
	int ip = IP_to_BYTE("192.168.1.103");		//����IP��ַ
	printf("byte����ip: %d \n", ip);
	DWORD dwIP = ip;		//DWORD dwIP = -1062700017;		//3232267279
	cout << "dwIP: " << dwIP << endl;

	if (OpenModbusTCPSocket(conn_num, htonl(ip)) == -1)
	{
		cout << "--------------------ModbusTCP����ʧ��--------------------" << endl;
		system("pause");
	}

	//�ж����ݳ����Ƿ��㹻
	if (strReqData.length() < 4) // at least slave address and function code
	{
		cout << "--------------------Modbus���ݳ��Ȳ���--------------------" << endl;
		system("pause");
	}

	//�ж����ݸ����Ƿ�Ϊż��
	if (strReqData.length() % 2 != 0) // input data must be even number
	{
		cout << "--------------------Modbus���ݸ�������Ϊż��--------------------" << endl;
		system("pause");
	}
	//�ж��Ƿ�����Ч����
	for (int i = 0; i < strReqData.length(); ++i) // input data verification
	{
		if (strValid.find(strReqData.substr(i, 1)) == -1)
		{
			cout << "--------------------Modbus���ݺ�����Ч�ַ�--------------------" << endl;
			system("pause");
		}
	}
	//��ȡ��ַ�������롢����
	for (int i = 0; i < strReqData.length(); i += 2)
	{
		int num = 0;
		string str0 = strReqData.substr(i, 1);
		string str1 = strReqData.substr(i+1, 1);
// 			cout << "str0��" << str0 << endl;
// 			cout << "str1��" << str1 << endl;
		A2H[0] = str0[0];
		A2H[1] = str1[0];
// 			cout << "A2H[0]��" << A2H[0] << endl;
// 			cout << "A2H[1]��" << A2H[1] << endl;
		sscanf(A2H, "%02X", &num);		//%02X��ʾ��16���Ƶĸ�ʽ����������͵���ֵ��������Ϊ2���Ҷ��룬��������ַ�0�����
		//cout << "num��" << num << endl;
		if (i == 0)
		{
			modbus_addr = num;
		}
		else if (i == 2)
		{
			modbus_func = num;
		}
		else
		{
			sendbuf[sendlen++] = num;
		}
	}
	//cout << "���͵����ݣ���ַmodbus_addr:" << modbus_addr << "    ������modbus_func:" << modbus_func << "    ����sendbuf:" << sendbuf << endl;
	cout << "�������ݣ���" << strReqData << "��" << endl;
	
	//��������
	int reqNum = RequestData(comm_type, conn_num, modbus_addr, modbus_func, sendbuf, sendlen); // modbus request
	if (reqNum == -1)
	{
		cout << "--------------------Modbus���ݷ���ʧ��--------------------" << endl;
		system("pause");
	}
	//��������
	int resNum = ResponseData(comm_type, conn_num, &modbus_addr_ret, &modbus_func_ret, recvbuf); // modbus response
	if (resNum > 0)
	{
		sprintf(A2H, "%02X", modbus_addr_ret);
		strResData += A2H;
		sprintf(A2H, "%02X", modbus_func_ret);
		strResData += A2H;
		switch (modbus_func_ret)
		{
		case 0x01:	case 0x02:	case 0x03:
		case 0x04:	case 0x11:	case 0x17:
			sprintf(A2H, "%02X", resNum);
			strResData += A2H;
			break;
		}
		for (int i = 0; i < resNum; ++i) // recover a string from recvbuf
		{
			sprintf(A2H, "%02X", recvbuf[i]);
			strResData += A2H;
		}
		cout << "--------------------���ݷ��ͳɹ�--------------------" << endl;
		cout << "�������ݣ���" << strResData << "��" << endl;
	}
	else
	{
		cout << "--------------------δ���յ��κ�����--------------------" << endl;
		system("pause");
	}

	system("pause");
	return 0;
}
