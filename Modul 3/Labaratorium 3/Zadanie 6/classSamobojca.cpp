#include "classSamobojca.h"
#include <iostream>

using namespace std;

void Samobojca::setNumber(int _number) {

	this->number = _number;

}

int Samobojca::getNumber() {

	return number;

}

void Samobojca::zabijSie() {

	delete this;

	cout << "Obiekt zniszczony!" << endl;

}