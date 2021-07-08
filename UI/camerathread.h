#ifndef CAMERATHREAD_H
#define CAMERATHREAD_H
#include"QThread"
#include"mvcameras.h"

class CameraThread:public QThread
{
    Q_OBJECT

public:
    CameraThread();
    ~CameraThread();

    void getCameraPtr(MvCameras* camera);
    void getImagePtr(cv::Mat* image);
    void run();
    void stop();
private slots:
signals:
    void mess();

private:
    bool status = false;
    MvCameras *cameraPtr;
    cv::Mat *imagePtr;

};

#endif // CAMERATHREAD_H
