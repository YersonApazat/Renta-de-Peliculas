#ifndef VERPELI_H
#define VERPELI_H

#include <QDialog>

namespace Ui {
class verpeli;
}

class verpeli : public QDialog
{
    Q_OBJECT

public:
    explicit verpeli(QWidget *parent = 0);
    ~verpeli();

private slots:
    void on_pushButton_clicked();

private:
    Ui::verpeli *ui;
};

#endif // VERPELI_H
