#include "mainwindow.h"
#include "controller.h"
#include "settings.h"
#include "apropos.h"
#include "manuel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Settings s;
    aPropos ap;
    Manuel m;
    Controller controller(&w,&s,&ap,&m);
    controller.initialize();
    s.show();
    return a.exec();
}
