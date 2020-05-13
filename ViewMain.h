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
#include <QMessageBox>

const int FIRST_CELL=0;
class ViewMain : public QMainWindow, public Observer {
Q_OBJECT
public:
    ViewMain(ModelMain* m, ControllerMain* c, QWidget* parent = 0);

    ~ViewMain() override;
    void update() override;

    void hideWidgets();
    void addToTable(const std::string& event);
    void clearTable();

    bool getSide();
    bool getRepeatCheck();
    int getIterNumber();
    int getDuration();
private slots:

    void onClickButton(bool checked);
    void onDragNDropButton(bool checked);
    void onDoubleClickButton(bool checked);
    void onPauseButton(bool checked);
    void onAllOverAgainButton(bool checked);
    void onMouseLongPressButton(bool checked);
    void onMoveMouse(bool checked);
    void onKeyPressButton(bool checked);
    void onAddEventButton();

private:
    void setIds();
    int lastColumnOccupied{FIRST_CELL};
    ControllerMain* controller;
    ModelMain* model;
    Ui_MainWindow* ui;


};


#endif //CLIKKY_VIEWMAIN_H
