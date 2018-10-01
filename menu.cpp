#include "menu.h"
#include "ui_menu.h"
#include "ventana_agregarusuario.h"
Menu::Menu(QWidget *parent,QString *titulo) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    Mititulo = *titulo;
    setWindowTitle("Ingreso con el usuario: "+ Mititulo);
    //DirecionUsuarios("clientes/clientes.txt");
    //miListaUsuarios<Qstring>* usuarios = new miListaUsuarios<QString>;
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_agregarCliente_clicked()
{

}

void Menu::on_agregarNuevoCliente_clicked()
{
    ventana_AgregarUsuario ventana_usuario;
    ventana_usuario.exec();
    QString newNombre = ventana_usuario.nombre();
    QString newDni=ventana_usuario.dni();

}

void Menu::on_pushButton_3_clicked()
{

}

void Menu::on_cargarDATA_clicked()
{

}
