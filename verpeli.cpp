#include "verpeli.h"
#include "ui_verpeli.h"

#include <QFile>
verpeli::verpeli(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::verpeli)
{
    ui->setupUi(this);
}

verpeli::~verpeli()
{
    delete ui;
}

void verpeli::on_pushButton_clicked()
{
    QFile admin("db_peli/movies.csv");
    if(!admin.open(QIODevice::ReadOnly | QIODevice::Text)){
        //ui->mainEstado->setText("Archivo no encontrado");
    }else{
        //ui->mainEstado->setText("Bien!");
    }
    //QTextStream db(&admin);
    //while(!db.atEnd()){
      //  QString linea = db.readLine();
        //QStringList elementos = linea.split(",");
        //ui->ListarPeli->set
        //Ingreso.add(elementos.at(0).toStdString(),elementos.at(1).toStdString());
        //QMessageBox::about(this,"lista: ",elementos.at(i));

    //admin.close();
}
