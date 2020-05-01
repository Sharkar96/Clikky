//
// Created by Andrea Righetti on 01/05/2020.
//

#ifndef CLIKKY_MOUSEBUTTONUP_H
#define CLIKKY_MOUSEBUTTONUP_H

#include "Event.h"

class MouseButtonUp : public Event {
public:
    ~MouseButtonUp() override;
    void run() override;
private:
    bool buttonSide;
};


#endif //CLIKKY_MOUSEBUTTONUP_H
