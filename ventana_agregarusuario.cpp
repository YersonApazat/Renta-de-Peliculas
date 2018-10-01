#include "ventana_agregarusuario.h"
#include "ui_ventana_agregarusuario.h"
#include <QString>
#include <QMessageBox>


QString ventana_AgregarUsuario::nombre(){
    return ui->UsuarioNuevoNombre->text();
}

QString ventana_AgregarUsuario::dni(){
    return ui->UsuarioNuevoDNI->text();
}

ventana_AgregarUsuario::ventana_AgregarUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventana_AgregarUsuario)
{
    ui->setupUi(this);
}

ventana_AgregarUsuario::~ventana_AgregarUsuario()
{
    delete ui;
}

void ventana_AgregarUsuario::on_AgregarNuevoUsuario_clicked()
{
    if(ui->UsuarioNuevoDNI->text()=="" || ui->UsuarioNuevoNombre->text()=="" ){
        QMessageBox::critical(this,"Agregar Nuevo Usuario","Algun campo esta vacio");
    }
}

void ventana_AgregarUsuario::on_pushButton_2_clicked()
{
    close();
}
