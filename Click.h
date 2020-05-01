//
// Created by Andrea Righetti on 01/05/2020.
//

#ifndef CLIKKY_CLICK_H
#define CLIKKY_CLICK_H


#include "MouseButtonUp.h"
#include "MouseButtonDown.h"
#include "Pause.h"

class Click: public Event {
public:
    Click(const MouseButtonUp& buttonUp, const MouseButtonDown& buttonDown);
    ~Click() override;

    void run() override;
private:
    MouseButtonUp buttonUp;
    MouseButtonDown buttonDown;
    Pause pause;
};


#endif //CLIKKY_CLICK_H
