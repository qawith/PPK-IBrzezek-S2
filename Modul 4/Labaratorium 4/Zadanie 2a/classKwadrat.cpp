#include "classKwadrat.h"

Kwadrat::Kwadrat() : punktPoczatkowy(), dlugoscBoku(0) {}

Kwadrat::Kwadrat(int x, int y, string name, int dlugosc)
    : punktPoczatkowy(x, y, name), dlugoscBoku(dlugosc) {}

void Kwadrat::setPunktPoczatkowy(int x, int y, string name) {
    punktPoczatkowy.setAll(x, y, name);
}

void Kwadrat::setDlugoscBoku(int dlugosc) {
    dlugoscBoku = dlugosc;
}

void Kwadrat::printInfo() {
    cout << "Kwadrat o dlugosci boku " << dlugoscBoku << " z punktem poczatkowym ";
    punktPoczatkowy.printAll();
}
