 #include "camerathread.h"

CameraThread::CameraThread()
{
    cameraPtr =nullptr;
}
CameraThread::~CameraThread()
{
    if(cameraPtr==nullptr)
    {
        delete cameraPtr;
    }
    if(imagePtr==nullptr)
    {
        delete imagePtr;
    }
}
void CameraThread::getCameraPtr(MvCameras *camera)
{
    cameraPtr=camera;
}

void CameraThread::getImagePtr(cv::Mat *image)
{
    imagePtr=image;
}

void CameraThread::run()
{
    if(cameraPtr==nullptr)
    {
        return;
    }

    if(imagePtr==nullptr)
    {
        return;
    }
    status = true;

    while(status)
    {
//        std::cout<<"Thread_Trigger:"<<cameraPtr->softTrigger()<<std::endl;
//        std::cout<<"Thread_Readbuffer:"<<cameraPtr->ReadBuffer(*imagePtr)<<std::endl;
        cameraPtr->softTrigger();
        cameraPtr->ReadBuffer(*imagePtr);
        emit mess();
        msleep(20);
    }
}

void CameraThread::stop()
{
    status = false;
}
