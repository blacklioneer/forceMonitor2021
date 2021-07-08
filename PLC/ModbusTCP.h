#ifndef _ModbusTCP_H_
#define _ModbusTCP_H_

#include "winsock2.h"
#pragma comment(lib, "DMT.lib")	
#pragma comment(lib, "ws2_32.lib")
#include <iostream>
#include <string>
#include <QMessageBox>
#define _IP_MARK "."
using namespace std;


//�ⲿ����
#ifdef	__cplusplus
extern "C"
{
#endif	/*  __cplusplus */
	int WINAPI OpenModbusTCPSocket(int conn_num, int ipaddr);
	int WINAPI RequestData(int comm_type, int conn_num, int slave_addr, int func_code, const unsigned char *sendbuf, int sendlen);
	int WINAPI ResponseData(int comm_type, int conn_num, int *slave_addr, int *func_code, unsigned char *recvbuf);
	void WINAPI CloseSocket(int conn_num);
#ifdef	__cplusplus
}
#endif	/*  __cplusplus */

class ModbusTCP
{
public:
	unsigned int IP_to_BYTE(const string &strIP);	//IP�ַ���ת�ֽ�
	int OpenModbusTCP(string strIP);				//��ModbusTCP
	int SendModbusData(string sendData);			//��������
	int RecvModbusData(string *recvData);			//��������
	int CloseModbusTCP();							//�ر�ModbusTCP
	int CtrlPLC(string strIP, string sendData);		//�������ӡ����͡����ܡ��ر�
};



#endif
