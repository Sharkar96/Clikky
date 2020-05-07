//
// Created by Andrea Righetti on 01/05/2020.
//

#ifndef CLIKKY_CLICK_H
#define CLIKKY_CLICK_H


#include "MouseButtonUp.h"
#include "MouseButtonDown.h"
#include "Pause.h"


class Click : public Event {
public:
    explicit Click(MouseButton buttonSide, unsigned int iterCount=1);
    ~Click() override;

    void run() override;
    const std::string& getTableMode() override;
private:

    MouseButtonUp buttonUp;
    MouseButtonDown buttonDown;
    Pause pause;
};


#endif //CLIKKY_CLICK_H
