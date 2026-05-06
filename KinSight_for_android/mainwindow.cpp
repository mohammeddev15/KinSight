#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QScreen>
#include"start.h"
#include"about.h"
#include"servise.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("KinSight ");
    setWindowIcon(QIcon(":/images/kinsight_ion.png"));
    setGeometry(QGuiApplication::primaryScreen()->availableGeometry());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    start *star=new start();
    star->show();
    this->close();
}


void MainWindow::on_pushButton_clicked()
{
    about *abot=new about();
    abot->show();
    this->close();
}


void MainWindow::on_pushButton_2_clicked()
{
    servise *servis =new servise();
    servis->show();
    this->close();
}

