#include "ejembasedatos.h"
#include "ui_ejembasedatos.h"
#include <iostream>
#include <QSqlQuery>

ejemBaseDatos::ejemBaseDatos(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ejemBaseDatos)
{
    ui->setupUi(this);
}

ejemBaseDatos::~ejemBaseDatos()
{
    delete ui;
}

void ejemBaseDatos::on_btnMySQL_clicked()
{
    db.setDatabaseName("/home/alse/Qt5.14.2/5.14.2/Src/qtbase/Motor.db");
    bool ok = db.open();

    std::cout << "Estado de conexión a bd " << ok << std::endl;

    QSqlQuery consultaRes;
    consultaRes.exec("SELECT * FROM motors;");

    QString dbResult;
    while (consultaRes.next()){

        //El dos (2) que se ve a continuación inidica la columna que está imprimiendo
        dbResult = consultaRes.value(2).toString();
        ui->textBDresult->append(dbResult);
        std::cout << "resultado de query "  << dbResult.toStdString() <<std::endl;
    }

    db.close();
}

void ejemBaseDatos::on_btnMySQLLimpiar_clicked()
{
    ui->textBDresult->clear();
}
