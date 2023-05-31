#include <iostream>
#include "classPunkt.h"

using namespace std;

int main() {

	Punkt A{ 10, 20 }, B{ 15, 25 }, C{ 20, 30 };

	Punkt::printCount();

	Punkt D{ 25, 35 }, E{ 30, 40 }, F{ 35, 45 };

	Punkt::printCount();

	return 0;

}
