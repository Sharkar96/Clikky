//
// Created by Andrea Righetti on 01/05/2020.
//

#include "Click.h"

Click::Click(const MouseButtonUp& buttonUp, const MouseButtonDown& buttonDown) : buttonUp(buttonUp),
                                                                                 buttonDown(buttonDown) {

}

Click::~Click() {

}

void Click::run() {
    buttonDown.run();
    buttonUp.run();
}

