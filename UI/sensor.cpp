#include"sensor.h"
#include "variables.h"
//#include <windows.h> 

using namespace std;
CSensor::CSensor(QObject *parent) {
    bThreadStop = false; /*�޸�����Ӧ��ť����*/
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
		// �ɼ������� �����vXYZMxMyMz
		Stcp->GetDataGOD(dXYZMxMyMz);
		emit EmitXYZMxMyMz(i,dXYZMxMyMz, M3706C_CHN_NUMBER);
		sleep(1);	// ���Ʋ������
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
//		sleep(1);	// ���Ʋ������
//	}
//}
