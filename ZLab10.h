//
// Created by student on 17.05.2026.
//

#ifndef EKOSYSTEM_STUDIA_ZLAB10_H
#define EKOSYSTEM_STUDIA_ZLAB10_H
#include <algorithm>
#include <iostream>
#include <vector>

#include "GeneratorLosowy.h"


class ZLab10 :: wek {
    void ZLab10::wektor()
    {
        std::vector<double> wektor;

        wektor.push_back(0);
        wektor.push_back(1);
        wektor.push_back(2);
        wektor.push_back(3);

        std::cout << "Rozmiar wektora: " << wektor.size() << std::endl;
        for(double d : wektor) std::cout << d << " ";
        std::cout << std::endl << std::endl;

        //Próba zapisu poza granicą
        for(unsigned long i=5; i<10; i++) wektor[i]= 3;
        std::cout << "Rozmiar wektora: " << wektor.size() << std::endl;
        for(double d : wektor) std::cout << d << " ";
        std::cout << std::endl << std::endl;

        //Zwiększenie rozmiaru
        wektor.resize(12);
        for(unsigned long i=5; i<10; i++) wektor[i]= 3;
        std::cout << "Rozmiar wektora: " << wektor.size() << std::endl;
        for(double d : wektor) std::cout << d << " ";
        std::cout << std::endl << std::endl;

        //Zapis przy użyciu zwykłej pętli
        for(unsigned long i=0; i<wektor.size(); i++)
            wektor[i]= i;
        std::cout << "Rozmiar wektora: " << wektor.size() << std::endl;
         for(double d : wektor) std::cout << d << " ";
         std::cout << std::endl << std::endl;

         //Zapis przy użyciu pętli zakresowej
         for(double & d: wektor) d = 3.14;

         for(double d : wektor) std::cout << d << " ";
         std::cout << std::endl << std::endl;

         //Czyszczenie
         wektor.clear();
        std::cout << "Rozmiar wektora: " << wektor.size() << std::endl;
         for(double d : wektor) std::cout << d << " ";
         std::cout << std::endl << std::endl;
         }

    void ZLab10::wektor_sortowanie()
 {
     std::vector<int> wektor;

     wektor.resize(10);

     for(int& j: wektor) j= GEN::losujOdZeraDo(20);

     std::cout << "Wektor wygenerowany" << std::endl;
     for(auto j : wektor) std::cout << j << " ";
     std::cout << std::endl << std::endl;
     std::cout << "Wektor posortowany" << std::endl;
     sort(wektor.begin(), wektor.end());
     for(auto j : wektor) std::cout << j << " ";
     std::cout << std::endl << std::endl;

     std::cout << "Wektor pomieszany" << std::endl;
     unsigned seed = chrono::system_clock::now().
     time_since_epoch().count();

     default_random_engine e(seed);
     shuffle(wektor.begin(), wektor.end(), e);
     for(auto j : wektor) std::cout << j << " ";
     std::cout << std::endl << std::endl;
    }

    void ZLab10::zbior() {
         set<string> imiona;
         imiona.insert("Adam");
         imiona.insert("Ewa");
         imiona.insert("Maciek");

         for(string s: imiona) std::cout << s << " ";
         std::cout << std::endl << std::endl;

         imiona.insert("Adam");
         imiona.insert("Iwona");
         imiona.insert("Ewa");
         imiona.insert("Beata");
         imiona.insert("Maciek");

         for(string s: imiona) std::cout << s << " ";
         std::cout << std::endl << std::endl;

         set<string>::iterator iter = imiona.begin();
        while(iter != imiona.end()){
             std::cout << *iter << std::endl;
             iter++;
             }
         }

    void ZLab10::mapa()
 {
     map<char,double> pomiary;

     pomiary.insert(pair<char,double>('A',20));
     pomiary.insert(pair<char,double>('B',30));
     pomiary.insert(pair<char,double>('C',50));
     pomiary.insert(pair<char,double>('D',25));
     pomiary.insert(pair<char,double>('A',20));
     pomiary.insert(pair<char,double>('A',40));

     std::cout << "Wyświetlenie mapy" << std::endl;
     for( char c : {'A','B','C'})
         std::cout << c << "->" << pomiary[c] << std::endl;

     std::cout << "Policz A -> " << pomiary.count('A') << std::endl;

     pomiary.erase('A');
     std::cout << "Wyświetlenie mapy" << std::endl;
     for( char c : {'A','B','C'})
         std::cout << c << "->" << pomiary[c] << std::endl;
     std::cout << "Policz A -> " << pomiary.count('A') << std::endl;
     }
};


#endif //EKOSYSTEM_STUDIA_ZLAB10_H