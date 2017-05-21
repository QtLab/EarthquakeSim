#include "glwidget.h"

// simulation timer interval (millisec)
static int timer_interval = 10;

GLWidget::GLWidget(QWidget *parent) : QWidget(parent)
{
    sim = new Sim();
    startup();
}

void GLWidget::paintEvent(QPaintEvent *event)
{
    draw();
}

void GLWidget::draw()
{
    sim->draw(this);
}

// Connect to signals
void GLWidget::startup()
{
    timer = new QTimer( this );
    frameTimer = new QTimer( this);
    connect( timer, SIGNAL(timeout()), this, SLOT(advanceTime()) );
    connect( frameTimer, SIGNAL(timeout()), this, SLOT(advanceFrame()) );

    frameTimer->start(20);
    timer->start(50);
}

// Advance time logic (calculation stuff)
void GLWidget::advanceTime()
{
    // if a simulation is present, advance it
    if (sim != NULL) sim->simStep();

}

// Advance frame logic (animation stuff)
void GLWidget::advanceFrame()
{
    update();
}
