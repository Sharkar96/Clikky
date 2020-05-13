//
// Created by Andrea Righetti on 01/05/2020.
//

#include "Pause.h"

Pause::Pause(unsigned int d) : Event{"Pause", CONVERSION_S_to_mS * d} {}

Pause::~Pause() {}

const std::string& Pause::getTableMode() {
    return eventName + " x" + std::to_string(duration) + "s" + " >";
}

void Pause::run() {
    std::cout << "Pausing for:" << duration << "seconds" << std::endl;
}



