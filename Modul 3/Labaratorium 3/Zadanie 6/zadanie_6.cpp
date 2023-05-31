#include <iostream>
#include "classSamobojca.h"

using namespace std;

int main() {

    Samobojca * sdyn;

    sdyn = new Samobojca;
    sdyn->setNumber(200);
    cout << "Numer sdyn: " << sdyn->getNumber() << endl;

    sdyn->zabijSie();
    cout << "Numer sdyn: " << sdyn->getNumber() << endl;

    delete sdyn;

    return 0;

}

