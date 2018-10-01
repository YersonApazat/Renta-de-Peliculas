#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <lista.h>
#include <string>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_Acceder_clicked();

    void on_Estado_clicked();

    void on_salir_clicked();

    void on_addAdministrador_clicked();

    void on_pushButton_clicked();

    void on_MainWindow_iconSizeChanged(const QSize &iconSize);

private:
    Ui::MainWindow *ui;
    Lista<std::string> Ingreso;
    QString ArchivoAdministrador = "Administrador/Administrador";
};

#endif // MAINWINDOW_H
