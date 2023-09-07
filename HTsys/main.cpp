#include "mainwindows.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindows main;
    main.setWindowTitle("《项目系统管理》 --designed by 郭晨晨");
    return a.exec();
}
