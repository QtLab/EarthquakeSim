#include "point.h"

Point::Point(float _x, float _y)
{
    position.setX(_x);
    position.setY(_y);
}

void Point::draw(QWidget *widget)
{
    QPainter painter(widget);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::black);
    painter.drawRect(widget->rect());
    painter.drawEllipse(position, 5, 5);
    painter.end();
}
