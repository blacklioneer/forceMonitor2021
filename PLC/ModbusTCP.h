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


//外部函数
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
	unsigned int IP_to_BYTE(const string &strIP);	//IP字符串转字节
	int OpenModbusTCP(string strIP);				//打开ModbusTCP
	int SendModbusData(string sendData);			//发送数据
	int RecvModbusData(string *recvData);			//接收数据
	int CloseModbusTCP();							//关闭ModbusTCP
	int CtrlPLC(string strIP, string sendData);		//包括连接、发送、接受、关闭
};



#endif
