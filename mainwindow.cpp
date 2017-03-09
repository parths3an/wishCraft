#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Quit_clicked()
{
 //This is kill the program.
 exit(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    //window variable nextWindow doesn't exist yet.
    //nextWindow->show();
    button->show();
}
