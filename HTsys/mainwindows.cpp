#include "mainwindows.h"
#include "ui_mainwindows.h"
#include <QTextCodec>

static bool isNewData;

MainWindows::MainWindows(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindows)
{
//    QTextCodec *codec = QTextCodec::codecForName("UTF-8");    //获取系统编码
//    QTextCodec::setCodecForLocale(codec);

    ui->setupUi(this);
    isNewData = false;
    qDebug() << "主窗口线程的地址是：" << QThread::currentThread();  //可以直接返回当前调用的线程的地址

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");//添加驱动 QMYSQL QSQLITE QODBC QODBC3 QPSQL QPSQL7
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("123321");//123456
    db.setDatabaseName("mydata");
    if(!db.open())//数据库打开失败
    {
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }
    qDebug("数据库连接成功！");

    //窗口切換
    NewLogin *login = new NewLogin(this);  //加上this，主窗口销毁的时候也会顺带销毁子窗口
    login->show();

    QObject::connect(login,&NewLogin::loginSuccess,this,[=]()
    {
        this->mainShow();
     });

}

MainWindows::~MainWindows()
{
    delete ui;
    qDebug("调用主窗口析构函数！");
}

//加载数据槽函数
void MainWindows::on_loadButton_clicked()
{
    //加载前先clear，避免多次点击造成内存叠加占用
    ui->detailsWidget->clearContents();
    updateQTableWidget(ui->detailsWidget);//更新数据
    markQTableWidget(ui->detailsWidget);//高亮显示
    ui->detailsWidget->setAlternatingRowColors(true);  //设置表格隔行灰色显示

    QMessageBox::information(this, "提示", "数据已全部加载完毕！");
    ui->progressBar->setValue(0);
    ui->processDetails->setText(QString("无"));

    isNewData = false;
    ui->progressBar->setValue(0);
    ui->processDetails->setText(QString("无"));
}

//单行保存槽函数
void MainWindows::on_saveButton_clicked()
{
    int curRow = 0;
    curRow = ui->detailsWidget->currentRow();
    //qDebug() << curRow;

    if(curRow != -1)  //如果选中了某行
    {
        //判断是否有空数据
        if(!(dataIsEmpty(ui->detailsWidget,curRow)))
        {
            QMessageBox::critical(this, "提示", "添加失败，当前行存在空数据！");
            return;
        }

        if(isNewData == false)  //如果不是添加新数据
        {
            QString curId = ui->detailsWidget->item(curRow,0)->text();  //获取当前行的ID
            //qDebug() << curId;
            QString order = QString("update mydetails set class = '%1', "
                                    "project = '%2', "
                                    "name = '%3', "
                                    "planMoney = '%4',"
                                    "realMoney = '%5', "
                                    "status = '%6',"
                                    "calculateAll = '%7' where id = %37")
                                    /*"planLx = '%8',"-------------------
                                    "realLx = '%9',"
                                    "statusLx = '%10',"
                                    "planKb = '%11',"
                                    "realKb = '%12',"
                                    "statusKb = '%13',"
                                    "planHt = '%14',"
                                    "realHt = '%15',"
                                    "statusHt = '%16',"
                                    "planCgzz = '%17',"
                                    "realCgzz = '%18',"
                                    "statusCgzz = '%19',"
                                    "planDh = '%20',"
                                    "realDh = '%21',"
                                    "statusDh = '%22',"
                                    "planAzts = '%23',"
                                    "realAzts = '%24',"
                                    "statusAzts = '%25',"
                                    "planGyyz = '%26',"
                                    "realGyyz = '%27',"
                                    "statusGyyz = '%28',"
                                    "planYys = '%29',"
                                    "realYys = '%30',"
                                    "statusYys = '%31',"
                                    "planZys = '%32',"
                                    "realZys = '%33',"
                                    "statusZys = '%34',"
                                    "statusGd = '%35',"
                                    "statusPj = '%36'*/
                    .arg(ui->detailsWidget->item(curRow,1)->text())
                    .arg(ui->detailsWidget->item(curRow,2)->text())
                    .arg(ui->detailsWidget->item(curRow,3)->text())
                    .arg(ui->detailsWidget->item(curRow,4)->text())
                    .arg(ui->detailsWidget->item(curRow,5)->text())
                    .arg(ui->detailsWidget->item(curRow,6)->text())
                    .arg(ui->detailsWidget->item(curRow,7)->text())
                   /* .arg(ui->detailsWidget->item(curRow,8)->text())
                    .arg(ui->detailsWidget->item(curRow,9)->text())
                    .arg(ui->detailsWidget->item(curRow,10)->text())
                    .arg(ui->detailsWidget->item(curRow,11)->text())
                    .arg(ui->detailsWidget->item(curRow,12)->text())
                    .arg(ui->detailsWidget->item(curRow,13)->text())
                    .arg(ui->detailsWidget->item(curRow,14)->text())
                    .arg(ui->detailsWidget->item(curRow,15)->text())
                    .arg(ui->detailsWidget->item(curRow,16)->text())
                    .arg(ui->detailsWidget->item(curRow,17)->text())
                    .arg(ui->detailsWidget->item(curRow,18)->text())
                    .arg(ui->detailsWidget->item(curRow,19)->text())
                    .arg(ui->detailsWidget->item(curRow,20)->text())
                    .arg(ui->detailsWidget->item(curRow,21)->text())
                    .arg(ui->detailsWidget->item(curRow,22)->text())
                    .arg(ui->detailsWidget->item(curRow,23)->text())
                    .arg(ui->detailsWidget->item(curRow,24)->text())
                    .arg(ui->detailsWidget->item(curRow,25)->text())
                    .arg(ui->detailsWidget->item(curRow,26)->text())
                    .arg(ui->detailsWidget->item(curRow,27)->text())
                    .arg(ui->detailsWidget->item(curRow,28)->text())
                    .arg(ui->detailsWidget->item(curRow,29)->text())
                    .arg(ui->detailsWidget->item(curRow,30)->text())
                    .arg(ui->detailsWidget->item(curRow,31)->text())
                    .arg(ui->detailsWidget->item(curRow,32)->text())
                    .arg(ui->detailsWidget->item(curRow,33)->text())
                    .arg(ui->detailsWidget->item(curRow,34)->text())
                    .arg(ui->detailsWidget->item(curRow,35)->text())
                    .arg(ui->detailsWidget->item(curRow,36)->text())
                    .arg(curId)*/;

            QSqlQuery query;
            if(query.exec(order))
            {
                QMessageBox::information(this, "提示", "修改成功！");
            }
            else
            {
                QMessageBox::critical(this, "提示", "修改失败！");
            }
        }
        else  //如果是新增行
        {
            //qDebug("保存新增内容！");
            QString insetOrder = QString("insert into mydetails(class,"
                                         "project,"
                                         "name,"
                                         "planMoney,"
                                         "realMoney,"
                                         "status,"
                                         "calculateAll)"
//                                         "planLx,"
//                                         "realLx,"
//                                         "statusLx,"
//                                         "planKb,"
//                                         "realKb,"
//                                         "statusKb,"
//                                         "planHt,"
//                                         "realHt,"
//                                         "statusHt,"
//                                         "planCgzz,"
//                                         "realCgzz,"
//                                         "statusCgzz,"
//                                         "planDh,"
//                                         "realDh,"
//                                         "statusDh,"
//                                         "planAzts,"
//                                         "realAzts,"
//                                         "statusAzts,"
//                                         "planGyyz,"
//                                         "realGyyz,"
//                                         "statusGyyz,"
//                                         "planYys,"
//                                         "realYys,"
//                                         "statusYys,"
//                                         "planZys,"
//                                         "realZys,"
//                                         "statusZys,"
//                                         "statusGd,"
//                                         "statusPj)"
                                         "values('%1', '%2', '%3', '%4', '%5', '%6', '%7'/*, '%8', "
                                         "'%9', '%10', '%11', '%12', '%13', '%14', "
                                         "'%15', '%16', '%17', '%18', '%19', '%20', '%21',"
                                         "'%22', '%23', '%24', '%25', '%26', '%27', '%28',"
                                         "'%29', '%30', '%31', '%32', '%33', '%34', '%35', '%36'*/)")
                    .arg(ui->detailsWidget->item(curRow,1)->text())
                    .arg(ui->detailsWidget->item(curRow,2)->text())
                    .arg(ui->detailsWidget->item(curRow,3)->text())
                    .arg(ui->detailsWidget->item(curRow,4)->text())
                    .arg(ui->detailsWidget->item(curRow,5)->text())
                    .arg(ui->detailsWidget->item(curRow,6)->text())
                    .arg(ui->detailsWidget->item(curRow,7)->text())
                    /*.arg(ui->detailsWidget->item(curRow,8)->text())
                    .arg(ui->detailsWidget->item(curRow,9)->text())
                    .arg(ui->detailsWidget->item(curRow,10)->text())
                    .arg(ui->detailsWidget->item(curRow,11)->text())
                    .arg(ui->detailsWidget->item(curRow,12)->text())
                    .arg(ui->detailsWidget->item(curRow,13)->text())
                    .arg(ui->detailsWidget->item(curRow,14)->text())
                    .arg(ui->detailsWidget->item(curRow,15)->text())
                    .arg(ui->detailsWidget->item(curRow,16)->text())
                    .arg(ui->detailsWidget->item(curRow,17)->text())
                    .arg(ui->detailsWidget->item(curRow,18)->text())
                    .arg(ui->detailsWidget->item(curRow,19)->text())
                    .arg(ui->detailsWidget->item(curRow,20)->text())
                    .arg(ui->detailsWidget->item(curRow,21)->text())
                    .arg(ui->detailsWidget->item(curRow,22)->text())
                    .arg(ui->detailsWidget->item(curRow,23)->text())
                    .arg(ui->detailsWidget->item(curRow,24)->text())
                    .arg(ui->detailsWidget->item(curRow,25)->text())
                    .arg(ui->detailsWidget->item(curRow,26)->text())
                    .arg(ui->detailsWidget->item(curRow,27)->text())
                    .arg(ui->detailsWidget->item(curRow,28)->text())
                    .arg(ui->detailsWidget->item(curRow,29)->text())
                    .arg(ui->detailsWidget->item(curRow,30)->text())
                    .arg(ui->detailsWidget->item(curRow,31)->text())
                    .arg(ui->detailsWidget->item(curRow,32)->text())
                    .arg(ui->detailsWidget->item(curRow,33)->text())
                    .arg(ui->detailsWidget->item(curRow,34)->text())
                    .arg(ui->detailsWidget->item(curRow,35)->text())
                    .arg(ui->detailsWidget->item(curRow,36)->text())*/;

            QSqlQuery query;
            if(query.exec(insetOrder))
            {
                QMessageBox::information(this, "提示", "条目添加成功！");
            }
            else
            {
                QMessageBox::critical(this, "提示", "条目添加失败！");
            }
            isNewData = false; //标志位复位
        }

    }
    else  //如果没有选择任何一行
    {
        QMessageBox::warning(this, "提示", "请选中要修改的条目！");
    }

    //保存数据后，重新更新界面高亮显示
    markQTableWidget(ui->detailsWidget);
}

//添加条目槽函数
void MainWindows::on_addButton_clicked()
{
    int row = 0;
    row = ui->detailsWidget->rowCount();
    //qDebug() << row;
    if(row != -1 && row != 0)
    {
        ui->detailsWidget->insertRow(row);
        isNewData = true;
        qDebug("标志位置1");
    }
    else QMessageBox::warning(this, "提示", "当前记录为空，请先加载数据！");
}

//删除条目槽函数
void MainWindows::on_deleteButton_clicked()
{
    switch (QMessageBox::warning(this,tr("删除提示"),tr("确认删除当前条目？"),tr("YES"),tr("NO"),0,1))   //删除提示，
    {
    case 0 :  //选择yes
    {
        //qDebug("删除行！");
        int curRow = -1;
        curRow = ui->detailsWidget->currentRow();

        if(curRow != -1)
        {
            QString deleteOrder = QString("delete from mydetails where id = '%1'").arg(ui->detailsWidget->item(curRow,0)->text());
            QSqlQuery query;
            query.exec(deleteOrder);
            QMessageBox::information(this, "提示", "删除成功！");

        }
        else
        {
            QMessageBox::warning(this, "提示", "删除失败，当前记录为空，请先加载数据！");
            return;
        }

        updateQTableWidget(ui->detailsWidget);
        markQTableWidget(ui->detailsWidget);
        isNewData = false;
    }
        break;
    case 1:  //选择no
        qDebug("放弃删除！");
        break;
    default:
        break;
    }
}

//自己封装的QTableWidget更新函数，用引用的方式传入
void MainWindows::updateQTableWidget(QTableWidget* &qTableWidget)
{
    QSqlQuery query,query2;

    QString sqlstr=("select id,"
                    "class,"
                    "project,"
                    "name,"
                    "planMoney,"
                    "realMoney,"
                    "status,"
                    "calculateAll from mydetails");//查询语句，加了列要记得添加进来
                    /*"planLx,"
                    "realLx,"
                    "statusLx,"
                    "planKb,"
                    "realKb,"
                    "statusKb,"
                    "planHt,"
                    "realHt,"
                    "statusHt,"
                    "planCgzz,"
                    "realCgzz,"
                    "statusCgzz,"
                    "planDh,"
                    "realDh,"
                    "statusDh,"
                    "planAzts,"
                    "realAzts,"
                    "statusAzts,"
                    "planGyyz,"
                    "realGyyz,"
                    "statusGyyz,"
                    "planYys,"
                    "realYys,"
                    "statusYys,"
                    "planZys,"
                    "realZys,"
                    "statusZys,"
                    "statusGd,"
                    "statusPj*/
    query.prepare(sqlstr);//准备

    query2.exec("SELECT * FROM mydetails");  //获取行数sql指令

    int rowCnt = 0, column = 0;
    column = qTableWidget->columnCount();  //以窗口界面的列数作为总列数

    rowCnt = query2.size();  //获取行数

    if(rowCnt > 0)
    {
        query.exec();
        ui->progressBar->setMaximum(rowCnt-1);
        ui->progressBar->setValue(0);
        ui->processDetails->setText(QString("更新项目状态..."));

        for (int i = 0;i < rowCnt; i++)
        {
            ui->progressBar->setValue(i);
            query.next();
            for (int j = 0; j < column; j++)
            {
                qTableWidget->setRowCount(i+1);//设置表格行数
                qTableWidget->setItem(i,j,new QTableWidgetItem(query.value(j).toString()));   //给当前行、列赋值
                qTableWidget->item(i,j)->setTextAlignment(Qt::AlignVCenter|Qt::AlignHCenter);  //设置居中显示
            }
        }

    }

    //qtable行、列高度宽度自动根据内容调整
    qTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    qTableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

}

//特殊列高亮显示函数
void MainWindows::markQTableWidget(QTableWidget* &qTableWidget)
{
    int row = 0;
    float planMoney = 0.0, realMoney = 0.0, calData = 0.0;
    QString qs,status;
    QStringList list;
    row = qTableWidget->rowCount();
    //qDebug()<<row;
    for (int i = 0; i < row; i++)
    {
        //提取对应列的数据
        planMoney = qTableWidget->item(i,4)->text().toFloat();
        realMoney = qTableWidget->item(i,5)->text().toFloat();
        status = qTableWidget->item(i,6)->text();
        qs = qTableWidget->item(i,7)->text();

        //用split切割百分比，提取出数据部分
        list = qs.split("%");
        calData = list[0].toFloat();

        //qDebug() << planMoney << realMoney << calData;

        if(realMoney > planMoney)  //项目合同金额超出预算的，红色高亮显示
        {
            qTableWidget->item(i,5)->setBackground(QBrush(QColor(255,0,0)));
        }

        if(status == QString("已竣工"))  //已竣工项目标绿色
        {
            qTableWidget->item(i,6)->setBackground(QBrush(QColor(0,255,0)));
        }

        if(calData < 85.0)  //节点达成率低于85%，标黄色
        {
            qTableWidget->item(i,7)->setBackground(QBrush(QColor(255,255,0)));
        }

        //初始化
        planMoney = 0.0;
        realMoney = 0.0;
        status = "";
        list.clear();
    }

}

//行内有空数据判断，返回false代表存在空数据，返回true代表没有空数据
bool MainWindows::dataIsEmpty(QTableWidget* &qTableWidget, int row)
{
    if(qTableWidget->item(row,1)->text() == "" || qTableWidget->item(row,2)->text() == "" ||
            qTableWidget->item(row,3)->text() == "" || qTableWidget->item(row,4)->text() == "" ||
            qTableWidget->item(row,5)->text() == "" || qTableWidget->item(row,6)->text() == "" ||
            qTableWidget->item(row,7)->text() == "")
    {
        return false;
    }
    else
    {
        return true;
    }

}

//菜单栏退出槽函数
void MainWindows::on_actionExit_triggered()
{
    this->close();
}

//导出文件槽函数
void MainWindows::on_saveFileButton_clicked()
{
    qTableWidget2Excel(ui->detailsWidget);
}

void MainWindows::qTableWidget2Excel(QTableWidget *table)
{
    ui->processDetails->setText(QString("保存文件..."));
    QString fileName = QFileDialog::getSaveFileName(table, "保存",QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),"Excel 文件(*.xlsx)");  // *.xls
    if (fileName!="")
    {
        QXlsx::Document xlsx;
        QXlsx::Format format;//excel格式
        format.setHorizontalAlignment(QXlsx::Format::AlignHCenter);//水平居中
        format.setVerticalAlignment(QXlsx::Format::AlignVCenter);//垂直居中

        int row = table->rowCount();
        int column = table->columnCount();

        //填充列名，空第一行，从第二行开始填（从第一行填充会有bug）
        for(int a = 0; a < column; a++)
        {
            //qDebug() << table->horizontalHeaderItem(a)->text();
            xlsx.write(2,a+1,table->horizontalHeaderItem(a)->text(),format);
        }

        //填充数据区
        ui->progressBar->setMaximum(row+1);
        ui->progressBar->setValue(0);
        for (int i = 2;i < row +2;i++)
        {
            ui->progressBar->setValue(i);
            for (int j = 0;j < column;j++)
            {
                if (table->item(i,j))   //当item内有值的时候加入到execl内
                {
                    xlsx.write(i+1,j+1,table->item(i,j)->text(),format);
                }
            }
        }

        xlsx.saveAs(fileName);


        if (QMessageBox::question(NULL,"完成","文件已经导出，是否现在打开？",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
        {
            QDesktopServices::openUrl(QUrl("file:///" + QDir::toNativeSeparators(fileName)));
        }
        ui->progressBar->setValue(0);
        ui->processDetails->setText(QString("无"));
    }

}

//全部保存槽函数
void MainWindows::on_saveAllButton_clicked()
{
    int row = 0;
    row = ui->detailsWidget->rowCount();
    QString curId = "";
    QString order = "";
    QSqlQuery query;

    for (int i = 0; i < row; i++)
    {
        curId = ui->detailsWidget->item(i,0)->text();  //获取当前行的ID

        order = QString("update mydetails set class = '%1', "
                                "project = '%2', "
                                "name = '%3', "
                                "planMoney = '%4',"
                                "realMoney = '%5', "
                                "status = '%6',"
                                "calculateAll = '%7' where id = %37")
                                /*"planLx = '%8',"
                                "realLx = '%9',"
                                "statusLx = '%10',"
                                "planKb = '%11',"
                                "realKb = '%12',"
                                "statusKb = '%13',"
                                "planHt = '%14',"
                                "realHt = '%15',"
                                "statusHt = '%16',"
                                "planCgzz = '%17',"
                                "realCgzz = '%18',"
                                "statusCgzz = '%19',"
                                "planDh = '%20',"
                                "realDh = '%21',"
                                "statusDh = '%22',"
                                "planAzts = '%23',"
                                "realAzts = '%24',"
                                "statusAzts = '%25',"
                                "planGyyz = '%26',"
                                "realGyyz = '%27',"
                                "statusGyyz = '%28',"
                                "planYys = '%29',"
                                "realYys = '%30',"
                                "statusYys = '%31',"
                                "planZys = '%32',"
                                "realZys = '%33',"
                                "statusZys = '%34',"
                                "statusGd = '%35',"
                                "statusPj = '%36'*/
                .arg(ui->detailsWidget->item(i,1)->text())
                .arg(ui->detailsWidget->item(i,2)->text())
                .arg(ui->detailsWidget->item(i,3)->text())
                .arg(ui->detailsWidget->item(i,4)->text())
                .arg(ui->detailsWidget->item(i,5)->text())
                .arg(ui->detailsWidget->item(i,6)->text())
                .arg(ui->detailsWidget->item(i,7)->text())
                /*.arg(ui->detailsWidget->item(i,8)->text())
                .arg(ui->detailsWidget->item(i,9)->text())
                .arg(ui->detailsWidget->item(i,10)->text())
                .arg(ui->detailsWidget->item(i,11)->text())
                .arg(ui->detailsWidget->item(i,12)->text())
                .arg(ui->detailsWidget->item(i,13)->text())
                .arg(ui->detailsWidget->item(i,14)->text())
                .arg(ui->detailsWidget->item(i,15)->text())
                .arg(ui->detailsWidget->item(i,16)->text())
                .arg(ui->detailsWidget->item(i,17)->text())
                .arg(ui->detailsWidget->item(i,18)->text())
                .arg(ui->detailsWidget->item(i,19)->text())
                .arg(ui->detailsWidget->item(i,20)->text())
                .arg(ui->detailsWidget->item(i,21)->text())
                .arg(ui->detailsWidget->item(i,22)->text())
                .arg(ui->detailsWidget->item(i,23)->text())
                .arg(ui->detailsWidget->item(i,24)->text())
                .arg(ui->detailsWidget->item(i,25)->text())
                .arg(ui->detailsWidget->item(i,26)->text())
                .arg(ui->detailsWidget->item(i,27)->text())
                .arg(ui->detailsWidget->item(i,28)->text())
                .arg(ui->detailsWidget->item(i,29)->text())
                .arg(ui->detailsWidget->item(i,30)->text())
                .arg(ui->detailsWidget->item(i,31)->text())
                .arg(ui->detailsWidget->item(i,32)->text())
                .arg(ui->detailsWidget->item(i,33)->text())
                .arg(ui->detailsWidget->item(i,34)->text())
                .arg(ui->detailsWidget->item(i,35)->text())
                .arg(ui->detailsWidget->item(i,36)->text())
                .arg(curId)*/;
        query.exec(order);
    }

    QMessageBox::information(this, "提示", "全部保存成功！");
}

void MainWindows::on_updateStatusButton_clicked()
{
    int row = 0, planRes = 0, realRes = 0;
    row = ui->detailsWidget->rowCount();
    QStringList planList,realList;
    QString planDate,planYy,planMm,planDd;
    QString realDate,realYy,realMm,realDd;

    //设置进度条显示
    ui->progressBar->setMaximum(row-1);
    ui->progressBar->setValue(0);
    ui->processDetails->setText(QString("更新项目状态..."));

    for (int i = 0; i < row; i++)
    {
        ui->progressBar->setValue(i);

        for (int j = 8; j < 33; j = j + 3)
        {
            //取出计划跟实际达成时间数据
            planDate = ui->detailsWidget->item(i,j)->text();
            realDate = ui->detailsWidget->item(i,j+1)->text();

            //切片处理
            planList = planDate.split("-");
            planYy = planList[0];
            planMm = planList[1];
            planDd = planList[2];

            realList = realDate.split("-");
            realYy = realList[0];
            realMm = realList[1];
            realDd = realList[2];

            //字符串拼接后转换为整数进行判断
            planRes = (planYy + planMm + planDd).toInt();
            realRes = (realYy + realMm + realDd).toInt();

            if(realRes <= planRes)  //如果没有延期
            {
                ui->detailsWidget->item(i,j+2)->setData(0,QString("OK"));
                ui->detailsWidget->item(i,j+2)->setBackground(QBrush(QColor(0,255,0)));
            }
            else  //如果延期
            {
                 //设置居中显示
                ui->detailsWidget->item(i,j+2)->setData(0,QString("NG"));
                ui->detailsWidget->item(i,j+2)->setBackground(QBrush(QColor(255,255,0)));
            }
        }
    }
    QMessageBox::information(this, "提示", "节点状态已更新，如需保存请点击-全部保存-！");
    ui->progressBar->setValue(0);
    ui->processDetails->setText(QString("无"));
}

void MainWindows::mainShow()
{
    this->show();
}

void MainWindows::closeEvent(QCloseEvent *event)
{
    int result = QMessageBox::information(this,tr("提示"),tr("是否关闭界面!"),tr("是"), tr("否"),0,1);
    if(result == 0)
    {
        //输入关闭的指令
        event->accept();
    }
    else
    {
        //输入不关闭的指令
        event->ignore();
    }

}


