#ifndef SUNSPOTS_H
#define SUNSPOTS_H

#include <QMainWindow>
#include <QScopedPointer>

namespace Ui {
class Sunspots;
}

class Sunspots : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sunspots(QWidget *parent = nullptr);
    ~Sunspots() override;

private:
    QScopedPointer<Ui::Sunspots> m_ui;
};

#endif // SUNSPOTS_H
