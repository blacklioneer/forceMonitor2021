#pragma once
#include<iostream>            //定义的就是你要输入和输出的内容
#include<WinSock2.h>          //包含socket函数
//#include<WS2tcpip.h>

using std::string;
#define M3706C_CHN_NUMBER	6

/*
需要把上位机CSensorClient类作为客户端，力传感器作为服务端
*/

union DealDataDouble2Byte_TypeDef
{
	double	m_DoubleResultData;
	BYTE	m_ByteResultDataBuffer[8];	//6通道数据，一个通道数据占 8byte/字节
};
// 默认SUM校验方式
enum DecodeMethod {
	SUM,
	CRC32
};

union DealDataFloat2Byte_TypeDef
{
	float	m_FloatResultData;
	BYTE	m_ByteResultDataBuffer[4];	//6通道数据，一个通道数据占 4byte/字节
};


class CSensorClient
{
public:
        static CSensorClient* GetSensorInstance(const char* stIp, int nPort);
public:
	CSensorClient();

public:
	~CSensorClient();

private:
	SOCKET m_socketClient;
	BOOL m_flagGSD = false;
	BOOL m_flagGOD = false;
	BOOL m_flagSUM = true;	// 默认SUM方式
	double decodedValue[M3706C_CHN_NUMBER];	// 各通道特征值Eigenvalues
	union DealDataFloat2Byte_TypeDef DealDataBufferUnion[M3706C_CHN_NUMBER];

private:
	int __DataDecoding(BYTE* pRxBuffer, DWORD dataLen, double(&dDecodedValue)[M3706C_CHN_NUMBER]);

public:
	int InitTCP(const char* stIp, int nPort);
	int DiscTCP();
	int GetDataGOD(double(&dDecodedValue)[M3706C_CHN_NUMBER]);
	/* secv 函数是阻塞型，来数据了才执行过去;数据来了，没有及时采集走，下一个数据来了之后会顶替之前的*/
	int GetDataGSD(double(&dDecodedValue)[M3706C_CHN_NUMBER]);
	/* 采样频率要不小于10Hz，若设置的nFrequency小于10，则采样频率不准*/
	int SetGSDParams(int nFrequency = 200);
};

void GetData(CSensorClient &Stcp, double(&dValueGSD)[M3706C_CHN_NUMBER], int &nFrequency, bool &bStopFlag);
