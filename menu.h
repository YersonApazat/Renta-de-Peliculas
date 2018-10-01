#ifndef MENU_H
#define MENU_H
#include <QDialog>
#include <lista.h>
namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0,QString* titulo= nullptr);

    ~Menu();

private slots:
    void on_agregarCliente_clicked();

    void on_agregarNuevoCliente_clicked();

    void on_pushButton_3_clicked();

    void on_cargarDATA_clicked();

private:
    Ui::Menu *ui;
    QString Mititulo;
    QString DirecionUsuarios;
    //lista<QString> *miListaUsuarios;
};

#endif // MENU_H
