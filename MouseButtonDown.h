//
// Created by Andrea Righetti on 01/05/2020.
//

#ifndef CLIKKY_MOUSEBUTTONDOWN_H
#define CLIKKY_MOUSEBUTTONDOWN_H


#include "Event.h"

class MouseButtonDown : public Event {
public:
    ~MouseButtonDown() override;
    void run() override;
private:
    bool buttonSide;
};


#endif //CLIKKY_MOUSEBUTTONDOWN_H
