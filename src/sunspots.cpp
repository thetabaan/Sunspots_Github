#include "sunspots.h"
#include "ui_sunspots.h"

Sunspots::Sunspots(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::Sunspots)
{
    m_ui->setupUi(this);
}

Sunspots::~Sunspots() = default;
