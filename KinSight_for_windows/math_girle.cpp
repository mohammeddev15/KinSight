#include "math_girle.h"
#include "ui_math_girle.h"
#include"mainwindow.h"
#include <QScreen>
#include <QFile>
math_girle::math_girle(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::math_girle)
{
    ui->setupUi(this);
    setWindowTitle("KinSight ");
    setWindowIcon(QIcon(":/images/kinsight_ion.png"));
    setGeometry(QGuiApplication::primaryScreen()->availableGeometry());
}

math_girle::~math_girle()
{
    delete ui;
}

void math_girle::on_pushButton_clicked()
{
    MainWindow *back=new MainWindow();
    back->show();
    this->close();
}


void math_girle::on_comboBox_activated(int index)
{
    switch (index) {
    case 0:
        break;


    case 1:{
        QFile file(":/mather/math_girle-0-6m.txt");  // لاحظ استخدام:/ بدلاً من qrc:/
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QString content = file.readAll();
            ui->textBrowser->setPlainText(content);
            file.close();
        }
    }
    break;
    case 2:{
        QFile file(":/mather/math_girle-7-12m.txt");  // لاحظ استخدام:/ بدلاً من qrc:/
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QString content = file.readAll();
            ui->textBrowser->setPlainText(content);
            file.close();
        }
    }

    break;
    case 3:{
        QFile file(":/mather/math_girle-1-3y.txt");  // لاحظ استخدام:/ بدلاً من qrc:/
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QString content = file.readAll();
            ui->textBrowser->setPlainText(content);
            file.close();
        }
    }

    break;
    case 4:{
        QFile file(":/mather/math_girle-4-6y.txt");  // لاحظ استخدام:/ بدلاً من qrc:/
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QString content = file.readAll();
            ui->textBrowser->setPlainText(content);
            file.close();
        }
    }

    break;
    case 5:{
        QFile file(":/mather/math_girle-7-12y.txt");  // لاحظ استخدام:/ بدلاً من qrc:/
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QString content = file.readAll();
            ui->textBrowser->setPlainText(content);
            file.close();
        }
    }

    break;
    case 6:{
        QFile file(":/mather/math_girle-13-18y.txt");  // لاحظ استخدام:/ بدلاً من qrc:/
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

