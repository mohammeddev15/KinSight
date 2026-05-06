#include "om.h"
#include "ui_om.h"
#include <QScreen>
#include"math_boy.h"
#include"math_girle.h"

om::om(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::om)
{
    ui->setupUi(this);
    setWindowTitle("KinSight ");
    setWindowIcon(QIcon(":/images/kinsight_ion.png"));
    setGeometry(QGuiApplication::primaryScreen()->availableGeometry());
}

om::~om()
{
    delete ui;
}

void om::on_pushButton_clicked()
{
    math_boy *boy=new math_boy();
    boy->show();
    this->close();
}


void om::on_pushButton_2_clicked()
{
    math_girle *girle =new math_girle();
    girle->show();
    this->close();
}

