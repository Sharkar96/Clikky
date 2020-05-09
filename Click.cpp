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
                                                               Event("Click",0, iterCount) {}

std::string&& Click::getTableMode() {
    std::string tableMode=eventName+" x"+std::to_string(iterCount)+" >";
    return std::move(tableMode);
}


