#ifndef FATH_GIRLE_H
#define FATH_GIRLE_H

#include <QMainWindow>

namespace Ui {
class fath_girle;
}

class fath_girle : public QMainWindow
{
    Q_OBJECT

public:
    explicit fath_girle(QWidget *parent = nullptr);
    ~fath_girle();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_activated(int index);

private:
    Ui::fath_girle *ui;
};

#endif // FATH_GIRLE_H
