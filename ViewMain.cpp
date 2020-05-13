//
// Created by Andrea Righetti on 02/05/2020.
//


#include "ViewMain.h"

ViewMain::ViewMain(ModelMain* m, ControllerMain* c, QWidget* parent) : controller{c}, model{m},
                                                                       ui{new Ui_MainWindow()} {
    model->addObserver(this);
    ui->setupUi(this);
    setIds();
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
    clearTable();
    for(auto& i : model->getEvents()){
        std::string e = i->getTableMode();
        addToTable(e);
    }
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
    try {
        controller->createEvent(ui->buttonGroup->checkedId(), getSide(), getIterNumber(), getDuration());
    }
    catch(std::out_of_range& e) {
        QMessageBox msgbox;
        msgbox.setText(e.what());
        msgbox.exec();
    }
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

}

void ViewMain::clearTable() {
    ui->tableWidget->clear();
    lastColumnOccupied = FIRST_CELL;
}

//change all the rvalues back to const string references
void ViewMain::addToTable(const std::string& event) {
    QTableWidgetItem* item = new QTableWidgetItem(QString::fromStdString(event));
    item->setFlags(item->flags() ^ Qt::ItemIsEditable);
    ui->tableWidget->setItem(0, lastColumnOccupied, item);
    lastColumnOccupied++;
}

void ViewMain::setIds() {
    ui->buttonGroup->setId(ui->clickButton, click);
    ui->buttonGroup->setId(ui->doubleClickButton, doubleClick);
    ui->buttonGroup->setId(ui->keyPressButton, keyPress);
    ui->buttonGroup->setId(ui->moveMouseButton, moveMouse);
    ui->buttonGroup->setId(ui->mouseLongPressButton, mouseLongPress);
    ui->buttonGroup->setId(ui->dragNDropButton, dragNDrop);
    ui->buttonGroup->setId(ui->pauseButton, pause);
    ui->buttonGroup->setId(ui->allOverAgainButton, allOverAgain);
}

bool ViewMain::getSide() {
    if(ui->leftSideButton->isChecked())
        return true;
    else if(ui->rightSideButton->isChecked())
        return false;
}

bool ViewMain::getRepeatCheck() {
    return ui->iterCheckBox->isChecked();
}

int ViewMain::getIterNumber() {
    return ui->iterLineEdit->text().toInt();
}

int ViewMain::getDuration() {
    return ui->durationLineEdit->text().toInt();
}

