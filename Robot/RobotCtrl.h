#ifndef _RobotTCP_H_
#define _RobotTCP_H_
#include<iostream>
#include<WinSock2.h>
#include <Ws2tcpip.h>
//#include <sstream>
//#pragma comment(lib,"ws2_32.lib")
using namespace std;


class CRobotTCP
{
public:
	static CRobotTCP* GetRobotInstance(const char* stIp = "192.168.1.66", int nPort = 54610);
//private:
	CRobotTCP();

public:
	~CRobotTCP();
	SOCKET SocketServer;

private:
	int recvResult;
	char recvMessage[2000] = "";

public:
	//�رպ����Socket TCP
	int DiscRobotTCP();
	//��ʼ��Socket TCP
	int InitRobotTCP(const char *IP = "192.168.1.66", int Port = 54610);
	//��ȡ�����˵�ǰ����
	int GetRobotXYZABC(float* x, float* y, float* z, float* a, float* b, float* c, double* a1, double* a2, double* a3, double* a4, double* a5, double* a6);
	//���Ϳ��ƻ����˵�����
	int CtrlRobotXYZABC(float x, float y, float z, float a, float b, float c);

};

#endif
