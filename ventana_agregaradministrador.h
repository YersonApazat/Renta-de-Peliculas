#ifndef VENTANA_AGREGARADMINISTRADOR_H
#define VENTANA_AGREGARADMINISTRADOR_H

#include <QDialog>

namespace Ui {
class ventana_agregarAdministrador;
}

class QStandardItemModel;

class ventana_agregarAdministrador : public QDialog
{
    Q_OBJECT

public:
    explicit ventana_agregarAdministrador(QWidget *parent = 0);
    ~ventana_agregarAdministrador();
    QString getUsuario();
    QString getPassword();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::ventana_agregarAdministrador *ui;
    QStandardItemModel *mModel;
};

#endif // VENTANA_AGREGARADMINISTRADOR_H
