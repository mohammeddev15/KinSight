#ifndef FATH_BOY_H
#define FATH_BOY_H

#include <QMainWindow>

namespace Ui {
class fath_boy;
}

class fath_boy : public QMainWindow
{
    Q_OBJECT

public:
    explicit fath_boy(QWidget *parent = nullptr);
    ~fath_boy();

private slots:
    void on_comboBox_activated(int index);

    void on_pushButton_clicked();

private:
    Ui::fath_boy *ui;
};

#endif // FATH_BOY_H
