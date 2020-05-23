#ifndef EJEMBASEDATOS_H
#define EJEMBASEDATOS_H

#include <QMainWindow>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class ejemBaseDatos; }
QT_END_NAMESPACE

class ejemBaseDatos : public QMainWindow
{
    Q_OBJECT

public:
    ejemBaseDatos(QWidget *parent = nullptr);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    ~ejemBaseDatos();

private slots:
    void on_btnMySQL_clicked();

    void on_btnMySQLLimpiar_clicked();

private:
    Ui::ejemBaseDatos *ui;
};
#endif // EJEMBASEDATOS_H
