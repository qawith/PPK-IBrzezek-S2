#pragma once
#include <iostream>

#ifndef CLASSPYTANIE_H_INCLUDED
#define CLASSPYTANIE_H_INCLUDED

using namespace std;

class Pytanie {
private:

    int numer;
    string tresc;
    string odpa, odpb, odpc;
    string odp, podp;
    bool praw;
    const int ILOSC_PYTAN = 3;
    int punkt = 0;

public:

    void ustawNumer(int t);
    void wczytajZPliku(string nazwa);
    void zadajPytanie();
    int badajOdpowiedz();
    int pobierzPunkt();

};

#endif

