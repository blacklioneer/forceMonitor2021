#include <vector>
#include<iostream>
#include<QString>
#include<QCamera>
#include<QCameraInfo>
#pragma once
using namespace std;


struct Coordinate{
    float angle_x;
    float angle_y;
    float angle_z;
    float angle_mx;
    float angle_my;
    float angle_mz;

}; /*位置坐标和力坐标共用数据*/

struct PointCoordinate{
    int num;
    double angle_x;
    double angle_y;
    double angle_z;
};

struct destination{
    QString ip;
    QString port;
};

//extern   QList<QCameraInfo> m_camera; /*当前所有连接相机信息表*/
//extern  int select_camera;    /*当前选中相机*/
extern bool settings;   /*当前是否完成连接配置*/
extern   QStringList m_camera; /*当前所有连接相机信息表*/
extern  QString select_camera;    /*当前选中相机*/
//extern  string PicsFloderAddress;    /*当前图片保存路径*/
//extern    QList<QCamera*> m_cameraList;
extern destination plc_Address, sensor_Address, camera_Address,robot_Address; /*各类ip地址*/
extern QString camera_Save_address,Oorientation_Save_Address;  /*信息保存地址*/
extern vector<string> g_parent_type;
extern vector<Coordinate> g_objects;
