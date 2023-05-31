#include "classPunkt.h"
#include <iostream>

using namespace std;

Punkt::Punkt() {

	x = 0; y = 0; name = "NONAME";
	cout << "Konstruktor" << endl;;

}

Punkt::Punkt(double x, double y, const string name) {



}

Punkt::Punkt(double x, double y) {



}

Punkt::~Punkt() {

	cout << "Destruktor" << endl;

}

void Punkt::setXY(double _x, double _y) {

	this->x = _x;
	this->y = _y;

}

void Punkt::readXY(double& _x, double& _y) {

	_x = this->x;
	_y = this->y;

}

int Punkt::setName(const string _name) {

	if (_name.length() < 3) {

		return -1;

	}

	this->name = _name;

	return 0;

}

string Punkt::readName() {

	return name;

}

int Punkt::setX(double x_) {

	if (x > SDLX) {

		return -1;

	}

	this->x = x;

	return 0;
}

double Punkt::readX() {

	return x;

}
