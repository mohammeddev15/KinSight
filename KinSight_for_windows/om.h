#ifndef OM_H
#define OM_H

#include <QMainWindow>

namespace Ui {
class om;
}

class om : public QMainWindow
{
    Q_OBJECT

public:
    explicit om(QWidget *parent = nullptr);
    ~om();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::om *ui;
};

#endif // OM_H
