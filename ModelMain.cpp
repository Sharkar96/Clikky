//
// Created by Andrea Righetti on 02/05/2020.
//

#include "ModelMain.h"

void ModelMain::addObserver(Observer* ob) {
    observers.emplace_back(ob);
}

void ModelMain::notify() {

}

void ModelMain::removeObserver(Observer* ob) {
    observers.remove(ob);
}

void ModelMain::addEvent(Event* e) {
    events.emplace_back(e);
}

void ModelMain::removeEvent(int pos) {
    events.erase(events.begin() + pos);
}
