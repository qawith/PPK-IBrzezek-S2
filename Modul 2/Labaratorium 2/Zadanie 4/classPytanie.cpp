#include "classPytanie.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

void Pytanie::ustawNumer(int t) {

    if (t < 1 && t > ILOSC_PYTAN) {

        cout << "Niepoprawny numer!" << endl;

        abort();

    }
    else {

        numer = t;

    }

}

void Pytanie::wczytajZPliku(string nazwa) {

    ifstream file(nazwa);

    if (!file.is_open()) {

        cout << "Blad otwarcia pliku!" << endl;

        abort();

    }

    else if (file.is_open()) {

        string line;
        string snr = to_string(numer);
        snr = "[" + snr + "]";

        while (getline(file, line)) {

            if (line == snr) {
                getline(file, line);

                tresc = line;

                getline(file, line);
                odpa = line;

                getline(file, line);
                odpb = line;

                getline(file, line);
                odpc = line;

                getline(file, line);
                podp = line;

                file.close();

            }

        }

    }

}

void Pytanie::zadajPytanie() {

    if (numer > ILOSC_PYTAN) {

        cout << "Nie poprawny numer!" << endl;

    }
    else if (numer < ILOSC_PYTAN + 1 && numer > 0) {

        cout << "Pytanie numer " << numer << ":" << endl;
        cout << tresc << endl << endl;

        cout << "a. " << odpa << endl;
        cout << "b. " << odpb << endl;
        cout << "c. " << odpc << endl << endl;

        cout << "Twoja odpowiedz: "; cin >> odp; cout << endl;
        cout << "Odpowiedz zapisana." << endl << endl;

    }

}

int Pytanie::badajOdpowiedz() {

    if (odp == podp) {

        punkt = 1;
        return 1;

    }
    else {

        punkt = 0;
        return 0;

    }

}

int Pytanie::pobierzPunkt() {

    return punkt;

}

int Pytanie::pobierzNumer() {

    return numer;

}


