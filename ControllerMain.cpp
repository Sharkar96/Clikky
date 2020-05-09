//
// Created by Andrea Righetti on 03/05/2020.
//

#include "ControllerMain.h"



void ControllerMain::createEvent(int eventCode, bool s, bool iter, int iterC, int d) {
    Event* e= nullptr;

    if(eventCode == click)
        e=new Click(static_cast<MouseButton>(s),iterC);

    /*else if(eventCode == DoubleClick);
    else if(eventCode == KeyPress);
    else if(eventCode == MoveMouse);
    else if(eventCode == MouseLongPress);
    else if(eventCode == DragNDrop);
    else if(eventCode == Pause);
    else if(eventCode == AllOverAgain);*/
    model->addEvent(e);
}


