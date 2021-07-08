#include<stdio.h>             //�����׼����������ͷ�ļ�
#include <sstream>
#pragma comment(lib,"ws2_32.lib")
#include"RobotCtrl.h"
using namespace std;          //ʹ�ñ�׼�����ռ�

CRobotTCP * CRobotTCP::GetRobotInstance(const char * stIp, int nPort)
{
	static CRobotTCP robot;	// C++11�������ԣ��ֲ���̬����ֻ��ʼ��һ��
	//int nConnect = 0;
	//char recvMessage[2000] = "";
	//while (recv(robot.SocketServer, recvMessage, 2000, 0) <= 0 && ++nConnect<5) {
	//	printf_s("�����ˣ���%d�γ�������...\n", nConnect);
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
����ر�socket
*/
int CRobotTCP::DiscRobotTCP() {
	closesocket(SocketServer);
	WSACleanup();
	//system("pause");
	return 1;
}
/*
��ʼ��TCP
*/
int CRobotTCP::InitRobotTCP(const char *IP, int Port) {
	//��ʼ���׽��ֿ�
	WORD w_req = MAKEWORD(2, 2);//�汾��
	WSADATA wsadata;
	int err = WSAStartup(w_req, &wsadata);
	if (err != 0)
	{
		cout << "��ʼ���׽��ֿ�ʧ�ܣ�" << endl;
		DiscRobotTCP();
	}
	//���汾��
	if (LOBYTE(wsadata.wVersion) != 2 || HIBYTE(wsadata.wHighVersion) != 2)
	{
		cout << "�׽��ֿ�汾�Ų�����" << endl;
		DiscRobotTCP();
	}
	//���������Ϣ
	SOCKADDR_IN server_addr;
	server_addr.sin_family = AF_INET;
	inet_pton(AF_INET, IP, &server_addr.sin_addr);
	server_addr.sin_port = htons(Port);
	//�����׽���
	SocketServer = socket(AF_INET, SOCK_STREAM, 0);
	printf_s("�����ˣ���%d�γ�������...\n", 1);
	if (connect(SocketServer, (SOCKADDR *)&server_addr, sizeof(SOCKADDR)) == SOCKET_ERROR)
	{
		printf("�����ˣ�����ˣ�%s:%d ����ʧ��!\n", IP, Port);
		DiscRobotTCP();
	}
	else
	{
		printf("�����ˣ�����ˣ�%s:%d ���ӳɹ�!\n", IP, Port);
	}

	////��ʼ����  ����5��
	//int nConnect = 0;
	//while (++nConnect) {
	//	printf_s("�����ˣ���%d�γ�������...\n", nConnect);
	//	if (connect(SocketServer, (SOCKADDR *)&server_addr, sizeof(SOCKADDR)) == 0) {
	//		// ���ɹ���Ϊ0����������Ϊ-1
	//		printf("������ˣ�����ˣ�%s:%d ���ӳɹ�!\n", IP, Port);
	//		break;
	//	}
	//	if (nConnect == 5) {
	//		printf("������ˣ�����ˣ�����ʧ��\n");
	//		DiscRobotTCP();
	//		return 0;
	//	}
	//	Sleep(1);
	//}

	return 1;
}

//��ȡ�����˵�ǰ����
int CRobotTCP::GetRobotXYZABC(float* x, float* y, float* z, float* a, float* b, float* c,
	double* a1, double* a2, double* a3, double* a4, double* a5, double* a6)
{
	//��������
	recvResult = recv(SocketServer, recvMessage, 2000, 0);
	if (recvResult <= 0)
	{
		cout << "δ���յ�����!�����жϣ�" << endl;
		DiscRobotTCP();
	}
	//======����������͸���Ƕ�======================================================================================
	string recvPos_Axis = recvMessage;
	if (recvPos_Axis.length() > 20)    //�����ٽ�ֵ�жϽ��������Ƿ�Ϊ��Ч����
	{
		//����XYZABC����
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
		for (int i = 0; i < 6; i++)     //����6����Ƕ�
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
			//cout << "A" << i+1 << "��:" << '"' << AxisGroup[i] << '"'<< endl;        //��ʾ���յ�6����Ƕ�
		}
		cout.precision(10);//���þ���Ϊ10λ

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
		cout << "���յ���Ч��Ϣ��" << recvPos_Axis << endl;   //ֱ����ʾ���յ�ԭ����
	}
	return 1;
}

//���Ϳ��ƻ����˵�����
int CRobotTCP::CtrlRobotXYZABC(float x, float y, float z, float a, float b, float c)
{
	if (recvResult > 0)   //�ж��Ƿ���յ����ݲ�Ϊ��
	{
		//cout << "�ѷ��Ϳ�����Ϣ��X=" << x << ", Y=" << y << ", Z=" << z << ", A=" << a << ", B=" << b << ", C=" << c << endl;
		ostringstream xx, yy, zz, aa, bb, cc;
		xx << x;  yy << y;  zz << z;  aa << a;  bb << b;  cc << c;
		string xxx(xx.str()), yyy(yy.str()), zzz(zz.str()), aaa(aa.str()), bbb(bb.str()), ccc(cc.str());
		string sendMessage = "<Sensor><Read><xyzabc X=\"" + xxx + "\" Y=\"" + yyy + "\" Z=\"" + zzz + "\" A=\"" + aaa + "\" B=\"" + bbb + "\" C=\"" + ccc + "\"></xyzabc></Read><Free>998</Free></Sensor>";

		if (send(SocketServer, sendMessage.data(), strlen(sendMessage.data()) + 1, 0) < 0)
		{
			cout << "�ظ�����˵�send����" << endl;
			DiscRobotTCP();
		}
	}
	else if (recvResult == 0)
	{
		cout << "���ӱ��رգ�" << endl;
		DiscRobotTCP();
	}
	else
	{
		cout << "recv����" << endl;
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
	// 	while (true)   //ѭ�����պͷ�������
	// 	{
	robot.GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//���ȶ�ȡ����
	cout << "��  ʼ  �㣺" << x << " " << y << " " << z << " " << a << " " << b << " " << c << endl;
	cout << "��  ʼ  �㣺" << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << endl;

	robot.CtrlRobotXYZABC(x, y, z, a, b, c+10);//�����µ�������Ϣ
	robot.GetRobotXYZABC(&x, &y, &z, &a, &b, &c, &a1, &a2, &a3, &a4, &a5, &a6);//���ȶ�ȡ����
	cout << "Ŀ  ��  �㣺" << x << " " << y << " " << z << " " << a << " " << b << " " << c << endl;
	cout << "Ŀ  ��  �㣺" << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << endl;

//	}
	cout << "ͨѶ��ϣ�" << endl;
	//robot.DiscRobotTCP();//����ر�socket
	system("pause");
}
