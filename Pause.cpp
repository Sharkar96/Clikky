//
// Created by Andrea Righetti on 01/05/2020.
//

#include "Pause.h"

Pause::Pause(unsigned int i,unsigned int d):Event{i,d} {

}

Pause::~Pause() {

}

void Pause::run() {
    std::cout<<"Pausing for:" <<duration<<"seconds"<<std::endl;
}



