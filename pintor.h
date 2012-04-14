#ifndef PINTOR_H
#define PINTOR_H

#include <QWidget>
#include <QPainter>

class Pintor : public QWidget
{
    Q_OBJECT
public:
    explicit Pintor(QWidget *parent = 0);

private:
    void paintEvent ( QPaintEvent * event );
    QPixmap m_tmpPix;

signals:

public slots:
    void copyImage(const QImage& imm);

};

#endif // PINTOR_H
