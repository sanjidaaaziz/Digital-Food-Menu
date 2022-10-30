#ifndef PIZZA_H
#define PIZZA_H

#include <QDialog>

namespace Ui {
class pizza;
}

class pizza : public QDialog
{
    Q_OBJECT

public:
    explicit pizza(QWidget *parent = nullptr);
    ~pizza();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();



    void on_pushButton_6_clicked();

private:
    Ui::pizza *ui;
};

#endif // PIZZA_H
