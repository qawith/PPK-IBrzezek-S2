#include <iostream>
#include "classPunkt.h"

using namespace std;

int main() {

	Punkt A(10, 20, "A");
	Punkt* B = new Punkt(15, 25, "B");
	Punkt* C = new Punkt(20, 30, "C");

	delete C;
	delete B;
	
	return 0;

}
