//
// Created by Andrea on 4/12/2020.
//

#ifndef POWERANALYSER_SUBJECT_H
#define POWERANALYSER_SUBJECT_H

#include "Observer.h"


class Subject {
public:

    virtual void notify() = 0;
    virtual void addObserver(Observer* ob) = 0;
    virtual void removeObserver(Observer* ob) = 0;

    virtual ~Subject() {};


};

#endif //POWERANALYSER_SUBJECT_H
