#include <iostream>
#include "classPunkt.h"

using namespace std;

int main() {

	Punkt* p1, * p2;

	p1 = new Punkt(10, 20, "P1");
	p2 = new Punkt();

	p1->printAll();
	p2->printAll();
	cout << endl;

	p2 = p1->copyObject();
	p1->setAll(1, 2, "P2");

	p1->printAll();
	p2->printAll();
	cout << endl;

	delete p1;
	delete p2;

	return 0;

}
