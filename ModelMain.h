//
// Created by Andrea Righetti on 02/05/2020.
//

#ifndef CLIKKY_MODELMAIN_H
#define CLIKKY_MODELMAIN_H


#include <list>
#include "Observer.h"
#include "Subject.h"
#include <memory>
class ModelMain:public Subject {
public:
    virtual ~ModelMain() {};

    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;
    void notify() override;
private:
    std::list<Observer*> observers;
};


#endif //CLIKKY_MODELMAIN_H
