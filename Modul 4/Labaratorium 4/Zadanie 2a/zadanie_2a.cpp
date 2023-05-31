#include "classPunkt.h"
#include "classKwadrat.h"

int main() {

    Kwadrat k1;
    k1.setPunktPoczatkowy(5, 10, "k1");
    k1.setDlugoscBoku(8);
    k1.printInfo();

    return 0;

}