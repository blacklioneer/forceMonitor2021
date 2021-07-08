#include "ModbusTCP.h"

//IP字符串转字节
unsigned int ModbusTCP::IP_to_BYTE(const string &strIP)
{
	unsigned int nRet = 0;
	char chBuf[16] = "";
	memcpy_s(chBuf, 15, strIP.c_str(), 15);

	char* szBufTemp = NULL;
	char* szBuf = strtok_s(chBuf, _IP_MARK, &szBufTemp);

	int i = 0;//计数
	while (NULL != szBuf)//取一个
	{
		nRet += atoi(szBuf) << ((3 - i) * 8);
		szBuf = strtok_s(NULL, _IP_MARK, &szBufTemp);
		i++;
	}
	return nRet;
}

//打开ModbusTCP
int ModbusTCP::OpenModbusTCP(string strIP)
{
	int conn_num = 0;
	int ip = IP_to_BYTE(strIP);		//本机IP地址
	//printf("byte类型ip: %d \n", ip);
	DWORD dwIP = ip;		//DWORD dwIP = -1062700017;		//3232267279
	//cout << "dwIP: " << dwIP << endl;

	int i=1;
	while (OpenModbusTCPSocket(conn_num, htonl(ip)) == -1)
	{
		cout << "ModbusTCP连接失败,正在进行第" << i << "次重连..." << endl;
		i++;
        if (i>5)
		{
            QMessageBox msgBox;
            msgBox.setWindowTitle(QString::fromLocal8Bit("警告"));/** 设置标题 **/
            msgBox.setText(QString::fromLocal8Bit("ModbusTCP连接失败，请检查连接"));
//                msgBox.setInformativeText("Do you want to save your changes?");/** 设置更丰富一点的信息 **/
            msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);/** 添加标准按钮 **/
            msgBox.setDefaultButton(QMessageBox::Yes);/** 设置默认按钮 **/
            msgBox.setIcon(QMessageBox::Warning);/** 设置图标 **/
            msgBox.exec();/** 返回点击的按钮对应的整型值 **/
            return -1;
//			cout << "--------------------ModbusTCP连接失败，请检查连接--------------------" << endl;
//			system("pause");
		}
	}
	return 0;
}

//发送数据
int ModbusTCP::SendModbusData(string sendData)
{
	unsigned char sendbuf[1024] = { 0 };
	int sendlen = 0;
	char A2H[3] = { 0 };
	string strValid = "0123456789ABCDEF";
	int comm_type = 1; // 0:RS-232 , 1:Ethernet
	int modbus_addr = 0;
	int modbus_func = 0;
	int conn_num = 0;

	//判断数据长度是否足够
	if (sendData.length() < 4) // at least slave address and function code
	{
		cout << "--------------------Modbus数据长度不足--------------------" << endl;
		system("pause");
	}

	//判断数据个数是否为偶数
	if (sendData.length() % 2 != 0) // input data must be even number
	{
		cout << "--------------------Modbus数据个数必须为偶数--------------------" << endl;
		system("pause");
	}
	//判断是否有无效数据
	for (int i = 0; i < sendData.length(); ++i) // input data verification
	{
		if (strValid.find(sendData.substr(i, 1)) == -1)
		{
			cout << "--------------------Modbus数据含有无效字符--------------------" << endl;
			system("pause");
		}
	}
	//截取地址、功能码、数据
	for (int i = 0; i < sendData.length(); i += 2)
	{
		int num = 0;
		string str0 = sendData.substr(i, 1);
		string str1 = sendData.substr(i + 1, 1);
		// 			cout << "str0：" << str0 << endl;
		// 			cout << "str1：" << str1 << endl;
		A2H[0] = str0[0];
		A2H[1] = str1[0];
		// 			cout << "A2H[0]：" << A2H[0] << endl;
		// 			cout << "A2H[1]：" << A2H[1] << endl;
		sscanf(A2H, "%02X", &num);		//%02X表示以16进制的格式输出整数类型的数值，输出域宽为2，右对齐，不足的用字符0替代。
		//cout << "num：" << num << endl;
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
	//cout << "发送的数据：地址modbus_addr:" << modbus_addr << "    功能码modbus_func:" << modbus_func << "    数据sendbuf:" << sendbuf << endl;
	cout << "发送数据：【" << sendData << "】" << endl;

	//发送数据
	int reqNum = RequestData(comm_type, conn_num, modbus_addr, modbus_func, sendbuf, sendlen); // modbus request
	if (reqNum == -1)
	{
		cout << "--------------------Modbus数据发送失败--------------------" << endl;
		system("pause");
	}
	return 0;
}

//接收数据
int ModbusTCP::RecvModbusData(string *recvData)
{
	unsigned char recvbuf[1024] = { 0 };
	char A2H[3] = { 0 };
	*recvData = "";		//初始化，清空recvData内容
	int modbus_addr_ret = 0;
	int modbus_func_ret = 0;
	int comm_type = 1; // 0:RS-232 , 1:Ethernet
	int modbus_addr = 0;
	int modbus_func = 0;
	int conn_num = 0;

	//接收数据
	int resNum = ResponseData(comm_type, conn_num, &modbus_addr_ret, &modbus_func_ret, recvbuf); // modbus response
	if (resNum > 0)
	{
		sprintf_s(A2H, "%02X", modbus_addr_ret);
		*recvData += A2H;
		sprintf_s(A2H, "%02X", modbus_func_ret);
		*recvData += A2H;
		switch (modbus_func_ret)
		{
		case 0x01:	case 0x02:	case 0x03:
		case 0x04:	case 0x11:	case 0x17:
			sprintf_s(A2H, "%02X", resNum);
			*recvData += A2H;
			break;
		}
		for (int i = 0; i < resNum; ++i) // recover a string from recvbuf
		{
			sprintf_s(A2H, "%02X", recvbuf[i]);
			*recvData += A2H;
		}
		cout << "接收数据：【" << *recvData << "】" << endl;
		cout << "--------------------数据发送成功--------------------" << endl;
	}
	else
	{
		cout << "--------------------错误：未接收到任何数据--------------------" << endl;
		//system("pause");
	}
	return 0;
}

//关闭ModbusTCP
int ModbusTCP::CloseModbusTCP()
{
	int conn_num = 0;
	CloseSocket(conn_num);
	return 0;
}

//一次性控制PLC函数，包括连接、发送、接受、关闭
int ModbusTCP::CtrlPLC(string strIP, string sendData)
{
	string *recvData;
	OpenModbusTCP(strIP);
	SendModbusData(sendData);
	RecvModbusData(recvData);
	CloseModbusTCP();
	return 0;
}

