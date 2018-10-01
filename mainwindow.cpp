#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include "ventana_agregaradministrador.h"
#include <QFile>
#include <string>
#include <iostream>
#include <fstream>
#include <QMessageBox>

#include <QStandardItemModel>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Acceder_clicked()
{

    QString nombre = ui->inputNombre->text();
    QString password = ui->inputNombre_2->text();
    if(Ingreso.empty()){
        QMessageBox::critical(this,"NO CUENTAS","No EXISTEN CUENTAS!!");
        return;
    }
    if(Ingreso.Buscar(nombre.toStdString(),password.toStdString())==1){
        QMessageBox::information(this,"Correcto!","Accediendo con el Usuario: "+ nombre);
        Menu mimenu(this,&nombre);
        mimenu.exec();
    }else{
        QMessageBox::critical(this,"Error","No existe usuario");
    }
}

void MainWindow::on_Estado_clicked()
{
    QFile admin("administrador/administrador");
    if(!admin.open(QIODevice::ReadOnly | QIODevice::Text)){
        ui->mainEstado->setText("Archivo no encontrado");
    }else{
        ui->mainEstado->setText("Bien!");
    }
    QTextStream db(&admin);
    while(!db.atEnd()){
        QString linea = db.readLine();
        QStringList elementos = linea.split(",");
        Ingreso.add(elementos.at(0).toStdString(),elementos.at(1).toStdString());
        //QMessageBox::about(this,"lista: ",elementos.at(i));
    }
    admin.close();
}

void MainWindow::on_salir_clicked()
{
    close();
}

void MainWindow::on_addAdministrador_clicked()
{
    ventana_agregarAdministrador v_agre;
    v_agre.exec();

    QString usuario = v_agre.getUsuario();
    QString password = v_agre.getPassword();
    QString vacio = "";
    if(usuario == vacio || password == vacio){
        QMessageBox::critical(this,"ALERTA!","No se Agrego usuarios");
        return ;
    }
    Ingreso.add(usuario.toStdString(),password.toStdString());
    QFile archivo("administrador/administrador");
    archivo.open(QIODevice::Append | QIODevice::Text);
    if (!archivo.isOpen()) { return; }
    QTextStream str(&archivo);
    const QString contenido = usuario +","+password;
    str << contenido;
    str <<"\n";
    archivo.flush();
    archivo.close();
}

void MainWindow::on_pushButton_clicked()
{

    QString nombre = ui->inputNombre->text();
    QString password = ui->inputNombre_2->text();
    if(Ingreso.empty()){
        QMessageBox::critical(this,"NO CUENTAS","No EXISTEN CUENTAS!!");
        return;
    }
    if(Ingreso.Buscar(nombre.toStdString(),password.toStdString())==1){
        QMessageBox::information(this,"Correcto!","Accediendo con el Usuario: "+ nombre);
        Menu mimenu;
        mimenu.exec();
    }else{
    QMessageBox::critical(this,"Error","No existe usuario");
    }
}

void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{

}
