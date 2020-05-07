//
// Created by Andrea Righetti on 02/05/2020.
//

#include "ModelMain.h"

void ModelMain::addObserver(Observer* ob) {
    observers.emplace_back(ob);
}

void ModelMain::notify() {
    for(auto i:observers)
        i->update();
}

void ModelMain::removeObserver(Observer* ob) {
    observers.remove(ob);
}

void ModelMain::addEvent(Event* e) {
    events.emplace_back(e);
    notify();
}

void ModelMain::removeEvent(int pos) {
    events.erase(events.begin() + pos);
    notify();
}

const std::vector<std::unique_ptr<Event>>& ModelMain::getEvents() {
    return events;
}
