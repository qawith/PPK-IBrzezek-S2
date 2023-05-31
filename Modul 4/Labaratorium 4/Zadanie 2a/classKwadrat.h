#pragma once

#include "classPunkt.h"
#include <iostream>

using namespace std;

class Kwadrat {
private:
    Punkt punktPoczatkowy;
    int dlugoscBoku;

public:
    Kwadrat();
    Kwadrat(int x, int y, string name, int dlugosc);
    void setPunktPoczatkowy(int x, int y, string name);
    void setDlugoscBoku(int dlugosc);
    void printInfo();

};

