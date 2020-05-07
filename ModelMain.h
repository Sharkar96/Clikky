//
// Created by Andrea Righetti on 02/05/2020.
//

#ifndef CLIKKY_MODELMAIN_H
#define CLIKKY_MODELMAIN_H


#include <list>
#include <vector>
#include "Observer.h"
#include "Subject.h"
#include "Event.h"
#include <memory>

class ModelMain : public Subject {
public:
    virtual ~ModelMain() {};

    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;
    void notify() override;
    const std::vector<std::unique_ptr<Event>>& getEvents();
    void addEvent(Event* e);
    void removeEvent(int pos);
private:
    std::list<Observer*> observers;
    std::vector<std::unique_ptr<Event>> events;
};


#endif //CLIKKY_MODELMAIN_H
