#include <iostream>

using namespace std;

class LegoNinjago {
    private:
        string category;
        string name;
        int defence;
        int attack;
        int speed;

    public:
        void wczytajDane(string _category, string _name, int _defence, int _attack, int _speed) {

            category = _category;
            name = _name;
            defence = _defence;
            attack = _attack;
            speed = _speed;

        }

        void czytajDane(string &_category, string &_name, int &_defence, int &_attack, int &_speed) {

            _category = category;
            _name = name;
            _defence = defence;
            _attack = attack;
            _speed = speed;

        }

        void pokazDane() {

            cout << "Jestem " << category << ", " << "nazywam sie " << name << " mam takie moce: " << endl;
            cout << "obrona = <" << defence << ">," << endl;
            cout << "atak = <" << attack << ">," << endl;
            cout << "predkosc = <" << speed << ">." << endl;

        }

    };

int main() {

    string a; string b; int c; int d; int e;

    LegoNinjago Bratiszkin;

    Bratiszkin.wczytajDane("wojownik", "Bratiszkin", 56, 75, 55);
    Bratiszkin.pokazDane();


    LegoNinjago Mazelov;

    Mazelov.wczytajDane("czarownik", "Mazelov", 90, 64, 31);
    Mazelov.pokazDane();

    return (0);

}