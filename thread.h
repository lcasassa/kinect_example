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

signals:
    void imageReady();

};
#endif // THREAD_H
