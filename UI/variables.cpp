#include "variables.h"



destination plc_Address = {"192.168.1.5","5432"}, sensor_Address = {"192.168.1.108","4008"}, camera_Address = {"192.168.1.108","4008"},
robot_Address = {"192.168.1.108","4008"}; /*各类ip地址*/
//QList<QCameraInfo> m_camera;
QStringList m_camera;
QString camera_Save_address = "./pics";
QString Oorientation_Save_Address = "./orientation";
vector<string> g_parent_type;
//int select_camera = 0;
QString select_camera = "001358DB82";
//QString PicsFloderAddress = "./pics";
vector<Coordinate> g_objects;
bool settings =false;
