//
// Created by Andrea Righetti on 02/05/2020.
//

#ifndef CLIKKY_UI_MAINWINDOW_H
#define CLIKKY_UI_MAINWINDOW_H
/********************************************************************************
** Form generated from reading UI file 'untitledFXufnJ.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UNTITLEDFXUFNJ_H
#define UNTITLEDFXUFNJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *runButton;
    QPushButton *addEventButton;
    QTableWidget *tableWidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        runButton = new QPushButton(centralwidget);
        runButton->setObjectName(QString::fromUtf8("runButton"));
        runButton->setGeometry(QRect(580, 450, 131, 61));
        addEventButton = new QPushButton(centralwidget);
        addEventButton->setObjectName(QString::fromUtf8("addEventButton"));
        addEventButton->setGeometry(QRect(50, 60, 111, 51));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(70, 350, 651, 51));
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setColumnCount(10);
        tableWidget->horizontalHeader()->setVisible(false);
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
        addEventButton->setText(QCoreApplication::translate("MainWindow", "Add event", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UNTITLEDFXUFNJ_H

#endif //CLIKKY_UI_MAINWINDOW_H
