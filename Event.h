//
// Created by Andrea Righetti on 01/05/2020.
//

#ifndef CLIKKY_EVENT_H
#define CLIKKY_EVENT_H

#include <iostream>

class Event {
public:
    explicit Event(unsigned int i=1, unsigned int d=0):iterCount{i},duration{d}{};
    virtual ~Event()=default;

    virtual void run()=0;

protected:
    unsigned int iterCount;
    unsigned int duration;
};


#endif //CLIKKY_EVENT_H
