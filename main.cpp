#include "CalculatorWithQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorWithQt w;
    w.show();
    return a.exec();
}
