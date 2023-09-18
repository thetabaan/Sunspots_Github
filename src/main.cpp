#include "sunspots.h"
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <cmath>

void drawAxes(QGraphicsScene &scene, int L, int R, int T, int B){
    QPen lineWhite(QColor(255,255,255));
    QPoint UL(L, T);
    QPoint BL(L, B);
    QPoint UR(R, T);
    QPoint BR(R, B);

    QLine graphLeft(UL, BL);
    QLine graphBottom(BL, BR);

    scene.addLine(graphLeft, lineWhite);
    scene.addLine(graphBottom, lineWhite);

    QFont font;
    font.setFamily("Arial");
    font.setPointSize(8);

    int tickSize = 5;

    int nV = 20;
    int distV = B-T;
    int vStep = distV / nV;

    for (int i = 0; i <= nV; ++i){
        int pointY = B - i * vStep;
        QPoint p1(L, pointY);
        QPoint p2(L-tickSize, pointY);
        scene.addLine(QLine(p1, p2), lineWhite);

        QPoint textLoc(L-25, pointY-10);
        QGraphicsTextItem* textItem = new QGraphicsTextItem();
        textItem->setPlainText(QString::number(i));
        textItem->setPos(textLoc);
        textItem->setFont(font);
        scene.addItem(textItem);
    }

    int nH = 20;
    int distH = R-L;
    int hStep = distH / nH;

    for (int i = 0; i <= nH; ++i) {
        int pointX = L + i * hStep;
        QPoint p1(pointX, B);
        QPoint p2(pointX, B+tickSize);
        scene.addLine(QLine(p1, p2), lineWhite);

        QPoint textLoc(pointX -7, B + 5);
        QGraphicsTextItem* textItem = new QGraphicsTextItem();
        textItem->setPlainText(QString::number(i));
        textItem->setPos(textLoc);
        textItem->setFont(font);
        scene.addItem(textItem);
    }
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QGraphicsScene scene;
    QGraphicsView view(&scene);

    // Parameters for the plot
    const int sceneWidth = 800;
    const int sceneHeight = 600;
    const int xOffset = sceneWidth / 2;
    const int yOffset = sceneHeight / 2;

    // Set scene size
    scene.setSceneRect(0, 0, sceneWidth, sceneHeight);

    // Set background to dark gray
    QBrush backgroundGray(QColor(20,20,20));
    scene.setBackgroundBrush(backgroundGray);

    int leftMargin = 32;
    int rightMargin = 20;
    int topMargin = 20;
    int bottomMargin = 32;

    drawAxes(scene, leftMargin, sceneWidth-rightMargin, topMargin, sceneHeight-bottomMargin);




    // // Draw a sine curve
    // for (int i = -xOffset; i < xOffset; ++i) {
    //     int y1 = yOffset - static_cast<int>(100.0 * std::sin(i * 0.05));
    //     int y2 = yOffset - static_cast<int>(100.0 * std::sin((i + 1) * 0.05));
    //     scene.addLine(xOffset + i, y1, xOffset + i + 1, y2, lineWhite);
    // }

    view.setRenderHint(QPainter::Antialiasing);
    view.show();


    // Sunspots w;
    // w.show();

    return app.exec();
}

