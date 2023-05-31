#include <iostream>

using namespace std;

class TestClass {

public:

    TestClass() {

        cout << "Konstruktor" << endl;

    }

    ~TestClass() {

        cout << "Destruktor" << endl;

    }

};

int main() {

    cout << "Rozpoczecie programu" << endl;

    static TestClass A;

    cout << "Koniec programu" << endl;

}


