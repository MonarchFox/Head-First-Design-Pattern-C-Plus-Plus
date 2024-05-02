//
// Created by niffo on 5/1/2024.
//

#ifndef OBSERVER_H
#define OBSERVER_H


class Observer {
public:
    virtual void update() = 0;
    virtual ~Observer() = default;
};


#endif //OBSERVER_H
