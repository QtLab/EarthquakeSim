#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QPaintEvent>
#include <QPainter>
#include <QTimer>
#include "sim.h"
#include "point.h"
#include "iostream"

using namespace std;

class Sim;
class GLWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget *parent = 0);
    Sim *sim;

    QTimer* timer;
    QTimer* frameTimer;
    void startup();

protected:
    void paintEvent(QPaintEvent *event);
    void draw();

signals:

public slots:
    void advanceTime(void);
    void advanceFrame(void);
};

#endif // GLWIDGET_H
