#ifndef OREGANO_H
#define OREGANO_H

#include <QDialog>

namespace Ui {
class Oregano;
}

class Oregano : public QDialog
{
    Q_OBJECT

public:
    explicit Oregano(QWidget *parent = nullptr);
    ~Oregano();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Oregano *ui;
};

#endif // OREGANO_H
