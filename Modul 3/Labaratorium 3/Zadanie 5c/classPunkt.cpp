#include "classPunkt.h"
#include <iostream>

using namespace std;

unsigned Punkt::count = 0;

Punkt::Punkt() {

	x = 0;
	y = 0;
	name = "empty";
	*dane = 30;
	cout << "To ja, konstruktor obiektu nr " << ++count << endl;
	this->numer_obiektu = count;

}

Punkt::Punkt(int _x, int _y, string _nazwa, int d) {

	x = _x; y = _y; name = _nazwa;
	dane = new int(d);
	cout << "Zwykly konstruktor obiektu: " << name << endl;

}

Punkt::Punkt(double x, double y, const string name) {

	this->x = x; this->y = y; this->name = name;
	cout << "To ja, konstruktor obiektu nr " << ++count << endl;
	this->numer_obiektu = count;

}

Punkt::Punkt(double x, double y) {

	this->x = x; this->y = y;
	cout << "To ja, konstruktor obiektu nr " << ++count << endl;
	this->numer_obiektu = count;

}

Punkt::Punkt(const Punkt &temp) {

	dane = new int;

	this->x = temp.getX();
	this->y = temp.getY();
	this->name = temp.getName();
	* dane = temp.getDane();

	cout << "To ja, konstruktor obiektu nr " << ++count << endl;
	this->numer_obiektu = count;

}

Punkt::~Punkt() {

	cout << "Nacisnij cos aby kontynuowac..." << endl;
	getchar();
	cout << "To ja destruktor obiektu nr" << this->numer_obiektu << endl;


}

void Punkt::setAll(double x, double y, const string name) {

	this->x = x;
	this->y = y;
	this->name = name;

}

int Punkt::setName(const string _name) {

	if (_name.length() < 3) {

		return -1;

	}

	this->name = _name;

	return 0;

}

void Punkt::setXY(double _x, double _y) {

	this->x = _x;
	this->y = _y;

}

int Punkt::setX(double x_) {

	if (x > SDLX) {

		return -1;

	}

	this->x = x;

	return 0;
}

void Punkt::setDane(int * _dane) {

	*dane = * _dane;

}

void Punkt::readXY(double& _x, double& _y) {

	_x = this->x;
	_y = this->y;

}

string Punkt::readName() {

	return name;

}

string Punkt::getName() const {

	return name;

}

double Punkt::getX() const {

	return x;

}

double Punkt::getY() const {

	return y;

}

int Punkt::getDane() const {

	return *dane;

}

void Punkt::printCount() {

	cout << "Stworzono " << Punkt::count << " obiektow klasy Punkt." << endl;

}

void Punkt::printAll() {

	cout << "W punkcie " << name << ":" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

}

Punkt* Punkt::copyObject() {

	Punkt* temp;

	temp = new Punkt();

	temp->x = x;
	temp->y = y;
	temp->name = name;

	return temp;

}
