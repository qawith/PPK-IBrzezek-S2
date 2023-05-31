#include <iostream>

using namespace std;

class LegoNinjago {
    public:
        string category;
        string name;
        int defence;
        int attack;
        int speed;

        void ustawCechy(string _category, string _name, int _defence, int _attack, int _speed) {

            category = _category;
            name = _name;
            defence = _defence;
            attack = _attack;
            speed = _speed;

        }

        void czytajCechy(string &_category, string &_name, int &_defence, int &_attack, int &_speed) {

            _category = category;
            _name = name;
            _defence = defence;
            _attack = attack;
            _speed = speed;

        }

    };

int main() {

    string a; string b; int c; int d; int e;

    LegoNinjago Zugu;
    Zugu.category = "Wojownik";
    Zugu.name = "Zugu";
    Zugu.defence = 43;
    Zugu.attack = 76;
    Zugu.speed = 34;

    LegoNinjago Kai;
    Kai.category = "Wojownik";
    Kai.name = "Kai";
    Kai.defence = 58;
    Kai.attack = 71;
    Kai.speed = 47;

    LegoNinjago Yang;
    Yang.category = "Czarownik";
    Yang.name = "Yang";
    Yang.defence = 65;
    Yang.attack = 100;
    Yang.speed = 65;

    a = "wojownik", b = "abc", c = 65, d = 70, e = 35;
    Zugu.ustawCechy(a, b, c, d, e);

    cout << "Gatunek: " << a << "." << endl << "Imie: " << b << "." << endl << "Obrona: " << c << "." << endl;
    cout << "Ataka: " << d << "." << endl << "Predkosc: " << e << "." << endl;

    return (0);

}