#ifndef BASIL_H
#define BASIL_H

#include <QDialog>

namespace Ui {
class basil;
}

class basil : public QDialog
{
    Q_OBJECT

public:
    explicit basil(QWidget *parent = nullptr);
    ~basil();
    int coca=0, honey=0, blue=0, blush=0, milk=0, boozy=0, straw=9, rasp=0, total=0;
    QString coca1, honey1, blue1, blush1, milk1, boozy1, straw1, rasp1, total1;

private slots:
    void on_pushButton_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_spinBox_5_valueChanged(int arg1);

    void on_spinBox_6_valueChanged(int arg1);

    void on_spinBox_7_valueChanged(int arg1);

    void on_spinBox_8_valueChanged(int arg1);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::basil *ui;
};

#endif // BASIL_H
