#include <iostream>

using namespace std;

const int ILOSC_PYTAN = 3;

struct sPytanie {
    string tresc;
    string odpa, odpb, odpc;
    char odpp;
};

sPytanie tabPytania[ILOSC_PYTAN] =
{
   { "Jaki dzwiek wydaje kot?", "miau", "muu", "hau", 'a' },
   { "Najwazniejsza osoba w Polsce?", "premier", "prezes", "prezydent", 'b'},
   { "Ktora godzina to polnoc?", "11:00", "12:00", "0:00", 'c' }
};

class Pytanie {

private:

    string tresc;
    string odpa, odpb, odpc;
    char odp, odpp;
    int numer;

public:

    int punkt = 0;

    void ustawNumer(int x) {

        if (x > ILOSC_PYTAN && x < 0) {

            cout << "Nie poprawna odpowiedz!" << endl;

        }
        else {

            numer = x;

        }

    }

    void wczytajPytanie() {

        tresc = tabPytania[numer - 1].tresc;
        odpa = tabPytania[numer - 1].odpa;
        odpb = tabPytania[numer - 1].odpb;
        odpc = tabPytania[numer - 1].odpc;
        odpp = tabPytania[numer - 1].odpp;

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
        }
        else {

            return 0;

        }

    }
};


int main() {

    cout << "Quizz:" << endl;
    Pytanie P1, P2, P3;

    P1.ustawNumer(1);
    P1.wczytajPytanie();
    P1.zadajPytanie();
    P1.badajOdpowiedz();

    P2.ustawNumer(2);
    P2.wczytajPytanie();
    P2.zadajPytanie();
    P2.badajOdpowiedz();

    P3.ustawNumer(3);
    P3.wczytajPytanie();
    P3.zadajPytanie();
    P3.badajOdpowiedz();

    cout << "Punkty: " << P1.badajOdpowiedz() + P2.badajOdpowiedz() + P3.badajOdpowiedz() << endl;

    return 0;

}



