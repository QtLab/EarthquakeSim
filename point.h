#ifndef POINT_H
#define POINT_H

#include <QWidget>
#include <QPainter>
#include <QRect>
#include <QPoint>

class GLWidget;

class Point
{
public:
    Point(float _x, float _y);
    void draw(QWidget *widget);

    QPoint position;
};

#endif // POINT_H
