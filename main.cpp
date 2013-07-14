#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    volatile int j = 0;
    ++j;
    
    return a.exec();
}
