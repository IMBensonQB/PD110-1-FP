/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QLineEdit *courseLineEdit;
    QPushButton *searchButton;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox_0;
    QCheckBox *checkBox_01;
    QCheckBox *checkBox_02;
    QCheckBox *checkBox_03;
    QCheckBox *checkBox_04;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QTableView *tableView;
    QGroupBox *groupBox_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(979, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(150, 0, 551, 75));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        courseLineEdit = new QLineEdit(groupBox);
        courseLineEdit->setObjectName(QString::fromUtf8("courseLineEdit"));

        horizontalLayout->addWidget(courseLineEdit);

        searchButton = new QPushButton(groupBox);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout->addWidget(searchButton);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 80, 120, 351));
        checkBox_0 = new QCheckBox(groupBox_2);
        checkBox_0->setObjectName(QString::fromUtf8("checkBox_0"));
        checkBox_0->setGeometry(QRect(10, 40, 85, 20));
        checkBox_01 = new QCheckBox(groupBox_2);
        checkBox_01->setObjectName(QString::fromUtf8("checkBox_01"));
        checkBox_01->setGeometry(QRect(20, 70, 85, 20));
        checkBox_02 = new QCheckBox(groupBox_2);
        checkBox_02->setObjectName(QString::fromUtf8("checkBox_02"));
        checkBox_02->setGeometry(QRect(20, 100, 85, 20));
        checkBox_03 = new QCheckBox(groupBox_2);
        checkBox_03->setObjectName(QString::fromUtf8("checkBox_03"));
        checkBox_03->setGeometry(QRect(20, 130, 85, 20));
        checkBox_04 = new QCheckBox(groupBox_2);
        checkBox_04->setObjectName(QString::fromUtf8("checkBox_04"));
        checkBox_04->setGeometry(QRect(20, 160, 85, 20));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 200, 85, 20));
        checkBox_3 = new QCheckBox(groupBox_2);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 230, 85, 20));
        checkBox_4 = new QCheckBox(groupBox_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 260, 85, 20));
        checkBox_5 = new QCheckBox(groupBox_2);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(10, 290, 85, 20));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(160, 100, 541, 331));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(740, 30, 221, 491));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 21, 16));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 40, 21, 16));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 40, 21, 16));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 40, 21, 16));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 40, 21, 16));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 60, 21, 16));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 90, 21, 16));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 120, 21, 16));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 150, 21, 16));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 180, 21, 16));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 210, 21, 16));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 240, 21, 16));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 270, 21, 16));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 300, 21, 16));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 330, 21, 16));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 360, 21, 16));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 390, 21, 16));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(20, 420, 21, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 979, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\220\234\345\260\213\346\254\204", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\350\252\262\347\250\213\345\220\215\347\250\261", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\346\225\231\345\270\253\345\247\223\345\220\215", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\350\252\262\350\231\237", nullptr));

        searchButton->setText(QCoreApplication::translate("MainWindow", "\346\220\234\345\260\213", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\350\252\262\347\250\213\345\210\206\351\241\236", nullptr));
        checkBox_0->setText(QCoreApplication::translate("MainWindow", "\345\277\205\344\277\256", nullptr));
        checkBox_01->setText(QCoreApplication::translate("MainWindow", "\345\244\247\344\270\200", nullptr));
        checkBox_02->setText(QCoreApplication::translate("MainWindow", "\345\244\247\344\272\214", nullptr));
        checkBox_03->setText(QCoreApplication::translate("MainWindow", "\345\244\247\344\270\211", nullptr));
        checkBox_04->setText(QCoreApplication::translate("MainWindow", "\345\244\247\345\233\233", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\347\263\273\345\256\232\351\201\270\344\277\256", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "\344\270\200\350\210\254\351\201\270\344\277\256", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "\345\205\261\345\220\214", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "\351\200\232\350\255\230", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Timetable", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\200", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\272\214", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\270\211", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\233\233", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\344\272\224", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
