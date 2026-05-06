#ifndef FATHER_H
#define FATHER_H

#include <QMainWindow>

namespace Ui {
class father;
}

class father : public QMainWindow
{
    Q_OBJECT

public:
    explicit father(QWidget *parent = nullptr);
    ~father();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::father *ui;
};

#endif // FATHER_H
