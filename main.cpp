#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    volatile int i = 0;
    ++i;
    
    return a.exec();
}
