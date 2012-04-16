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
    bool hl_o_hlp;

signals:
    void imageReady();

};
#endif // THREAD_H
