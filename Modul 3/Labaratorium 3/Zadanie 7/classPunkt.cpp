#include "classPunkt.h"
#include <iostream>

using namespace std;

Punkt::Punkt(): x(10), y(20), name("empty"), DANE(15) {} 

Punkt::Punkt(int dane): x(100), y(200), name("empty0"), DANE(dane) {}

Punkt::Punkt(int _x, int _y, string _name) {

    x = _x;
    y = _y; 
    name = _name; 

}

void Punkt::setAll(int _x, int _y, string _nazwa)
{
    x = _x;
    y = _y; 
    name = _nazwa;

}

void Punkt::printAll()
{
    cout << "Punkt " << name << ", x=" << x << ", y=" << y << ", DANE=" << DANE << endl;
}