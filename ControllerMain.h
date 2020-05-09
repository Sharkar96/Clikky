//
// Created by Andrea Righetti on 03/05/2020.
//

#ifndef CLIKKY_CONTROLLERMAIN_H
#define CLIKKY_CONTROLLERMAIN_H


#include "ModelMain.h"
#include "Click.h"

enum Events{click=1, doubleClick, keyPress, moveMouse, mouseLongPress,dragNDrop,pause,allOverAgain};
class ControllerMain {
public:
    explicit ControllerMain(ModelMain* m) : model{m} {};
    void createEvent(int eventCode, bool s, bool iter, int iterC, int d);
private:

    ModelMain* model;
};


#endif //CLIKKY_CONTROLLERMAIN_H
