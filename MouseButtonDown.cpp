//
// Created by Andrea Righetti on 01/05/2020.
//

#include "MouseButtonDown.h"

MouseButtonDown::~MouseButtonDown() {

}

void MouseButtonDown::run() {
    std::cout <<buttonSide<< "Mouse Button Down" << std::endl;
}

MouseButtonDown::MouseButtonDown(MouseButton buttonSide, unsigned int d) : buttonSide(buttonSide), Event{d} {

}
