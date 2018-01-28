#include "mainwindow.h"
#include "controller.h"
#include "settings.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Settings s;
    Controller controller(&w,&s);
    controller.initialize();
    return a.exec();
}
