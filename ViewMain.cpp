//
// Created by Andrea Righetti on 02/05/2020.
//

#include "ViewMain.h"

ViewMain::ViewMain(ModelMain* m, ControllerMain* c, QWidget* parent) : controller{c}, model{m},
                                                                       ui{new Ui_MainWindow()} {
    model->addObserver(this);
    ui->setupUi(this);
    ui->clickButton->setCheckable(true);
    connect(ui->clickButton, &QAbstractButton::toggled, this, &ViewMain::onClickButton);
    connect(ui->doubleClickButton, &QAbstractButton::toggled, this, &ViewMain::onDoubleClickButton);
    connect(ui->pauseButton, &QAbstractButton::toggled, this, &ViewMain::onPauseButton);
    connect(ui->allOverAgainButton, &QAbstractButton::toggled, this, &ViewMain::onAllOverAgainButton);
    connect(ui->mouseLongPressButton, &QAbstractButton::toggled, this, &ViewMain::onMouseLongPressButton);
    connect(ui->addEventButton, &QAbstractButton::clicked, this, &ViewMain::onAddEventButton);
    hideWidgets();
}

ViewMain::~ViewMain() {
    delete ui;
    model->removeObserver(this);

}

void ViewMain::update() {

}

void ViewMain::onClickButton(bool checked) {
    if(checked) {
        ui->iterWidget->show();
        ui->sideButtonWidget->show();
    } else
        hideWidgets();
}

void ViewMain::hideWidgets() {
    ui->iterWidget->hide();
    ui->sideButtonWidget->hide();
    ui->coordinatesWidget->hide();
    ui->durationWidget->hide();
}

void ViewMain::onAddEventButton() {

}

void ViewMain::onDoubleClickButton(bool checked) {
    if(checked) {
        ui->sideButtonWidget->show();
    } else
        hideWidgets();
}

void ViewMain::onPauseButton(bool checked) {
    if(checked) {
        ui->durationWidget->show();
    } else
        hideWidgets();
}

void ViewMain::onAllOverAgainButton(bool checked) {
    if(checked) {
        ui->iterWidget->show();
    } else
        hideWidgets();
}

void ViewMain::onMouseLongPressButton(bool checked) {
    if(checked) {
        ui->iterWidget->show();
        ui->sideButtonWidget->show();
        ui->durationWidget->show();
    } else
        hideWidgets();
}

void ViewMain::onDragNDropButton(bool checked) {

}

void ViewMain::onMoveMouse(bool checked) {

}

void ViewMain::onKeyPressButton(bool checked) {

};