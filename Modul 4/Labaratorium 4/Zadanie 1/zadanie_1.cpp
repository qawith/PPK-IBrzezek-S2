#include <iostream>

using namespace std;

class Punkt {
private:
    double x;
    double y;

public:
    Punkt(double x, double y) : x(x), y(y) {}

    double getX() const {

        return x;

    }

    double getY() const {

        return y;

    }
};

class Prostokat {
private:
    Punkt lewyGorny;
    Punkt prawyDolny;

public:
    Prostokat(const Punkt& lewyGorny, const Punkt& prawyDolny)
        : lewyGorny(lewyGorny), prawyDolny(prawyDolny) {}

    friend bool czyPunktWProstokacie(const Punkt& punkt, const Prostokat& prostokat);

};

bool czyPunktWProstokacie(const Punkt& punkt, const Prostokat& prostokat) {

    double x = punkt.getX();
    double y = punkt.getY();

    double lewyX = prostokat.lewyGorny.getX();
    double gornyY = prostokat.lewyGorny.getY();
    double prawyX = prostokat.prawyDolny.getX();
    double dolnyY = prostokat.prawyDolny.getY();

    if (x >= lewyX && x <= prawyX && y >= dolnyY && y <= gornyY) {

        return true;

    }
    else {

        return false;

    }
}

int main() {

    Punkt punkt(2.5, 3.7);
    Punkt lewyGorny(1.0, 5.0);
    Punkt prawyDolny(6.0, 2.0);

    Prostokat prostokat(lewyGorny, prawyDolny);

    if (czyPunktWProstokacie(punkt, prostokat)) {

        cout << "Punkt lezy wewnatrz prostokata." << endl;

    }
    else {

        cout << "Punkt nie lezy wewnatrz prostokata." << endl;

    }

    return 0;

}