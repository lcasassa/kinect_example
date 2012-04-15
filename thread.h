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
    double t1, t2;
    int hl;

signals:
    void imageReady();

};
#endif // THREAD_H
