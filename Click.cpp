//
// Created by Andrea Righetti on 01/05/2020.
//

#include "Click.h"

Click::Click(const MouseButtonUp& buttonUp, const MouseButtonDown& buttonDown, const Pause& p) : buttonUp{buttonUp},
                                                                                                 buttonDown{buttonDown},
                                                                                                 pause{p} {}

Click::~Click() {

}

void Click::run() {
    for(int i = 0; i < iterCount; i++){
        buttonDown.run();
        pause.run();
        buttonUp.run();
    }
}

Click::Click(MouseButton buttonSide, unsigned int iterCount) : buttonUp{buttonSide}, buttonDown{buttonSide}, pause{},
                                                               Event(0, iterCount) {}


