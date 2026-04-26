

#ifndef UNTITLED_ORGANIZM_H
#define UNTITLED_ORGANIZM_H


class Organizm {
public:
    const unsigned short limitPosilkow;
    const unsigned short kosztPotomka;

private:
    unsigned short licznikZycia;
    unsigned short licznikPosilkow;

public:
    Organizm(unsigned short dlugoscZycia, unsigned short limitPosilkow, unsigned short kosztPotomka);

    bool zywy() const { return licznikZycia > 0; }

    bool glodny() const { return zywy() && licznikPosilkow < limitPosilkow; }

    bool paczkujacy() const { return zywy() && licznikPosilkow > kosztPotomka; }

    unsigned short stanLicznikaZycia() const { return licznikZycia; }

    unsigned short stanLicznikaPosilkow() const { return licznikPosilkow; }

    bool posilek();

    bool potomek();

    void krokSymulacji();
};

/*
void drukujOrganizm(const Organizm &o) {
    cout << "licznikZycia: "
            << o.stanLicznikaZycia()
            << " licznikPosilkow: "
            << o.stanLicznikaPosilkow() << endl
            << "limitPosilkow: "
            << o.limitPosilkow
            << " kosztPotomka: "
            << o.kosztPotomka << endl
            << "glodny: " << o.glodny()
            << " paczkujacy: "
            << o.paczkujacy() << endl << endl;
}

//1. Test kreacji obiektów
    Organizm organizm1(8, 3, 2);
    Organizm organizm2 = organizm1;
    Organizm organizm3(organizm1);

    cout << "Wynik testu kreacji obiektow:"
            << endl << endl;
    cout << "Organizm1:" << endl;
    drukujOrganizm(organizm1);
    cout << "Organizm2" << endl;
    drukujOrganizm(organizm2);
    cout << "Organizm3" << endl;
    drukujOrganizm(organizm3);

    //2. Test niezależności obiektów
    organizm1.posilek();
    organizm1.posilek();
    organizm2.posilek();
    organizm3.krokSymulacji();

    cout << "Wynik testu niezalezności obiektow:"

            << endl << endl;
    cout << "Organizm1:" << endl;
    drukujOrganizm(organizm1);
    cout << "Organizm2" << endl;
    drukujOrganizm(organizm2);
    cout << "Organizm3" << endl;
    drukujOrganizm(organizm3);

    //3. Test symulacji
    Organizm organizm4(8, 3, 2);

    cout << "Wynik testu symulacji:"
            << endl << endl;
    cout << "Stan poczatkowy:" << endl;
    drukujOrganizm(organizm4);

    for (int i = 1; i < 11; i++) {
        organizm4.krokSymulacji();

        if (organizm4.paczkujacy()) {
            organizm4.potomek();
            cout << "---> Potomek" << endl;
        } else organizm4.posilek();

        cout << "Po wykonaniu kroku symulacji: "
                << i << endl;
        drukujOrganizm(organizm4);
    }
 */


#endif //UNTITLED_ORGANIZM_H
