#pragma once

#include <iostream>

using namespace std;

class Punkt {
private:
    int x, y;
    string name;
    const int DANE = 10;

public:
    Punkt();
    Punkt(int dane);
    Punkt(int _x, int _y, string _name);
    void setAll(int _x, int _y, string _name);
    void printAll();

};

