//
// Created by Andrea Righetti on 02/05/2020.
//

#ifndef CLIKKY_UI_MAINWINDOW_H
#define CLIKKY_UI_MAINWINDOW_H
/********************************************************************************
** Form generated from reading UI file 'miainWindowEypEdz.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MIAINWINDOWEYPEDZ_H
#define MIAINWINDOWEYPEDZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *runButton;
    QTableWidget *tableWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *removeEventButton;
    QWidget *widget;
    QPushButton *addEventButton;
    QWidget *sideButtonWidget;
    QVBoxLayout *sideLayout;
    QLabel *mouseSideLabel;
    QPushButton *leftSideButton;
    QPushButton *rightSideButton;
    QWidget *iterWidget;
    QVBoxLayout *iterLayout;
    QCheckBox *iterCheckBox;
    QLineEdit *iterLineEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(894, 575);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        runButton = new QPushButton(centralwidget);
        runButton->setObjectName(QString::fromUtf8("runButton"));
        runButton->setGeometry(QRect(580, 450, 131, 61));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(40, 370, 701, 31));
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setRowCount(1);
        tableWidget->setColumnCount(7);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setVisible(false);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 20, 421, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        removeEventButton = new QPushButton(centralwidget);
        removeEventButton->setObjectName(QString::fromUtf8("removeEventButton"));
        removeEventButton->setGeometry(QRect(40, 320, 31, 32));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(500, 20, 341, 291));
        widget->setAutoFillBackground(true);
        addEventButton = new QPushButton(widget);
        addEventButton->setObjectName(QString::fromUtf8("addEventButton"));
        addEventButton->setGeometry(QRect(160, 230, 111, 51));
        sideButtonWidget = new QWidget(widget);
        sideButtonWidget->setObjectName(QString::fromUtf8("sideButtonWidget"));
        sideButtonWidget->setGeometry(QRect(0, 10, 74, 101));
        sideLayout = new QVBoxLayout(sideButtonWidget);
        sideLayout->setObjectName(QString::fromUtf8("sideLayout"));
        mouseSideLabel = new QLabel(sideButtonWidget);
        mouseSideLabel->setObjectName(QString::fromUtf8("mouseSideLabel"));

        sideLayout->addWidget(mouseSideLabel);

        leftSideButton = new QPushButton(sideButtonWidget);
        leftSideButton->setObjectName(QString::fromUtf8("leftSideButton"));

        sideLayout->addWidget(leftSideButton);

        rightSideButton = new QPushButton(sideButtonWidget);
        rightSideButton->setObjectName(QString::fromUtf8("rightSideButton"));

        sideLayout->addWidget(rightSideButton);

        iterWidget = new QWidget(widget);
        iterWidget->setObjectName(QString::fromUtf8("iterWidget"));
        iterWidget->setGeometry(QRect(80, 10, 81, 48));
        iterLayout = new QVBoxLayout(iterWidget);
        iterLayout->setObjectName(QString::fromUtf8("iterLayout"));
        iterCheckBox = new QCheckBox(iterWidget);
        iterCheckBox->setObjectName(QString::fromUtf8("iterCheckBox"));

        iterLayout->addWidget(iterCheckBox);

        iterLineEdit = new QLineEdit(iterWidget);
        iterLineEdit->setObjectName(QString::fromUtf8("iterLineEdit"));

        iterLayout->addWidget(iterLineEdit);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        runButton->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Click", nullptr));
        removeEventButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        addEventButton->setText(QCoreApplication::translate("MainWindow", "Add event", nullptr));
        mouseSideLabel->setText(QCoreApplication::translate("MainWindow", "Side", nullptr));
        leftSideButton->setText(QCoreApplication::translate("MainWindow", "Left", nullptr));
        rightSideButton->setText(QCoreApplication::translate("MainWindow", "Right", nullptr));
        iterCheckBox->setText(QCoreApplication::translate("MainWindow", "repeat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MIAINWINDOWEYPEDZ_H


#endif //CLIKKY_UI_MAINWINDOW_H
