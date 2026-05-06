#include "start.h"
#include "ui_start.h"
#include <QScreen>
#include"om.h"
#include"father.h"
start::start(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::start)
{
    ui->setupUi(this);
    setWindowTitle("KinSight ");
    setWindowIcon(QIcon(":/images/kinsight_ion.png"));
    setGeometry(QGuiApplication::primaryScreen()->availableGeometry());
}

start::~start()
{
    delete ui;
}

void start::on_pushButton_clicked()
{
    father *ab=new father();
    ab->show();
    this->close();
}


void start::on_pushButton_2_clicked()
{
    om *ome =new om();
    ome->show();
    this->close();
}

