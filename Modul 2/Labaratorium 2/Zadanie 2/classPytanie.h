#pragma once
#include <iostream>

#ifndef CLASSPYTANIE_H_INCLUDED
#define CLASSPYTANIE_H_INCLUDED

using namespace std;

class Pytanie {
private:

    int numer = 0;
    string tresc;
    string odpa, odpb, odpc;
    string odp, podp;
    bool praw;
    const int ILOSC_PYTAN = 3;

public:

    int punkt;
    void ustawNumer(int t);
    void wczytajZPliku(string nazwa);
    void zadajPytanie();
    void badajOdpowiedz(int t);

};

#endif

