#include "servise.h"
#include "ui_servise.h"
#include <QScreen>
#include"mainwindow.h"

servise::servise(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::servise)
{
    ui->setupUi(this);
    setWindowTitle("KinSight ");
    setWindowIcon(QIcon(":/images/kinsight_ion.png"));
    setGeometry(QGuiApplication::primaryScreen()->availableGeometry());
}

servise::~servise()
{
    delete ui;
}

void servise::on_pushButton_clicked()
{
    MainWindow *greet=new MainWindow();
    greet->show();
    this->close();
}

