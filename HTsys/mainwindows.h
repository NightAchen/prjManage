#ifndef MAINWINDOWS_H
#define MAINWINDOWS_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSqlDatabase>//链接数据库
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QTableWidget>  //要封装QTableWidget的更新函数，所以把这个类包含进来
#include <QThread>

//添加导出Excel的头文件
#include <QFileDialog>
#include <QDesktopServices>
#include <QDate>
#include <QCloseEvent>
#include "xlsxdocument.h"
#include "newlogin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindows; }
QT_END_NAMESPACE

class MainWindows : public QMainWindow
{
    Q_OBJECT

public:
    MainWindows(QWidget *parent = nullptr);
    ~MainWindows();

    //更新数据显示
    void updateQTableWidget(QTableWidget* &qTableWidget);

    //高亮显示目标
    void markQTableWidget(QTableWidget* &qTableWidget);

    //判断行数据是否存在空数据
    bool dataIsEmpty(QTableWidget* &qTableWidget, int row);

    //导出Excel方法
    void qTableWidget2Excel(QTableWidget *table);

    //显示主窗口
    void mainShow();


private slots:

    void on_loadButton_clicked();

    void on_saveButton_clicked();

    void on_addButton_clicked();

    void on_deleteButton_clicked();

    void on_actionExit_triggered();

    void on_saveFileButton_clicked();

    void on_saveAllButton_clicked();

    void on_updateStatusButton_clicked();

    void closeEvent(QCloseEvent *event) override;

signals:


private:
    Ui::MainWindows *ui;
};

#endif // MAINWINDOWS_H
