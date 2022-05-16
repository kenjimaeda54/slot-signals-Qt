#include "signalslot.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    signalSlot w;
    w.show();
    return a.exec();
}
