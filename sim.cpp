#include "sim.h"

Sim::Sim()
{
    numPoints = 5;

    for(int i=0; i<numPoints; i++)
    {
        Point *p = new Point(i*5, i*5);
        points.push_back(*p);
    }
}

Sim::draw(GLWidget *widget)
{
    for(Point& p : points)
    {
        p.draw(widget);
    }

}

// Continue the simulation
void Sim::simStep()
{
    // test
    rightStep(1);
}

// Move all points to the right
void Sim::rightStep(float delta)
{
    for(Point& p : points)
    {
        p.position.setX(p.position.x() + delta);
    }
}
