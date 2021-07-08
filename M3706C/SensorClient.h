#pragma once
#include<iostream>            //����ľ�����Ҫ��������������
#include<WinSock2.h>          //����socket����
//#include<WS2tcpip.h>

using std::string;
#define M3706C_CHN_NUMBER	6

/*
��Ҫ����λ��CSensorClient����Ϊ�ͻ��ˣ�����������Ϊ�����
*/

union DealDataDouble2Byte_TypeDef
{
	double	m_DoubleResultData;
	BYTE	m_ByteResultDataBuffer[8];	//6ͨ�����ݣ�һ��ͨ������ռ 8byte/�ֽ�
};
// Ĭ��SUMУ�鷽ʽ
enum DecodeMethod {
	SUM,
	CRC32
};

union DealDataFloat2Byte_TypeDef
{
	float	m_FloatResultData;
	BYTE	m_ByteResultDataBuffer[4];	//6ͨ�����ݣ�һ��ͨ������ռ 4byte/�ֽ�
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
	BOOL m_flagSUM = true;	// Ĭ��SUM��ʽ
	double decodedValue[M3706C_CHN_NUMBER];	// ��ͨ������ֵEigenvalues
	union DealDataFloat2Byte_TypeDef DealDataBufferUnion[M3706C_CHN_NUMBER];

private:
	int __DataDecoding(BYTE* pRxBuffer, DWORD dataLen, double(&dDecodedValue)[M3706C_CHN_NUMBER]);

public:
	int InitTCP(const char* stIp, int nPort);
	int DiscTCP();
	int GetDataGOD(double(&dDecodedValue)[M3706C_CHN_NUMBER]);
	/* secv �����������ͣ��������˲�ִ�й�ȥ;�������ˣ�û�м�ʱ�ɼ��ߣ���һ����������֮��ᶥ��֮ǰ��*/
	int GetDataGSD(double(&dDecodedValue)[M3706C_CHN_NUMBER]);
	/* ����Ƶ��Ҫ��С��10Hz�������õ�nFrequencyС��10�������Ƶ�ʲ�׼*/
	int SetGSDParams(int nFrequency = 200);
};

void GetData(CSensorClient &Stcp, double(&dValueGSD)[M3706C_CHN_NUMBER], int &nFrequency, bool &bStopFlag);
