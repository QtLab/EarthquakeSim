#ifndef SIM_H
#define SIM_H

#include <QPainter>
#include <QRect>
#include "glwidget.h"

using namespace std;

#pragma once

class GLWidget;
class Point;
class Sim
{
public:
    Sim();
    draw(GLWidget *widget);

    // Stores the current state
    vector<Point> points;
    int numPoints;

    // Continues the simulation
    void simStep();
    void rightStep(float delta);
};

#endif // SIM_H
