//
// Created by Andrea Righetti on 03/05/2020.
//

#include "ControllerMain.h"



void ControllerMain::createEvent(int eventCode, bool s, int iterC, int d) {
    Event* e= nullptr;

    if(iterC<1)
        throw std::out_of_range("An event must have at least one iteration");
    if(d<0)
        throw std::out_of_range("Duration can't be under zero");

    if(eventCode == click)
        e=new Click(static_cast<MouseButton>(s),iterC);
    else if(eventCode == doubleClick);
    else if(eventCode == keyPress);
    else if(eventCode == moveMouse);
    else if(eventCode == mouseLongPress);
    else if(eventCode == dragNDrop);
    else if(eventCode == pause)
        e=new Pause(d);
    else if(eventCode == allOverAgain);
    model->addEvent(e);
}


