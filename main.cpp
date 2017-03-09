#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;

    QPushButton *button = new QPushButton("Quit the Program");
    QObject::connect(button,SIGNAL(clicked()),&app, SLOT(quit()));
    button->show();

    w.show();
    return app.exec();
}
