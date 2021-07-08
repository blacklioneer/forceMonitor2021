#pragma once
#include"../M3706C/SensorClient.h"	// 必须放在第一行

#include<iostream>
#include<vector>
#include <QThread>
//#include <QMutex>
//#include <qstring.h>
//#include <QtGui> 
//#include <QtCore> 

class  CSensor : public QThread
{
	Q_OBJECT
public:
	CSensor(QObject *parent = 0);
	~CSensor();
	//QString str = "abc";
	//QMutex mutex;

	// 力传感器ip和port
	const char* stIp;
	int nPort;
	double dXYZMxMyMz[M3706C_CHN_NUMBER];
	CSensorClient *Stcp;
    void stop(bool signal); /** ture 是停下来 **/
	bool bThreadStop;

protected:
	void run();


signals:
	void EmitXYZMxMyMz(int t, double *vXYZMxMyMz, int n);
};
