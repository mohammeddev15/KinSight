#ifndef START_H
#define START_H

#include <QMainWindow>

namespace Ui {
class start;
}

class start : public QMainWindow
{
    Q_OBJECT

public:
    explicit start(QWidget *parent = nullptr);
    ~start();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::start *ui;
};

#endif // START_H
