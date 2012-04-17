#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QMutex>
#include <QImage>

class Thread : public QThread
{
    Q_OBJECT

public:
    explicit Thread(QObject *parent = 0);
    void run();
    QMutex mutex;
    QImage image;
    QImage image2;
    double canny_t1, canny_t2;
    int hl_threshold, hlp_threshold;
    double hlp_minLineLength, hlp_maxLineGap;
    int pre_detector;
    int detector;
    double ym, teta;
    int lineas_detectadas;
    double at_maxValue;
    int at_blockSize;
    double at_C;
    double hc_dp, hc_minDist, hc_param1, hc_param2;
    int hc_minRadius, hc_maxRadius;

signals:
    void imageReady();

};
#endif // THREAD_H
