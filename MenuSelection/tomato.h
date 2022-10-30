#ifndef TOMATO_H
#define TOMATO_H

#include <QDialog>

namespace Ui {
class tomato;
}

class tomato : public QDialog
{
    Q_OBJECT

public:
    explicit tomato(QWidget *parent = nullptr);
    ~tomato();
    int coffee=0, presso=0, cappu=0, latte=0, cano=0, mocha=0, choco=0, scot=0, total=0;
    QString coffee1, presso1, cappu1, latte1, cano1, mocha1, choco1, scot1, total1;

private slots:
    void on_pushButton_2_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_spinBox_5_valueChanged(int arg1);

    void on_spinBox_6_valueChanged(int arg1);

    void on_spinBox_7_valueChanged(int arg1);

    void on_spinBox_8_valueChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::tomato *ui;
};

#endif // TOMATO_H
