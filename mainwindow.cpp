#include "mainwindow.h"
#include "ui_mainwindow.h"

/*
Eject v.1 Copyright (c) 2019 JJ Posti <techtimejourney.net>
Eject comes with ABSOLUTELY NO WARRANTY;
for details see: http://www.gnu.org/copyleft/gpl.html.
This is free software, and you are welcome to redistribute it under
GPL Version 2, June 1991
*/


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Make frameless window.
    MainWindow::setWindowFlags(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Toggle eject.
void MainWindow::on_eject_clicked()
{
    system("eject -T");
}
