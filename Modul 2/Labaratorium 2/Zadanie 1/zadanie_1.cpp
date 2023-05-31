#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

const int ILOSC_PYTAN = 3;

class Pytanie {

private:
    int numer, punkt;
    string tresc;
    string odpa, odpb, odpc;
    string odp, odpp;

public:

    void ustawNumer(int t) {

        if (t < 1 && t > ILOSC_PYTAN) {

            cout << "Nie poprawny numer!" << endl;

        }
        else {

            numer = t;

        }

    }

    void wczytajZPliku(string nazwa) {

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
                    odpp = line;

                    file.close();

                }

            }

        }

    }

    void zadajPytanie() {

        cout << tresc << endl << endl;

        cout << "a: " << odpa << endl;
        cout << "b: " << odpb << endl;
        cout << "c: " << odpc << endl << endl;

        cout << "Twoja odpowiedz [a|b|c]: " << flush;
        cin >> odp;

    }

    int badajOdpowiedz() {

        if (odp == odpp) {

            return 1;
            punkt += 1

        }
        else {

            return 0;

        }

    }

    int pobierzPunkt() {

        return punkt;

    }

};

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


