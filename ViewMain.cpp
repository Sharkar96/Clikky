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
    ui->iterWidget->hide();
    ui->sideButtonWidget->hide();
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
    }

};