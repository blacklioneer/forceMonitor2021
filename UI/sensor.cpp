#include"sensor.h"
#include "variables.h"
//#include <windows.h> 

using namespace std;
CSensor::CSensor(QObject *parent) {
    bThreadStop = false; /*修改以适应按钮需求*/
    //changed to fix the system
    stIp = sensor_Address.ip.toStdString().c_str();
    nPort = sensor_Address.port.toInt();
	Stcp = CSensorClient::GetSensorInstance(stIp, nPort);
}
CSensor::~CSensor() {

}

void CSensor::run() {
	double dXYZMxMyMz[6] = {};
	int i = 0;
	while (!bThreadStop) {
		i++;
		// 采集力数据 先清空vXYZMxMyMz
		Stcp->GetDataGOD(dXYZMxMyMz);
		emit EmitXYZMxMyMz(i,dXYZMxMyMz, M3706C_CHN_NUMBER);
		sleep(1);	// 控制采样间隔
	}
}

void CSensor::stop(bool signal) {
    bThreadStop = signal;
    }

//void CSensor::run() {
//	double dXYZMxMyMz[6] = {};
//	int i = 0;
//	while (!bThreadStop) {
//		cout << "run" << endl;
//		dXYZMxMyMz[0] = (i++) % 100;
//		dXYZMxMyMz[4] = (i++) % 100;
//		emit EmitXYZMxMyMz(i, dXYZMxMyMz, M3706C_CHN_NUMBER);
//		sleep(1);	// 控制采样间隔
//	}
//}
