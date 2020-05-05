//
// Created by Andrea Righetti on 02/05/2020.
//

#ifndef CLIKKY_VIEWMAIN_H
#define CLIKKY_VIEWMAIN_H

#include <iostream>
#include <QMainWindow>
#include "Ui_MainWindow.h"
#include "Observer.h"
#include "ModelMain.h"
#include "ControllerMain.h"

class ViewMain : public QMainWindow, public Observer {
Q_OBJECT
public:
    ViewMain(ModelMain* m, ControllerMain* c, QWidget* parent = 0);

    ~ViewMain() override;
    void update() override;

private slots:
    void onClickButton(bool checked);
private:
    ControllerMain* controller;
    ModelMain* model;
    Ui_MainWindow* ui;


};


#endif //CLIKKY_VIEWMAIN_H
