#ifndef QPAINTSWIDGET_H
#define QPAINTSWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QWheelEvent>
#include <QPaintEvent>
#include <QDebug>

class QPaintsWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QPaintsWidget(QWidget *parent = nullptr);
    void setImage(const QImage& image,const QRect& paint);

protected:
    void paintEvent(QPaintEvent*) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;
private:
    QImage img;
//    QImage cuRimg;
    int pixW;            //图片宽
    int pixH;            //图片高
    float ratio;              //缩放比例
    QPoint offset = QPoint(0,0);           //一次的图片偏移值
    QPoint Alloffset =QPoint(0,0);          //总偏移
    QRect Paint;         //绘画区域
    QPoint PreDot;       //按下点初始值
    bool m_bLeftPressed;
};

#endif // QPAINTSWIDGET_H
