/********************************************************************************
** Form generated from reading UI file 'miainWindowceyYUN.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MIAINWINDOWCEYYUN_H
#define MIAINWINDOWCEYYUN_H

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
    QPushButton *keyPressButton;
    QPushButton *dragNDropButton;
    QPushButton *doubleClickButton;
    QPushButton *clickButton;
    QPushButton *pauseButton;
    QPushButton *mouseLongPressButton;
    QPushButton *allOverAgainButton;
    QPushButton *moveMouseButton;
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
    QWidget *durationWidget;
    QVBoxLayout *verticalLayout;
    QLabel *durationLabel;
    QLineEdit *durationLineEdit;
    QWidget *coordinatesWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *yLineEdit;
    QLabel *endLabel;
    QLabel *xLabel_2;
    QLabel *yLabel;
    QLineEdit *xLineEdit;
    QLabel *startLabel;
    QLabel *xLabel2;
    QLineEdit *xLabel;
    QLabel *yLabel2;
    QLineEdit *yLineEdit2;
    QPushButton *pushButton;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(918, 565);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(918, 565));
        MainWindow->setMaximumSize(QSize(918, 565));
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
        tableWidget->setGeometry(QRect(40, 370, 801, 31));
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setRowCount(1);
        tableWidget->setColumnCount(7);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setVisible(false);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 50, 376, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        keyPressButton = new QPushButton(gridLayoutWidget);
        keyPressButton->setObjectName(QString::fromUtf8("keyPressButton"));
        keyPressButton->setCheckable(true);
        keyPressButton->setAutoExclusive(true);

        gridLayout->addWidget(keyPressButton, 0, 2, 1, 1);

        dragNDropButton = new QPushButton(gridLayoutWidget);
        dragNDropButton->setObjectName(QString::fromUtf8("dragNDropButton"));
        dragNDropButton->setCheckable(true);
        dragNDropButton->setAutoExclusive(true);

        gridLayout->addWidget(dragNDropButton, 0, 1, 1, 1);

        doubleClickButton = new QPushButton(gridLayoutWidget);
        doubleClickButton->setObjectName(QString::fromUtf8("doubleClickButton"));
        doubleClickButton->setCheckable(true);
        doubleClickButton->setAutoExclusive(true);

        gridLayout->addWidget(doubleClickButton, 1, 0, 1, 1);

        clickButton = new QPushButton(gridLayoutWidget);
        clickButton->setObjectName(QString::fromUtf8("clickButton"));
        clickButton->setCheckable(true);
        clickButton->setAutoExclusive(true);

        gridLayout->addWidget(clickButton, 0, 0, 1, 1);

        pauseButton = new QPushButton(gridLayoutWidget);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setCheckable(true);
        pauseButton->setAutoExclusive(true);

        gridLayout->addWidget(pauseButton, 1, 2, 1, 1);

        mouseLongPressButton = new QPushButton(gridLayoutWidget);
        mouseLongPressButton->setObjectName(QString::fromUtf8("mouseLongPressButton"));
        mouseLongPressButton->setCheckable(true);
        mouseLongPressButton->setAutoExclusive(true);

        gridLayout->addWidget(mouseLongPressButton, 1, 1, 1, 1);

        allOverAgainButton = new QPushButton(gridLayoutWidget);
        allOverAgainButton->setObjectName(QString::fromUtf8("allOverAgainButton"));
        allOverAgainButton->setCheckable(true);
        allOverAgainButton->setAutoExclusive(true);

        gridLayout->addWidget(allOverAgainButton, 2, 0, 1, 1);

        moveMouseButton = new QPushButton(gridLayoutWidget);
        moveMouseButton->setObjectName(QString::fromUtf8("moveMouseButton"));
        moveMouseButton->setCheckable(true);
        moveMouseButton->setAutoExclusive(true);

        gridLayout->addWidget(moveMouseButton, 2, 1, 1, 1);

        removeEventButton = new QPushButton(centralwidget);
        removeEventButton->setObjectName(QString::fromUtf8("removeEventButton"));
        removeEventButton->setGeometry(QRect(40, 320, 31, 32));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(450, 20, 401, 291));
        widget->setAutoFillBackground(false);
        addEventButton = new QPushButton(widget);
        addEventButton->setObjectName(QString::fromUtf8("addEventButton"));
        addEventButton->setGeometry(QRect(280, 230, 111, 51));
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
        iterWidget->setGeometry(QRect(80, 10, 81, 71));
        iterLayout = new QVBoxLayout(iterWidget);
        iterLayout->setObjectName(QString::fromUtf8("iterLayout"));
        iterCheckBox = new QCheckBox(iterWidget);
        iterCheckBox->setObjectName(QString::fromUtf8("iterCheckBox"));

        iterLayout->addWidget(iterCheckBox);

        iterLineEdit = new QLineEdit(iterWidget);
        iterLineEdit->setObjectName(QString::fromUtf8("iterLineEdit"));

        iterLayout->addWidget(iterLineEdit);

        durationWidget = new QWidget(widget);
        durationWidget->setObjectName(QString::fromUtf8("durationWidget"));
        durationWidget->setGeometry(QRect(170, 10, 81, 71));
        verticalLayout = new QVBoxLayout(durationWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        durationLabel = new QLabel(durationWidget);
        durationLabel->setObjectName(QString::fromUtf8("durationLabel"));

        verticalLayout->addWidget(durationLabel);

        durationLineEdit = new QLineEdit(durationWidget);
        durationLineEdit->setObjectName(QString::fromUtf8("durationLineEdit"));

        verticalLayout->addWidget(durationLineEdit);

        coordinatesWidget = new QWidget(widget);
        coordinatesWidget->setObjectName(QString::fromUtf8("coordinatesWidget"));
        coordinatesWidget->setGeometry(QRect(0, 110, 191, 151));
        gridLayout_2 = new QGridLayout(coordinatesWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        yLineEdit = new QLineEdit(coordinatesWidget);
        yLineEdit->setObjectName(QString::fromUtf8("yLineEdit"));

        gridLayout_2->addWidget(yLineEdit, 1, 3, 1, 1);

        endLabel = new QLabel(coordinatesWidget);
        endLabel->setObjectName(QString::fromUtf8("endLabel"));

        gridLayout_2->addWidget(endLabel, 2, 1, 1, 1);

        xLabel_2 = new QLabel(coordinatesWidget);
        xLabel_2->setObjectName(QString::fromUtf8("xLabel_2"));

        gridLayout_2->addWidget(xLabel_2, 1, 0, 1, 1);

        yLabel = new QLabel(coordinatesWidget);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));

        gridLayout_2->addWidget(yLabel, 1, 2, 1, 1);

        xLineEdit = new QLineEdit(coordinatesWidget);
        xLineEdit->setObjectName(QString::fromUtf8("xLineEdit"));

        gridLayout_2->addWidget(xLineEdit, 1, 1, 1, 1);

        startLabel = new QLabel(coordinatesWidget);
        startLabel->setObjectName(QString::fromUtf8("startLabel"));

        gridLayout_2->addWidget(startLabel, 0, 1, 1, 1);

        xLabel2 = new QLabel(coordinatesWidget);
        xLabel2->setObjectName(QString::fromUtf8("xLabel2"));

        gridLayout_2->addWidget(xLabel2, 3, 0, 1, 1);

        xLabel = new QLineEdit(coordinatesWidget);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));

        gridLayout_2->addWidget(xLabel, 3, 1, 1, 1);

        yLabel2 = new QLabel(coordinatesWidget);
        yLabel2->setObjectName(QString::fromUtf8("yLabel2"));

        gridLayout_2->addWidget(yLabel2, 3, 2, 1, 1);

        yLineEdit2 = new QLineEdit(coordinatesWidget);
        yLineEdit2->setObjectName(QString::fromUtf8("yLineEdit2"));

        gridLayout_2->addWidget(yLineEdit2, 3, 3, 1, 1);

        pushButton = new QPushButton(coordinatesWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 3, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 91, 31));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
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
        keyPressButton->setText(QCoreApplication::translate("MainWindow", "Key Press", nullptr));
        dragNDropButton->setText(QCoreApplication::translate("MainWindow", "Drag n Drop", nullptr));
        doubleClickButton->setText(QCoreApplication::translate("MainWindow", "Double Click", nullptr));
        clickButton->setText(QCoreApplication::translate("MainWindow", "Click", nullptr));
        pauseButton->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        mouseLongPressButton->setText(QCoreApplication::translate("MainWindow", "Mouse long press", nullptr));
        allOverAgainButton->setText(QCoreApplication::translate("MainWindow", "All over again", nullptr));
        moveMouseButton->setText(QCoreApplication::translate("MainWindow", "Move mouse", nullptr));
        removeEventButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        addEventButton->setText(QCoreApplication::translate("MainWindow", "Add event", nullptr));
        mouseSideLabel->setText(QCoreApplication::translate("MainWindow", "Side", nullptr));
        leftSideButton->setText(QCoreApplication::translate("MainWindow", "Left", nullptr));
        rightSideButton->setText(QCoreApplication::translate("MainWindow", "Right", nullptr));
        iterCheckBox->setText(QCoreApplication::translate("MainWindow", "repeat", nullptr));
        durationLabel->setText(QCoreApplication::translate("MainWindow", "Duration", nullptr));
        endLabel->setText(QCoreApplication::translate("MainWindow", "End", nullptr));
        xLabel_2->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        yLabel->setText(QCoreApplication::translate("MainWindow", "- y", nullptr));
        startLabel->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        xLabel2->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        yLabel2->setText(QCoreApplication::translate("MainWindow", "- y", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Events", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MIAINWINDOWCEYYUN_H
