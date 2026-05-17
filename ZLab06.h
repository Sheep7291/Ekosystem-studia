//
// Created by niecn on 17.05.2026.
//

#ifndef UNTITLED_ZLAB06_H
#define UNTITLED_ZLAB06_H
#include <iostream>
#include <ostream>

#include "zlab03.h"


class Kwadrat : public Prostokat {
    Kwadrat(string nazwa ="?", double bok = 0)
        :Prostokat(nazwa, bok, bok){}

    ~Kwadrat() {
        cout << "Kwadrat:" << nazwa
        <<" kończy działanie." << endl;
    }
};


#endif //UNTITLED_ZLAB06_H
