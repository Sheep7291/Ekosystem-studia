//
// Created by student on 17.05.2026.
//

#ifndef EKOSYSTEM_STUDIA_MIESZKANIEC_H
#define EKOSYSTEM_STUDIA_MIESZKANIEC_H
#include "ustawienia.h"


class ZamiarMieszkanca {
public:
    const AkcjaMieszkanca akcja;
    const Polozenie gdzie;

    ZamiarMieszkanca(AkcjaMieszkanca _akcja = NIC,
                     Polozenie _gdzie = NIGDZIE)
        : akcja(_akcja), gdzie(_gdzie) {
    }
};

#endif //EKOSYSTEM_STUDIA_MIESZKANIEC_H
