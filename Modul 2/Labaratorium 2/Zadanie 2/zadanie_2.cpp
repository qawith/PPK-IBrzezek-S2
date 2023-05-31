#include "classPytanie.h"
#include <iostream>

using namespace std;

int punkty = 0;

int main() {

    Pytanie P1, P2, P3;

    P1.ustawNumer(1);
    P1.wczytajZPliku("pytania.txt");
    P1.zadajPytanie();
    P1.badajOdpowiedz(punkty);

    P2.ustawNumer(2);
    P2.wczytajZPliku("pytania.txt");
    P2.zadajPytanie();
    P2.badajOdpowiedz(punkty);

    P3.ustawNumer(3);
    P3.wczytajZPliku("pytania.txt");
    P3.zadajPytanie();
    P3.badajOdpowiedz(punkty);

    cout << "Punkty: " << P1.punkt + P2.punkt + P3.punkt << "." << endl;

    return (0);

}



