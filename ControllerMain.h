//
// Created by Andrea Righetti on 03/05/2020.
//

#ifndef CLIKKY_CONTROLLERMAIN_H
#define CLIKKY_CONTROLLERMAIN_H


#include "ModelMain.h"

class ControllerMain {
public:
    explicit ControllerMain(ModelMain* m) : model{m} {};

private:

    ModelMain*model;
};


#endif //CLIKKY_CONTROLLERMAIN_H
