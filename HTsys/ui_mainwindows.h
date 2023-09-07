/********************************************************************************
** Form generated from reading UI file 'mainwindows.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWS_H
#define UI_MAINWINDOWS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindows
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionHelp;
    QAction *actionAbout;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableWidget *detailsWidget;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *loadButton;
    QPushButton *saveAllButton;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *saveButton;
    QPushButton *saveFileButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QPushButton *updateStatusButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *processDetails;
    QLabel *label;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_H;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindows)
    {
        if (MainWindows->objectName().isEmpty())
            MainWindows->setObjectName(QString::fromUtf8("MainWindows"));
        MainWindows->resize(1312, 769);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        MainWindows->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/resources/images/pg1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindows->setWindowIcon(icon);
        actionOpen = new QAction(MainWindows);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionExit = new QAction(MainWindows);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionHelp = new QAction(MainWindows);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout = new QAction(MainWindows);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindows);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        detailsWidget = new QTableWidget(groupBox);
        if (detailsWidget->columnCount() < 37)
            detailsWidget->setColumnCount(37);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(17, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(18, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(19, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(20, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(21, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(22, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(23, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(24, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(25, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(26, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(27, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(28, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(29, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(30, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(31, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(32, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(33, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(34, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(35, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setFont(font1);
        detailsWidget->setHorizontalHeaderItem(36, __qtablewidgetitem36);
        detailsWidget->setObjectName(QString::fromUtf8("detailsWidget"));
        detailsWidget->setMinimumSize(QSize(700, 400));
        detailsWidget->setSortingEnabled(false);

        verticalLayout->addWidget(detailsWidget);


        horizontalLayout->addWidget(groupBox);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        loadButton = new QPushButton(groupBox_2);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setFont(font);
        loadButton->setStyleSheet(QString::fromUtf8(""));
        loadButton->setIcon(icon);

        verticalLayout_2->addWidget(loadButton);

        saveAllButton = new QPushButton(groupBox_2);
        saveAllButton->setObjectName(QString::fromUtf8("saveAllButton"));
        saveAllButton->setFont(font);
        saveAllButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(saveAllButton);

        addButton = new QPushButton(groupBox_2);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setFont(font);
        addButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(addButton);

        deleteButton = new QPushButton(groupBox_2);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setFont(font);
        deleteButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(deleteButton);

        saveButton = new QPushButton(groupBox_2);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setFont(font);
        saveButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(saveButton);

        saveFileButton = new QPushButton(groupBox_2);
        saveFileButton->setObjectName(QString::fromUtf8("saveFileButton"));

        verticalLayout_2->addWidget(saveFileButton);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_6->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        updateStatusButton = new QPushButton(groupBox_3);
        updateStatusButton->setObjectName(QString::fromUtf8("updateStatusButton"));

        verticalLayout_4->addWidget(updateStatusButton);

        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_4->addWidget(pushButton_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addWidget(groupBox_3);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        processDetails = new QLabel(centralwidget);
        processDetails->setObjectName(QString::fromUtf8("processDetails"));
        processDetails->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(processDetails);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 16));
        progressBar->setValue(0);

        horizontalLayout_2->addWidget(progressBar);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_7->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_7, 0, 0, 1, 1);

        MainWindows->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindows);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1312, 23));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_F->setFont(font);
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_H = new QMenu(menubar);
        menu_H->setObjectName(QString::fromUtf8("menu_H"));
        MainWindows->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindows);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindows->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindows);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMinimumSize(QSize(0, 30));
        MainWindows->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu_F->addAction(actionOpen);
        menu_F->addAction(actionExit);
        menu_H->addAction(actionHelp);
        menu_H->addAction(actionAbout);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionExit);

        retranslateUi(MainWindows);

        QMetaObject::connectSlotsByName(MainWindows);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindows)
    {
        MainWindows->setWindowTitle(QCoreApplication::translate("MainWindows", "\343\200\212\351\241\271\347\233\256\347\256\241\347\220\206\347\263\273\347\273\237\343\200\213  --designed by \347\232\256\347\232\256\347\210\271\345\234\260", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindows", "\346\211\223\345\274\200\346\226\207\344\273\266(O)", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindows", "\344\273\216\346\226\207\344\273\266\345\257\274\345\205\245\346\225\260\346\215\256", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionOpen->setStatusTip(QCoreApplication::translate("MainWindows", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindows", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindows", "\351\200\200\345\207\272\347\263\273\347\273\237(E)", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("MainWindows", "\351\200\200\345\207\272\345\272\224\347\224\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionExit->setStatusTip(QCoreApplication::translate("MainWindows", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindows", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHelp->setText(QCoreApplication::translate("MainWindows", "\347\264\242\345\274\225(H)", nullptr));
#if QT_CONFIG(tooltip)
        actionHelp->setToolTip(QCoreApplication::translate("MainWindows", "\350\277\233\345\205\245\345\270\256\345\212\251\351\241\265", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionHelp->setShortcut(QCoreApplication::translate("MainWindows", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindows", "\345\205\263\344\272\216(A)", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindows", "\345\205\263\344\272\216\343\200\212\351\241\271\347\233\256\347\256\241\347\220\206\347\263\273\347\273\237\343\200\213", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAbout->setShortcut(QCoreApplication::translate("MainWindows", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox->setTitle(QCoreApplication::translate("MainWindows", "\351\241\271\347\233\256\346\230\216\347\273\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem = detailsWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindows", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = detailsWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindows", "\351\241\271\347\233\256\347\261\273\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = detailsWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindows", "\351\241\271\347\233\256\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = detailsWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindows", "\350\264\237\350\264\243\344\272\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = detailsWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindows", "\347\253\213\351\241\271\351\207\221\351\242\235\357\274\210\344\270\207\357\274\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = detailsWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindows", "\345\220\210\345\220\214\351\207\221\351\242\235\357\274\210\344\270\207\357\274\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = detailsWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindows", "\345\275\223\345\211\215\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = detailsWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindows", "\350\212\202\347\202\271\350\276\276\346\210\220\347\216\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = detailsWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindows", "\350\256\241\345\210\222\351\241\271\347\233\256\347\253\213\351\241\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = detailsWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindows", "\345\256\236\351\231\205\347\253\213\351\241\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = detailsWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindows", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = detailsWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindows", "\350\256\241\345\210\222\345\274\200\346\240\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = detailsWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindows", "\345\256\236\351\231\205\345\274\200\346\240\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = detailsWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindows", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = detailsWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindows", "\350\256\241\345\210\222\345\220\210\345\220\214\347\255\276\350\256\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = detailsWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindows", "\345\256\236\351\231\205\345\220\210\345\220\214\347\255\276\350\256\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = detailsWidget->horizontalHeaderItem(16);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindows", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = detailsWidget->horizontalHeaderItem(17);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindows", "\350\256\241\345\210\222\351\207\207\350\264\255\345\210\266\351\200\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = detailsWidget->horizontalHeaderItem(18);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindows", "\345\256\236\351\231\205\351\207\207\350\264\255\345\210\266\351\200\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = detailsWidget->horizontalHeaderItem(19);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindows", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = detailsWidget->horizontalHeaderItem(20);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindows", "\350\256\241\345\210\222\345\210\260\350\264\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = detailsWidget->horizontalHeaderItem(21);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindows", "\345\256\236\351\231\205\345\210\260\350\264\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = detailsWidget->horizontalHeaderItem(22);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindows", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = detailsWidget->horizontalHeaderItem(23);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindows", "\350\256\241\345\210\222\345\256\211\350\243\205\350\260\203\350\257\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = detailsWidget->horizontalHeaderItem(24);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindows", "\345\256\236\351\231\205\345\256\211\350\243\205\350\260\203\350\257\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = detailsWidget->horizontalHeaderItem(25);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindows", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = detailsWidget->horizontalHeaderItem(26);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindows", "\350\256\241\345\210\222\345\267\245\350\211\272\351\252\214\350\257\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = detailsWidget->horizontalHeaderItem(27);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindows", "\345\256\236\351\231\205\345\267\245\350\211\272\351\252\214\350\257\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = detailsWidget->horizontalHeaderItem(28);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindows", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = detailsWidget->horizontalHeaderItem(29);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindows", "\350\256\241\345\210\222\351\242\204\351\252\214\346\224\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = detailsWidget->horizontalHeaderItem(30);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindows", "\345\256\236\351\231\205\351\242\204\351\252\214\346\224\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = detailsWidget->horizontalHeaderItem(31);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindows", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = detailsWidget->horizontalHeaderItem(32);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindows", "\350\256\241\345\210\222\347\273\210\351\252\214\346\224\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = detailsWidget->horizontalHeaderItem(33);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindows", "\345\256\236\351\231\205\347\273\210\351\252\214\346\224\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = detailsWidget->horizontalHeaderItem(34);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindows", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = detailsWidget->horizontalHeaderItem(35);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindows", "\350\265\204\346\226\231\345\275\222\346\241\243", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = detailsWidget->horizontalHeaderItem(36);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindows", "\344\276\233\345\272\224\345\225\206\345\220\216\350\257\204\344\273\267", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindows", "\347\274\226\350\276\221", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindows", "\345\212\240\350\275\275\346\225\260\346\215\256", nullptr));
        saveAllButton->setText(QCoreApplication::translate("MainWindows", "\345\205\250\351\203\250\344\277\235\345\255\230", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindows", "\346\267\273\345\212\240\346\235\241\347\233\256", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindows", "\345\210\240\351\231\244\346\235\241\347\233\256", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindows", "\344\277\235\345\255\230\345\275\223\345\211\215", nullptr));
        saveFileButton->setText(QCoreApplication::translate("MainWindows", "\345\257\274\345\207\272\346\226\207\344\273\266", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindows", "\347\273\237\350\256\241", nullptr));
        updateStatusButton->setText(QCoreApplication::translate("MainWindows", "\346\233\264\346\226\260\347\212\266\346\200\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindows", "\351\242\204\347\225\2313", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindows", "\351\242\204\347\225\2314", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindows", "\345\244\204\347\220\206\345\206\205\345\256\271\357\274\232", nullptr));
        processDetails->setText(QCoreApplication::translate("MainWindows", "\346\227\240", nullptr));
        label->setText(QCoreApplication::translate("MainWindows", "\345\244\204\347\220\206\350\277\233\345\272\246\357\274\232", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindows", "\346\226\207\344\273\266(&F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindows", "\347\274\226\350\276\221(&E)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindows", "\345\270\256\345\212\251(&H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindows", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindows: public Ui_MainWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWS_H
