#include <iostream>
#include "classPunkt.h"

using namespace std;

int main() {

    Punkt p1, p2(123), p3(1000, 2000, "p1");

    p1.printAll();
    p2.printAll();
    p3.printAll();
    return 0;

}