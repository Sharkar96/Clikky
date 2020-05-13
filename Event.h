//
// Created by Andrea Righetti on 01/05/2020.
//

#ifndef CLIKKY_EVENT_H
#define CLIKKY_EVENT_H

#include <iostream>
#include <utility>

const int CONVERSION_S_to_mS{1000};

enum MouseButton{left=true,right=false};

class Event {
public:
    explicit Event(std::string n,unsigned int d=0, unsigned int i=1):eventName{std::move(n)},duration{d},iterCount{i}{};
    virtual ~Event()=default;


    virtual void run()=0;
    virtual const std::string& getTableMode()=0;
protected:
    std::string eventName;
    unsigned int iterCount;
    unsigned int duration;
};


#endif //CLIKKY_EVENT_H
