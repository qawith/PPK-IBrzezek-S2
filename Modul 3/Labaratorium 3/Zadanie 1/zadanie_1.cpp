#include "classPytanie.h"
#include <iostream>

using namespace std;

int main() {

    Pytanie P1, P2, P3;

    P1.ustawNumer(1);
    P1.wczytajZPliku("pytania.txt");
    P1.zadajPytanie();
    P1.badajOdpowiedz();

    P2.ustawNumer(2);
    P2.wczytajZPliku("pytania.txt");
    P2.zadajPytanie();
    P2.badajOdpowiedz();

    P3.ustawNumer(3);
    P3.wczytajZPliku("pytania.txt");
    P3.zadajPytanie();
    P3.badajOdpowiedz();


    cout << "Punkty: " << P1.badajOdpowiedz() + P2.badajOdpowiedz() + P3.badajOdpowiedz() << "." << endl;

    return (0);

}