/********************************************************************************
** Form generated from reading UI file 'sunspots.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUNSPOTS_H
#define UI_SUNSPOTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sunspots
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Sunspots)
    {
        if (Sunspots->objectName().isEmpty())
            Sunspots->setObjectName(QString::fromUtf8("Sunspots"));
        Sunspots->resize(400, 300);
        centralWidget = new QWidget(Sunspots);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Sunspots->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Sunspots);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Sunspots->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Sunspots);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Sunspots->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Sunspots);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Sunspots->setStatusBar(statusBar);

        retranslateUi(Sunspots);

        QMetaObject::connectSlotsByName(Sunspots);
    } // setupUi

    void retranslateUi(QMainWindow *Sunspots)
    {
        Sunspots->setWindowTitle(QCoreApplication::translate("Sunspots", "Sunspots", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sunspots: public Ui_Sunspots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUNSPOTS_H
