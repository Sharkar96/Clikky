//
// Created by Andrea Righetti on 01/05/2020.
//

#ifndef CLIKKY_MOUSEBUTTONUP_H
#define CLIKKY_MOUSEBUTTONUP_H

#include "Event.h"


class MouseButtonUp : public Event {
public:
    explicit MouseButtonUp(MouseButton buttonSide,unsigned int d=0);

    ~MouseButtonUp() override;
    void run() override;
    std::string&& getTableMode() override;

private:
    MouseButton buttonSide;
};


#endif //CLIKKY_MOUSEBUTTONUP_H
