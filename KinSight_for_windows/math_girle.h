#ifndef MATH_GIRLE_H
#define MATH_GIRLE_H

#include <QMainWindow>

namespace Ui {
class math_girle;
}

class math_girle : public QMainWindow
{
    Q_OBJECT

public:
    explicit math_girle(QWidget *parent = nullptr);
    ~math_girle();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_activated(int index);

private:
    Ui::math_girle *ui;
};

#endif // MATH_GIRLE_H
