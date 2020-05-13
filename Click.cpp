//
// Created by Andrea Righetti on 01/05/2020.
//

#include "Click.h"

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
                                                               Event("Click", 0, iterCount) {}

const std::string& Click::getTableMode() {
    std::cout << eventName + " x" + std::to_string(iterCount) + " >";
    return eventName + " x" + std::to_string(iterCount) + " >";
}


