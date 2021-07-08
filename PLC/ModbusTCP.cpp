#include "ModbusTCP.h"

//IP�ַ���ת�ֽ�
unsigned int ModbusTCP::IP_to_BYTE(const string &strIP)
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

//��ModbusTCP
int ModbusTCP::OpenModbusTCP(string strIP)
{
	int conn_num = 0;
	int ip = IP_to_BYTE(strIP);		//����IP��ַ
	//printf("byte����ip: %d \n", ip);
	DWORD dwIP = ip;		//DWORD dwIP = -1062700017;		//3232267279
	//cout << "dwIP: " << dwIP << endl;

	int i=1;
	while (OpenModbusTCPSocket(conn_num, htonl(ip)) == -1)
	{
		cout << "ModbusTCP����ʧ��,���ڽ��е�" << i << "������..." << endl;
		i++;
        if (i>5)
		{
            QMessageBox msgBox;
            msgBox.setWindowTitle(QString::fromLocal8Bit("����"));/** ���ñ��� **/
            msgBox.setText(QString::fromLocal8Bit("ModbusTCP����ʧ�ܣ���������"));
//                msgBox.setInformativeText("Do you want to save your changes?");/** ���ø��ḻһ�����Ϣ **/
            msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);/** ��ӱ�׼��ť **/
            msgBox.setDefaultButton(QMessageBox::Yes);/** ����Ĭ�ϰ�ť **/
            msgBox.setIcon(QMessageBox::Warning);/** ����ͼ�� **/
            msgBox.exec();/** ���ص���İ�ť��Ӧ������ֵ **/
            return -1;
//			cout << "--------------------ModbusTCP����ʧ�ܣ���������--------------------" << endl;
//			system("pause");
		}
	}
	return 0;
}

//��������
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

	//�ж����ݳ����Ƿ��㹻
	if (sendData.length() < 4) // at least slave address and function code
	{
		cout << "--------------------Modbus���ݳ��Ȳ���--------------------" << endl;
		system("pause");
	}

	//�ж����ݸ����Ƿ�Ϊż��
	if (sendData.length() % 2 != 0) // input data must be even number
	{
		cout << "--------------------Modbus���ݸ�������Ϊż��--------------------" << endl;
		system("pause");
	}
	//�ж��Ƿ�����Ч����
	for (int i = 0; i < sendData.length(); ++i) // input data verification
	{
		if (strValid.find(sendData.substr(i, 1)) == -1)
		{
			cout << "--------------------Modbus���ݺ�����Ч�ַ�--------------------" << endl;
			system("pause");
		}
	}
	//��ȡ��ַ�������롢����
	for (int i = 0; i < sendData.length(); i += 2)
	{
		int num = 0;
		string str0 = sendData.substr(i, 1);
		string str1 = sendData.substr(i + 1, 1);
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
	cout << "�������ݣ���" << sendData << "��" << endl;

	//��������
	int reqNum = RequestData(comm_type, conn_num, modbus_addr, modbus_func, sendbuf, sendlen); // modbus request
	if (reqNum == -1)
	{
		cout << "--------------------Modbus���ݷ���ʧ��--------------------" << endl;
		system("pause");
	}
	return 0;
}

//��������
int ModbusTCP::RecvModbusData(string *recvData)
{
	unsigned char recvbuf[1024] = { 0 };
	char A2H[3] = { 0 };
	*recvData = "";		//��ʼ�������recvData����
	int modbus_addr_ret = 0;
	int modbus_func_ret = 0;
	int comm_type = 1; // 0:RS-232 , 1:Ethernet
	int modbus_addr = 0;
	int modbus_func = 0;
	int conn_num = 0;

	//��������
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
		cout << "�������ݣ���" << *recvData << "��" << endl;
		cout << "--------------------���ݷ��ͳɹ�--------------------" << endl;
	}
	else
	{
		cout << "--------------------����δ���յ��κ�����--------------------" << endl;
		//system("pause");
	}
	return 0;
}

//�ر�ModbusTCP
int ModbusTCP::CloseModbusTCP()
{
	int conn_num = 0;
	CloseSocket(conn_num);
	return 0;
}

//һ���Կ���PLC�������������ӡ����͡����ܡ��ر�
int ModbusTCP::CtrlPLC(string strIP, string sendData)
{
	string *recvData;
	OpenModbusTCP(strIP);
	SendModbusData(sendData);
	RecvModbusData(recvData);
	CloseModbusTCP();
	return 0;
}

