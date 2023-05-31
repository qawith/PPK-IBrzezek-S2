#include <iostream>

using namespace std;

int x, y;

void ustawXY(int _x, int _y) {

    x = _x;
    y = _y;

}

void czytajXY(int &_x, int &_y) {

    _x = x;
    _y = y;

}

void printXY(int _x, int _y) {

    cout << "(" << _x << ", " << _y << ")" << endl;

}

int main() {

    int a = 0, b = 0;

    ustawXY(5, 8);
    czytajXY(a, b);
    printXY(a, b);

    return (0);

}

