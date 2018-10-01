#ifndef VENTANA_AGREGARUSUARIO_H
#define VENTANA_AGREGARUSUARIO_H

#include <QDialog>
#include <QString>

namespace Ui {
class ventana_AgregarUsuario;
}

class ventana_AgregarUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit ventana_AgregarUsuario(QWidget *parent = 0);
    ~ventana_AgregarUsuario();
    int obtenerNumero();
    QString nombre();
    QString dni();

private slots:
    void on_AgregarNuevoUsuario_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ventana_AgregarUsuario *ui;
};
#endif // VENTANA_AGREGARUSUARIO_H
