#include "pintor.h"

Pintor::Pintor(QWidget *parent) :
    QWidget(parent)
{
}

void Pintor::paintEvent(QPaintEvent* e) {
    QPainter painter(this);
    QPen pen;
    pen.setColor(qRgb(255, 0, 255));
    painter.setPen(pen);

    painter.drawPixmap(QPoint(0, 0), m_tmpPix);
    painter.drawRect(0, 0, 100, 100);
}

void Pintor::copyImage(const QImage& imm)
{
         m_tmpPix = QPixmap::fromImage(imm);
         update();
}
