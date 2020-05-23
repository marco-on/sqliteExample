#include "ejembasedatos.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ejemBaseDatos w;
    w.show();
    return a.exec();
}
