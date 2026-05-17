//
// Created by student on 17.05.2026.
//

#ifndef EKOSYSTEM_STUDIA_SASIEDZTWO2_H
#define EKOSYSTEM_STUDIA_SASIEDZTWO2_H
#include "Mieszkaniec.h"
#include "ustawienia.h"


class Sasiedztwo;

class Mieszkaniec {
protected:
    char symbol;

public:
    Mieszkaniec(char _symbol =
            UstawieniaSymulacji::
            pobierzUstawienia().znakNieokreslony);

    Mieszkaniec(const Mieszkaniec &mieszkaniec);

    virtual char jakiSymbol() const final;

    virtual ~Mieszkaniec();

    virtual RodzajMieszkanca kimJestes() = 0;

    virtual ZamiarMieszkanca
    wybierzAkcje(Sasiedztwo sasiedztwo) =0;

    virtual Mieszkaniec *dajPotomka() = 0;

    virtual void
    przyjmijZdobycz(Mieszkaniec *mieszkaniec) = 0;

    Mieszkaniec::Mieszkaniec(char _symbol) {
        symbol = _symbol;
    }

    Mieszkaniec::Mieszkaniec(const Mieszkaniec &mieszkaniec) {
        symbol = mieszkaniec.symbol;
    }

    char Mieszkaniec::jakiSymbol() const {
        return symbol;
    }

    Mieszkaniec::~Mieszkaniec() {
    }
};


#endif //EKOSYSTEM_STUDIA_SASIEDZTWO2_H
