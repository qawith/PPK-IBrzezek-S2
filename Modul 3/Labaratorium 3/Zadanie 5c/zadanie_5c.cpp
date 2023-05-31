#include <iostream>
#include "classPunkt.h"

using namespace std;

int main() {

	Punkt p1(10, 20, "A", 30);
	Punkt p2(p1);

	p1.printAll();
	p2.printAll();
	cout << endl;

	return 0;

}
