#include "qpaintmainwidget.h"

QPaintMainWidget::QPaintMainWidget(QWidget *parent) : QWidget(parent)
{
    ratio =0.2;
}

void QPaintMainWidget::setImage(const QImage& image,const QRect& paint)
{
    img =image;
    pixW = image.width();            //图片宽
    pixH = image.height();           //图片高
    Paint = paint;
}

void QPaintMainWidget::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    if(img.isNull())
    {
     return;
    }

    int NowW = ratio *pixW;
    int NowH = ratio *pixH;
    img= img.scaled(NowW, NowH,Qt::KeepAspectRatio,Qt::SmoothTransformation);
    painter.setRenderHints(QPainter::SmoothPixmapTransform|QPainter::Antialiasing|QPainter::TextAntialiasing);
//    p.drawRect(Paint.x()-1,Paint.y()-1,Paint.width()+1,Paint.height()+1); //画框
    //Set the painter to use a smooth scaling algorithm.
//    p.setRenderHint(QPainter::SmoothPixmapTransform, 1);
    if(abs(Alloffset.x())>=(Paint.width()/2 + NowW/2))    //限制X偏移值
    {
        if(Alloffset.x()>0)
            Alloffset.setX(Paint.width()/2 + NowW/2);
        else
         Alloffset.setX(-Paint.width()/2 + -NowW/2);

    }
    if(abs(Alloffset.y())>=(Paint.height()/2 + NowH/2))    //限制Y偏移值
    {
        if(Alloffset.y()>0)
            Alloffset.setY(Paint.height()/2 + NowH/2);
        else
         Alloffset.setY(-Paint.height()/2 + -NowH/2);

    }

    int x = Paint.width()/2 + Alloffset.x() -NowW/2;
    if(x<0)
        x=0;

    int y = Paint.height()/2 + Alloffset.y() -NowH/2;
    if(y<0)
        y=0;

    int  sx = NowW/2 - Paint.width()/2 - Alloffset.x();
    if(sx<0)
        sx=0;

    int  sy = NowH/2 - Paint.height()/2 - Alloffset.y();
    if(sy<0)
        sy=0;

    int w =(NowW - sx)>Paint.width()? Paint.width() : (NowW - sx);
    if(w>(Paint.width()-x))
        w = Paint.width()-x;

    int h =(NowH - sy)>Paint.height()? Paint.height() : (NowH - sy);
    if(h>(Paint.height()-y))
        h = Paint.height()-y;
    qDebug()<<"main"<<Paint<<ratio<<x<<y<<sx<<sy<<w<<h;
    painter.drawImage(x,y,img,sx,sy,w,h);

}

void QPaintMainWidget::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    PreDot = event->pos();
    m_bLeftPressed = true;
}

void QPaintMainWidget::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);

    m_bLeftPressed = false;
}

void QPaintMainWidget::mouseMoveEvent(QMouseEvent *event)
{
    if (m_bLeftPressed) {
        int xpos = event->pos().x();
        int ypos = event->pos().y();
        offset.setX(xpos - PreDot.x());
        offset.setY(ypos- PreDot.y());
        PreDot = event->pos();
        int offsetx=Alloffset.x()+offset.x();
        Alloffset.setX(offsetx);
        int offsety=Alloffset.y()+offset.y();
        Alloffset.setY(offsety);
//        qDebug()<<PreDot;
        this->update();
//        int xoffset = xpos - m_lastPos.x();
//        int yoffset = m_lastPos.y() - ypos;
//        m_lastPos = event->pos();
//        camera->processMouseMovement(xoffset, yoffset);
    }
}

void QPaintMainWidget::wheelEvent(QWheelEvent *event)
{
    if (event->delta()>0)
    {
        ratio-=0.05*ratio;
        if (ratio<0.018) ratio = 0.01;
//        qDebug()<<"minimus";
    }
    else
    {
        ratio+=0.05*ratio;
        if(ratio>4.5)
        ratio = 5.000;
//        qDebug()<<"plus";
    }
    this->update();
//    QPoint offset = event->angleDelta();
//    camera->processMouseScroll(offset.y()/20.0f);
}
