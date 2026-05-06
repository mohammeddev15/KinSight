#include "fath_boy.h"
#include "ui_fath_boy.h"
#include <QScreen>
#include"mainwindow.h"
#include <QFile>

fath_boy::fath_boy(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::fath_boy)
{
    ui->setupUi(this);
    setWindowTitle("KinSight ");
    setWindowIcon(QIcon(":/images/kinsight_ion.png"));
    setGeometry(QGuiApplication::primaryScreen()->availableGeometry());
}

fath_boy::~fath_boy()
{
    delete ui;
}

void fath_boy::on_pushButton_clicked()
{
    MainWindow *back=new MainWindow();
    back->show();
    this->close();
}


void fath_boy::on_comboBox_activated(int index)
{
    switch (index) {
    case 0:
        break;


    case 1:{
        QFile file(":/father/fath_boy-0-6m.txt");  // لاحظ استخدام:/ بدلاً من qrc:/
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QString content = file.readAll();
            ui->textBrowser->setPlainText(content);
            file.close();
        }
    }
    break;
    case 2:{
        QFile file(":/father/fath_boy-7-12m.txt");  // لاحظ استخدام:/ بدلاً من qrc:/
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QString content = file.readAll();
            ui->textBrowser->setPlainText(content);
            file.close();
        }
    }

    break;
    case 3:{
        QFile file(":/father/fath_boy-1-3y.txt");  // لاحظ استخدام:/ بدلاً من qrc:/
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QString content = file.readAll();
            ui->textBrowser->setPlainText(content);
            file.close();
        }
    }

    break;
    case 4:{
        QFile file(":/father/fath_boy-4-6y.txt");  // لاحظ استخدام:/ بدلاً من qrc:/
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QString content = file.readAll();
            ui->textBrowser->setPlainText(content);
            file.close();
        }
    }

    break;
    case 5:{
        QFile file(":/father/fath_boy-7-12y.txt");  // لاحظ استخدام:/ بدلاً من qrc:/
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QString content = file.readAll();
            ui->textBrowser->setPlainText(content);
            file.close();
        }
    }

    break;
    case 6:{
        QFile file(":/father/fath_boy-13-18y.txt");  // لاحظ استخدام:/ بدلاً من qrc:/
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QString content = file.readAll();
            ui->textBrowser->setPlainText(content);
            file.close();
        }
    }

    break;
    default:
        break;
    };
}


