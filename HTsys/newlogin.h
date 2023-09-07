#ifndef NEWLOGIN_H
#define NEWLOGIN_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QThread>
#include <QSqlQuery>

namespace Ui {
class NewLogin;
}

class NewLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewLogin(QWidget *parent = nullptr);
    ~NewLogin();

private:
    Ui::NewLogin *ui;
signals:
    void loginSuccess();
private slots:
    void on_loginButton_clicked();
    void on_registerButton_clicked();
};

#endif // NEWLOGIN_H
