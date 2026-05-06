#ifndef MATH_BOY_H
#define MATH_BOY_H

#include <QMainWindow>

namespace Ui {
class math_boy;
}

class math_boy : public QMainWindow
{
    Q_OBJECT

public:
    explicit math_boy(QWidget *parent = nullptr);
    ~math_boy();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_activated(int index);

private:
    Ui::math_boy *ui;
};

#endif // MATH_BOY_H
