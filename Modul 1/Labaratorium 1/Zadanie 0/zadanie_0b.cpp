#include <iostream>

using namespace std;

class Punkt {
private:
    int x, y;
    string nazwa;

public:
    void ustawXY(int _x, int _y) {

        x = _x;
        y = _y;

    }

    void czytajXY(int &_x, int &_y) {

        _x = x;
        _y = y;

    }

    void printXY() {

        cout << "(" << x << ", " << y << ")" << endl;

    }

};

int main() {

    int a, b;
    Punkt A, B;

    A.ustawXY(10, 20);
    A.czytajXY(a, b);
    A.printXY();

    return (0);

}

