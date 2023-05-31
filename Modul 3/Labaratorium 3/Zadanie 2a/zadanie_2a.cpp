#include <iostream>
#include "classPunkt.h"

using namespace std;

int main() {

	string nazwa;
	double x, y;
	Punkt A, B, C;

	cout << endl << "Nazwa:" << B.readName() << endl;
	B.readXY(x, y);
	cout << "W punkcie " << B.readName() << ":" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	cout << "Podaj nazwe: "; cin >> nazwa;
	A.setName(nazwa);
	if (A.setName(nazwa) == -1) {

		cout << "Bledna nazwa!" << endl;

		exit(10);

	}

	cout << "Nazwa: " << A.readName() << endl;
	A.setXY(5, 10);
	A.readXY(x, y);
	cout << "W punkcie " << A.readName() << ":" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;


	return 0;

}
