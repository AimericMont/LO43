#include "mainwindow.h"
#include "liste.h"
#include "franchise.h"
#include "personne.h"
#include <QApplication>
#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
