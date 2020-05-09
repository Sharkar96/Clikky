//
// Created by Andrea Righetti on 01/05/2020.
//

#ifndef CLIKKY_MOUSEBUTTONDOWN_H
#define CLIKKY_MOUSEBUTTONDOWN_H


#include "Event.h"

class MouseButtonDown : public Event {
public:
    explicit MouseButtonDown(MouseButton buttonSide, unsigned int d = 0);
    ~MouseButtonDown() override;

    void run() override;
    std::string&& getTableMode() override;
private:
    MouseButton buttonSide; //0=right,1=left
};


#endif //CLIKKY_MOUSEBUTTONDOWN_H
