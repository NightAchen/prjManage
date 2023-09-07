#include "newlogin.h"
#include "ui_newlogin.h"

NewLogin::NewLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewLogin)
{
    ui->setupUi(this);
    qDebug() << "登录窗口线程的地址是：" << QThread::currentThread();  //可以直接返回当前调用的线程的地址
}

NewLogin::~NewLogin()
{
    delete ui;
    qDebug() << "登录窗口析构函数调用";
}

void NewLogin::on_loginButton_clicked()//登陆按钮
{
    //检测输入的用户名和密码是否正确，以及用户是否存在
    if(ui->usernameEdit->text() != NULL && ui->passwordEdit->text() != NULL)
    {
        QString m_Name = ui->usernameEdit->text();
        QString m_Pwd = ui->passwordEdit->text();
        QString qs1 = QString("select * from mydata.user where username ='%1' and password='%2'").arg(m_Name).arg(m_Pwd);

        QSqlQuery query;//要执行一个SQL语句，简单的创建一个QSqlQuery对象，然后调用QSqlQuery::exec()方法即可
                        //QSqlQuery的构造函数接受一个可选的QSqlDatabase对象参数，用来指定将使用哪一个数据库连接。在上面的例子中，我们并没有指定任何连接，
                        //因此使用默认连接。如果执行查询时出错，exec()将返回false，错误原因可以通过QSqlQuery::lastError()查看。
        query.exec(qs1);
        if(query.next())  //用next（）来判定是否有记录
                          //QSqlQuery提供了一个访问一条查询结果记录的方法。在调用了exec()方法之后，QSqlQuery的内部指针定位到了第一条记录之前的位置。
                          //我们必须调用一次QSqlQuery::next()内部指针就移动到第一条记录上，然后重复调用next()方法就可以移动到其他记录上，直到该函数返回false为止。
        {
            QMessageBox::information(this, "提示", "登录成功！");
            ui->usernameEdit->clear();
            ui->passwordEdit->clear();

            emit loginSuccess();
            this->close();

        }
        else
        {
            QMessageBox::critical(this,"提示","用户名或密码错误，请重新输入！");
            ui->usernameEdit->clear();
            ui->passwordEdit->clear();
        }

     }
    else
    {
        QMessageBox::critical(this,"提示","用户名或密码为空，请重新输入！");
    }

}

void NewLogin::on_registerButton_clicked()//注册按钮
{
    if(ui->usernameEdit->text() != NULL && ui->passwordEdit->text() != NULL)
    {
        QSqlQuery query;

        //如果表不存在则创建
        //query.exec(" create table user(username varchar(20) NOT NULL PRIMARY KEY, password varchar(20))ENGINE=InnoDB DEFAULT CHARSET=utf8;");

        QString username = ui->usernameEdit->text();
        QString password = ui->passwordEdit->text();
        QString qs1 = QString("select * from mydata.user where username ='%1'").arg(username);
        QString qs2 = QString("insert into user(username,password) values('%1','%2')").arg(username).arg(password);

        query.exec(qs1); //查询用户名是否重复

        if(!query.next())   //如果没有找到该用户名，就插入该用户信息
        {
            query.exec(qs2);
            QMessageBox::information(this, "提示", "注册成功！");
            ui->usernameEdit->clear();
            ui->passwordEdit->clear();
        }
        else    //如果用户信息已经存在，就提示用户
        {
            QMessageBox::critical(this,"提示","用户名已存在，请重新输入！");
            ui->usernameEdit->clear();
            ui->passwordEdit->clear();
        }

    }
    else    QMessageBox::critical(this,"提示","用户名或密码为空，请重新输入！");
}
