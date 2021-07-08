#include<stdio.h>             //导入标准输入输出库的头文件
#include <sstream>
#pragma comment(lib,"ws2_32.lib")
#include"RobotCtrl.h"
using namespace std;          //使用标准命名空间

CRobotTCP * CRobotTCP::GetRobotInstance(const char * stIp, int nPort)
{
	static CRobotTCP robot;	// C++11的新特性，局部静态变量只初始化一次
	//int nConnect = 0;
	//char recvMessage[2000] = "";
	//while (recv(robot.SocketServer, recvMessage, 2000, 0) <= 0 && ++nConnect<5) {
	//	printf_s("机器人：第%d次尝试连接...\n", nConnect);
	//	robot.InitRobotTCP(stIp, nPort);
	//}

	//if (recv(robot.SocketServer, recvMessage, 2000, 0) <= 0) {
	//	robot.InitRobotTCP(stIp, nPort);
	//}
	robot.InitRobotTCP(stIp, nPort);

	return &robot;
}

CRobotTCP::CRobotTCP()
{
}

CRobotTCP::~CRobotTCP()
{
}

/*
清理关闭socket
*/
int CRobotTCP::DiscRobotTCP() {
	closesocket(SocketServer);
	WSACleanup();
	//system("pause");
	return 1;
}
/*
初始化TCP
*/
int CRobotTCP::InitRobotTCP(const char *IP, int Port) {
	//初始化套接字库
	WORD w_req = MAKEWORD(2, 2);//版本号
	WSADATA wsadata;
	int err = WSAStartup(w_req, &wsadata);
	if (err != 0)
	{
		cout << "初始化套接字库失败！" << endl;
		DiscRobotTCP();
	}
	//检测版本号
	if (LOBYTE(wsadata.wVersion) != 2 || HIBYTE(wsadata.wHighVersion) != 2)
	{
		cout << "套接字库版本号不符！" << endl;
		DiscRobotTCP();
	}
	//填充服务端信息
	SOCKADDR_IN server_addr;
	server_addr.sin_family = AF_INET;
	inet_pton(AF_INET, IP, &server_addr.sin_addr);
	server_addr.sin_port = htons(Port);
	//创建套接字
	SocketServer = socket(AF_INET, SOCK_STREAM, 0);
	printf_s("机器人：第%d次尝试连接...\n", 1);
	if (connect(SocketServer, (SOCKADDR *)&server_addr, sizeof(SOCKADDR)) == SOCKET_ERROR)
	{
		printf("机器人（服务端）%s:%d 连接失败!\n", IP, Port);
		DiscRobotTCP();
	}
	else
	{
		printf("机器人（服务端）%s:%d 连接成功!\n", IP, Port);
	}

	////开始连接  尝试5次
	//int nConnect = 0;
	//while (++nConnect) {
	//	printf_s("机器人：第%d次尝试连接...\n", nConnect);
	//	if (connect(SocketServer, (SOCKADDR *)&server_addr, sizeof(SOCKADDR)) == 0) {
	//		// 若成功则为0，若出错则为-1
	//		printf("与机器人（服务端）%s:%d 连接成功!\n", IP, Port);
	//		break;
	//	}
	//	if (nConnect == 5) {
	//		printf("与机器人（服务端）连接失败\n");
	//		DiscRobotTCP();
	//		return 0;
	//	}
	//	Sleep(1);
	//}

	return 1;
}

//获取机器人当前坐标
int CRobotTCP::GetRobotXYZABC(float* x, float* y, float* z, float* a, float* b, float* c,
	double* a1, double* a2, double* a3, double* a4, double* a5, double* a6)
{
	//接收数据
	recvResult = recv(SocketServer, recvMessage, 2000, 0);
	if (recvResult <= 0)
	{
		cout << "未接收到数据!连接中断！" << endl;
		DiscRobotTCP();
	}
	//======解析出坐标和各轴角度======================================================================================
	string recvPos_Axis = recvMessage;
	if (recvPos_Axis.length() > 20)    //设置临界值判断接收数据是否为无效数据
	{
		//解析XYZABC坐标
		int CatchX1 = recvPos_Axis.find("X=\"");
		int CatchX2 = recvPos_Axis.find("\" Y=");
		string recvPosX = recvPos_Axis.substr(CatchX1 + 3, CatchX2 - CatchX1 - 3);
		int CatchY1 = recvPos_Axis.find("Y=\"");
		int CatchY2 = recvPos_Axis.find("\" Z=");
		string recvPosY = recvPos_Axis.substr(CatchY1 + 3, CatchY2 - CatchY1 - 3);
		int CatchZ1 = recvPos_Axis.find("Z=\"");
		int CatchZ2 = recvPos_Axis.find("\" A=");
		string recvPosZ = recvPos_Axis.substr(CatchZ1 + 3, CatchZ2 - CatchZ1 - 3);
		int CatchA1 = recvPos_Axis.find("A=\"");
		int CatchA2 = recvPos_Axis.find("\" B=");
		string recvPosA = recvPos_Axis.substr(CatchA1 + 3, CatchA2 - CatchA1 - 3);
		int CatchB1 = recvPos_Axis.find("B=\"");
		int CatchB2 = recvPos_Axis.find("\" C=");
		string recvPosB = recvPos_Axis.substr(CatchB1 + 3, CatchB2 - CatchB1 - 3);
		int CatchC1 = recvPos_Axis.find("C=\"");
		int CatchC2 = recvPos_Axis.find("\"></LastPos>");
		string recvPosC = recvPos_Axis.substr(CatchC1 + 3, CatchC2 - CatchC1 - 3);

		string AxisGroup[6];
		for (int i = 0; i < 6; i++)     //解析6个轴角度
		{
			char iii = (char)(i + 1 + int('0'));
			string head1 = "<Axis";
			string head2 = "</Axis";
			string tail = ">";
			string findAxis1 = head1 + iii + tail;
			string findAxis2 = head2 + iii + tail;

			int axis1 = recvPos_Axis.find(findAxis1);
			int axis2 = recvPos_Axis.find(findAxis2);
			string EachAxis = recvPos_Axis.substr(axis1 + 7, axis2 - axis1 - 7);
			AxisGroup[i] = EachAxis;
			//cout << "A" << i+1 << "轴:" << '"' << AxisGroup[i] << '"'<< endl;        //显示接收的6个轴角度
		}
		cout.precision(10);//设置精度为10位

		*x = atof(recvPosX.c_str());
		*y = atof(recvPosY.c_str());
		*z = atof(recvPosZ.c_str());
		*a = atof(recvPosA.c_str());
		*b = atof(recvPosB.c_str());
		*c = atof(recvPosC.c_str());

		*a1 = atof(AxisGroup[0].c_str());
		*a2 = atof(AxisGroup[1].c_str());
		*a3 = atof(AxisGroup[2].c_str());
		*a4 = atof(AxisGroup[3].c_str());
		*a5 = atof(AxisGroup[4].c_str());
		*a6 = atof(AxisGroup[5].c_str());
		//GetXYZABC = "X=" + recvPosX + ", Y=" + recvPosY + ", Z=" + recvPosZ + ", A=" + recvPosA + ", B=" + recvPosB + ", C=" + recvPosC + '\n' + "A1=" + AxisGroup[0] + ", A2=" + AxisGroup[1] + ", A3=" + AxisGroup[2] + ", A4=" + AxisGroup[3] + ", A5=" + AxisGroup[4] + ", A6=" + AxisGroup[5];
	}
	else {
		cout << "接收到无效信息：" << recvPos_Axis << endl;   //直接显示接收的原数据
	}
	return 1;
}

//发送控制机器人的坐标
int CRobotTCP::CtrlRobotXYZABC(float x, float y, float z, float a, float b, float c)
{
	if (recvResult > 0)   //判断是否接收的数据不为空
	{
		//cout << "已发送控制信息：X=" << x << ", Y=" << y << ", Z=" << z << ", A=" << a << ", B=" << b << ", C=" << c << endl;
		ostringstream xx, yy, zz, aa, bb, cc;
		xx << x;  yy << y;  zz << z;  aa << a;  bb << b;  cc << c;
		string xxx(xx.str()), yyy(yy.str()), zzz(zz.str()), aaa(aa.str()), bbb(bb.str()), ccc(cc.str());
		string sendMessage = "<Sensor><Read><xyzabc X=\"" + xxx + "\" Y=\"" + yyy + "\" Z=\"" + zzz + "\" A=\"" + aaa + "\" B=\"" + bbb + "\" C=\"" + ccc + "\"></xyzabc></Read><Free>998</Free></Sensor>";

		if (send(SocketServer, sendMessage.data(), strlen(sendMessage.data()) + 1, 0) < 0)
		{
			cout << "回复服务端的send出错！" << endl;
			DiscRobotTCP();
		}
	}
	else if (recvResult == 0)
	{
		cout << "连接被关闭！" << endl;
		DiscRobotTCP();
	}
	else
	{
		cout << "recv错误！" << endl;
		DiscRobotTCP();
	}
	return 1;
}



void main1()
{
	float x, y, z, a, b, c;
	double a1, a2, a3, a4, a5, a6;

	CRobotTCP robot;
	robot.InitRobotTCP("192.168.1.66", 54610);
	// 	while (true)   //循环接收和发送数据
	// 	{
	robot.GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
	cout << "初  始  点：" << x << " " << y << " " << z << " " << a << " " << b << " " << c << endl;
	cout << "初  始  点：" << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << endl;

	robot.CtrlRobotXYZABC(x, y, z, a, b, c+10);//发送新的坐标信息
	robot.GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//首先读取数据
	cout << "目  标  点：" << x << " " << y << " " << z << " " << a << " " << b << " " << c << endl;
	cout << "目  标  点：" << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << endl;

//	}
	cout << "通讯完毕！" << endl;
	//robot.DiscRobotTCP();//清理关闭socket
	system("pause");
}
