#ifndef SERVISE_H
#define SERVISE_H

#include <QMainWindow>

namespace Ui {
class servise;
}

class servise : public QMainWindow
{
    Q_OBJECT

public:
    explicit servise(QWidget *parent = nullptr);
    ~servise();

private slots:
    void on_pushButton_clicked();

private:
    Ui::servise *ui;
};

#endif // SERVISE_H
