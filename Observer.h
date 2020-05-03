//
// Created by Andrea on 4/12/2020.
//

#ifndef CLIKKY_OBSERVER_H
#define CLIKKY_OBSERVER_H


class Observer {
public:
    virtual ~Observer() {}

    virtual void update() = 0;
};

#endif //CLIKKY_OBSERVER_H
