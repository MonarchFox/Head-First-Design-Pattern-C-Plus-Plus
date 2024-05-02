//
// Created by niffo on 5/1/2024.
//

#ifndef SUBJECT_H
#define SUBJECT_H


class Observer;


class Subject {
public:
    virtual ~Subject() = default;
    virtual void RegisterObserver(Observer* observer) = 0;
    virtual void RemoveObserver(Observer* observer) = 0;
    virtual void NotifyObservers() = 0;

};

#endif //SUBJECT_H
