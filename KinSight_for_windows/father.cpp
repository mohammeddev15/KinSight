#include "father.h"
#include "ui_father.h"
#include <QScreen>
#include"fath_boy.h"
#include"fath_girle.h"

father::father(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::father)
{
    ui->setupUi(this);
    setWindowTitle("KinSight ");
    setWindowIcon(QIcon(":/images/kinsight_ion.png"));
    setGeometry(QGuiApplication::primaryScreen()->availableGeometry());
}

father::~father()
{
    delete ui;
}

void father::on_pushButton_clicked()
{
    fath_boy *boy =new fath_boy();
    boy->show();
    this->close();
}


void father::on_pushButton_2_clicked()
{
    fath_girle *girle =new fath_girle();
    girle->show();
    this->close();
}

