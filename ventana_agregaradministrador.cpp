#include "ventana_agregaradministrador.h"
#include "ui_ventana_agregaradministrador.h"

#include <QStandardItemModel>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
QString ventana_agregarAdministrador::getUsuario(){
    return ui->usuario->text();
}

QString ventana_agregarAdministrador::getPassword(){
    return ui->password->text();
}

ventana_agregarAdministrador::ventana_agregarAdministrador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventana_agregarAdministrador)
{
    ui->setupUi(this);
    mModel = new QStandardItemModel(this);
    setWindowTitle("Agregar Administrador");
    //ui->tableView->setModel(mModel);
}

ventana_agregarAdministrador::~ventana_agregarAdministrador()
{
    delete ui;
}

void ventana_agregarAdministrador::on_buttonBox_accepted()
{
    if(ui->usuario->text() == "" || ui->password->text() == "" ){
        QMessageBox::critical(this,"Campos Vacios","El campo Usuario o Password esta vacio");
        return;
    }
}
