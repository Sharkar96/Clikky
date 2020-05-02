//
// Created by Andrea Righetti on 01/05/2020.
//

#ifndef CLIKKY_PAUSE_H
#define CLIKKY_PAUSE_H


#include "Event.h"

class Pause : public Event {
public:
    explicit Pause(unsigned int d=0);

    ~Pause() override;
    void run() override;

};


#endif //CLIKKY_PAUSE_H
