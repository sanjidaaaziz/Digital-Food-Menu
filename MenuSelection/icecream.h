#ifndef ICECREAM_H
#define ICECREAM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class icecream; }

QT_END_NAMESPACE

class icecream : public QMainWindow
{
    Q_OBJECT

public:
    icecream(QWidget *parent = nullptr);
    ~icecream();


private slots:
    void on_pushButton_clicked();



private:
    Ui::icecream *ui;
};
#endif // ICECREAM_H
