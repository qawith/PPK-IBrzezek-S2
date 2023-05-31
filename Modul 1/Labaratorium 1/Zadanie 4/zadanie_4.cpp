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

LegoNinjago A, B, Zugu, Yang, Kai;

int i;

void ChooseCharacter() {

    string question1;
    cout << "Chczesz stworzyc swojej postaci?(Tak/Nie)" << endl;
    cin >> question1; cout << endl;

    if (question1 == "Tak" || question1 == "tak") {

        i = 1;

        string character_1_category, character_1_name, character_2_category, character_2_name;
        int character_1_defence, character_1_attack, character_1_speed, character_2_defence, character_2_attack, character_2_speed;

        cout << "Wybierz gatunek/imie pierwszego Ninjago:" << endl;

        cout << "Wpisz gatunek: "; cin >> character_1_category;
        cout << "Wpisz imie: "; cin >> character_1_name; cout << endl;

        cout << "Wybierz moce(obrona/atak/predkosc):" << endl; 
        cout << "Obrona: "; cin >> character_1_defence;
        cout << "Atak: "; cin >> character_1_attack;
        cout << "Predkosc: "; cin >> character_1_speed;

        A.wczytajDane(character_1_category, character_1_name, character_1_defence, character_1_attack, character_1_speed);

        string question1_1;

        cout << "Chczesz wyswietlic dane pierwszej postaci?(Tak/Nie)" << endl;
        cin >> question1_1; cout << endl;

        if (question1_1 == "Tak" || question1_1 == "tak") {

            A.pokazDane(); cout << endl;

        }
        else if (question1_1 == "Nie" || question1_1 == "nie") {;}
        else { cout << "Nie poprawna odpowiedz!" << endl; }

        cout << "Wybierz gatunek/imie drugiego Ninjago:" << endl;

        cout << "Wpisz gatunek: "; cin >> character_2_category;
        cout << "Wpisz imie: "; cin >> character_2_name; cout << endl;

        cout << "Wybierz moce(obrona/atak/predkosc):" << endl; 
        cout << "Obrona: "; cin >> character_2_defence;
        cout << "Atak: "; cin >> character_2_attack;
        cout << "Predkosc: "; cin >> character_2_speed;

        B.wczytajDane(character_2_category, character_2_name, character_2_defence, character_2_attack, character_2_speed);

        string question1_2;

        cout << "Chczesz wyswietlic dane drugiej postaci?(Tak/Nie)" << endl;
        cin >> question1_2; cout << endl;

        if (question1_2 == "Tak" || question1_2 == "tak") {

            B.pokazDane(); cout << endl;

        }
        else if (question1_2 == "Nie" || question1_2 == "nie") {;}
        else { cout << "Nie poprawna odpowiedz!" << endl; }
        
    }
    else if (question1 == "Nie" || question1 == "nie") {

        cout << "Wybierz pierwszego Ninjago po jego opisu(1, 2, 3):" << endl;

        cout << "1. "; Zugu.pokazDane(); cout << endl;
        cout << "2. "; Kai.pokazDane(); cout << endl;
        cout << "3. "; Yang.pokazDane(); cout << endl;

        short question1_3, question1_4;

        cout << "Wybieram "; cin >> question1_3;
        
        if (question1_3 == 1) {

            cout << "Wybrales Zugu." << endl << endl;

            cout << "Wybierz drugiego Ninjago(1, 2):" << endl;

            cout << "1. "; Kai.pokazDane(); cout << endl;
            cout << "2. "; Yang.pokazDane(); cout << endl;

            cout << "Wybieram "; cin >> question1_4;
            
            if (question1_4 == 1) {

                cout << "Wybrales Kai." << endl << endl;

                i = 2;

            }
            else if (question1_4 == 2) {

                cout << "Wybrales Yang." << endl << endl;

                i = 3;

            }
            else { cout << "Nie poprawna odpowiedz!" << endl; }

        }
        else if(question1_3 == 2) {

            cout << "Wybrales Kai." << endl << endl;

            cout << "Wybierz drugiego Ninjago(1, 2):" << endl;

            cout << "1. "; Zugu.pokazDane(); cout << endl;
            cout << "2. "; Yang.pokazDane(); cout << endl;

            cout << "Wybieram "; cin >> question1_4;

            if (question1_4 == 1) {

                cout << "Wybrales Zugu." << endl << endl;

                i = 2;

            }
            else if (question1_4 == 2) {

                cout << "Wybrales Yang." << endl << endl;

                i = 4;
                
            }
            else { cout << "Nie poprawna odpowiedz!" << endl; }

        }
        else if (question1_3 == 3) {

            i = 1;

            cout << "Wybrales Yang." << endl << endl;

            cout << "Wybierz drugiego Ninjago(1, 2):" << endl;

            cout << "1. "; Zugu.pokazDane(); cout << endl;
            cout << "2. "; Kai.pokazDane(); cout << endl;

            cout << "Wybieram "; cin >> question1_4;

            if (question1_4 == 1) {

                cout << "Wybrales Zugu." << endl << endl;

                i = 3;

            }
            else if (question1_4 == 2) {

                cout << "Wybrales Kai" << endl << endl;

                i = 4;

            }
            else { cout << "Nie poprawna odpowiedz!" << endl; }

        }

    }
    else { cout << "Nie poprawna odpowiedz!"; }

}

int main() {

    string A_a; string A_b; int A_c; int A_d; int A_e;
    string B_a; string B_b; int B_c; int B_d; int B_e;

    Zugu.wczytajDane("wojownik", "Zugu", 58, 76, 34);
    Kai.wczytajDane("wojownik", "Kai", 58, 71, 47);
    Yang.wczytajDane("czarownik", "Yang", 65, 100, 65); 

    string question1;

    cout << "Chczesz zaczacz gry?(Tak/Nie)" << endl;
    cin >> question1; cout << endl;
    
    if (question1 == "Tak" || question1 == "tak") {

        cout << "To zaczynamy!" << endl << endl;
        ChooseCharacter();

    }
    else if (question1 == "Nie" || question1 == "nie") {

        cout << "Do widzenia!" << endl;

    }
    else { cout << "Nie poprawna odpowiedz!" << endl; }

    switch(i) {

        case 1:

            A.czytajDane(A_a, A_b, A_c, A_d, A_e);
            B.czytajDane(B_a, B_b, B_c, B_d, B_e);

            cout << "Zaczyna sie pojedynek!" << endl;

            cout << "Dane Ninjago 1:" << endl;
            cout << "Gatunek: " << A_a << "." << endl << "Imie: " << A_b << "." << endl << "Obrona: " << A_c << "." << endl;
            cout << "Ataka: " << A_d << "." << endl << "Predkosc: " << A_e << "." << endl << endl;

            cout << "Dane Ninjago 2:" << endl;
            cout << "Gatunek: " << B_a << "." << endl << "Imie: " << B_b << "." << endl << "Obrona: " << B_c << "." << endl;
            cout << "Ataka: " << B_d << "." << endl << "Predkosc: " << B_e << "." << endl << endl;
        
            cout << "W bitwie!" << endl << endl;

            if (A_d > B_c && B_d > A_c) {
                
                if (A_e > B_e) {

                cout << "Wygrywa " << A_b << "!" << endl;

                }
                else { cout << "Wygrywa " << B_b << "!" << endl; }

            }
            else if (A_d == B_c || B_d == A_c) {

                if (A_e > B_e) {

                    cout << "Wygrywa " << A_b << "!" << endl;

                }
                else if (B_e > A_e) {

                    cout << "Wygrywa " << B_b << "!" << endl;

                }
            }
            else if (A_d > B_c) {

                cout << "Wygrywa " << A_b << "!" << endl;

            }
            else if (B_d > A_c) {

                cout << "Wygrywa " << B_b << "!" << endl;

            }

        break;
        
        case 2:

            Zugu.czytajDane(A_a, A_b, A_c, A_d, A_e);
            Kai.czytajDane(B_a, B_b, B_c, B_d, B_e);

            cout << "Zaczyna sie pojedynek!" << endl;

            cout << "Dane Ninjago 1:" << endl;
            cout << "Gatunek: " << A_a << "." << endl << "Imie: " << A_b << "." << endl << "Obrona: " << A_c << "." << endl;
            cout << "Ataka: " << A_d << "." << endl << "Predkosc: " << A_e << "." << endl << endl;

            cout << "Dane Ninjago 2:" << endl;
            cout << "Gatunek: " << B_a << "." << endl << "Imie: " << B_b << "." << endl << "Obrona: " << B_c << "." << endl;
            cout << "Ataka: " << B_d << "." << endl << "Predkosc: " << B_e << "." << endl << endl;
        
            cout << "W bitwie!" << endl << endl;

            cout << "Wygrywa " << A_b <<  "!" << endl;

        break;

        case 3:

            Zugu.czytajDane(A_a, A_b, A_c, A_d, A_e);
            Yang.czytajDane(B_a, B_b, B_c, B_d, B_e);

            cout << "Zaczyna sie pojedynek!" << endl;

            cout << "Dane Ninjago 1:" << endl;
            cout << "Gatunek: " << A_a << "." << endl << "Imie: " << A_b << "." << endl << "Obrona: " << A_c << "." << endl;
            cout << "Ataka: " << A_d << "." << endl << "Predkosc: " << A_e << "." << endl << endl;

            cout << "Dane Ninjago 2:" << endl;
            cout << "Gatunek: " << B_a << "." << endl << "Imie: " << B_b << "." << endl << "Obrona: " << B_c << "." << endl;
            cout << "Ataka: " << B_d << "." << endl << "Predkosc: " << B_e << "." << endl << endl;
        
            cout << "W bitwie!" << endl << endl;

            cout << "Wygrywa " << B_b << "!" << endl;

        break;
    
        case 4:
            Kai.czytajDane(A_a, A_b, A_c, A_d, A_e);
            Yang.czytajDane(B_a, B_b, B_c, B_d, B_e);

            cout << "Zaczyna sie pojedynek!" << endl;

            cout << "Dane Ninjago 1:" << endl;
            cout << "Gatunek: " << A_a << "." << endl << "Imie: " << A_b << "." << endl << "Obrona: " << A_c << "." << endl;
            cout << "Ataka: " << A_d << "." << endl << "Predkosc: " << A_e << "." << endl << endl;

            cout << "Dane Ninjago 2:" << endl;
            cout << "Gatunek: " << B_a << "." << endl << "Imie: " << B_b << "." << endl << "Obrona: " << B_c << "." << endl;
            cout << "Ataka: " << B_d << "." << endl << "Predkosc: " << B_e << "." << endl << endl;
        
            cout << "W bitwie!" << endl << endl;

            cout << "Wygrywa " << B_b << "!" << endl;

        break;
    
    }

    return (0);

}