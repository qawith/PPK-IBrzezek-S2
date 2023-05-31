#include "classPunkt.h"
#include <iostream>

using namespace std;

unsigned Punkt::count = 0;

Punkt::Punkt() {

	this->count++;
	x = 0;
	y = 0;
	name = "NONAME";
	cout << "Konstruktor" << endl;

}

Punkt::Punkt(double x, double y, const string name) {

	this->count++;
	this->x = x; this->y = y; this->name = name;
	cout << "Konstruktor" << endl;

}

Punkt::Punkt(double x, double y) {

	this->count++;
	this->x = x; this->y = y;
	cout << "Konstruktor" << endl;

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

void Punkt::printCount() {

	cout << "Stworzono " << Punkt::count << " obiektow klasy Punkt." << endl;

}

void Punkt::readAll() {

	cout << "W punkcie " << name << ":" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

}
