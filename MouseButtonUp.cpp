//
// Created by Andrea Righetti on 01/05/2020.
//

#include "MouseButtonUp.h"

void MouseButtonUp::run() {
    std::cout << buttonSide << "Mouse Button Up" << std::endl;

}

MouseButtonUp::~MouseButtonUp() {

}

MouseButtonUp::MouseButtonUp(MouseButton buttonSide, unsigned int d) : buttonSide{buttonSide},
                                                                       Event{"Mouse Button up", d} {

}

const std::string& MouseButtonUp::getTableMode() {
    return eventName + " x" + std::to_string(duration) + "s" + " >";
}

