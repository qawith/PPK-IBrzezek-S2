#include <iostream>

using namespace std;

class Punkt {

private:

	static unsigned count;
	string name;
	double x, y;
	const int SDLX = 800;

public:

	Punkt();

	Punkt(double x, double y, const string name);

	Punkt(double x, double y);

	~Punkt();

	void setXY(double _x, double _y);

	void readXY(double& _x, double& _y);

	int setName(const string _name);

	string readName();

	int setX(double x);

	double readX();

	static void printCount();

	void readAll();

};

int main() {

	Punkt A{ 10, 20 }, B{ 15, 25 }, C{ 20, 30 };
	Punkt D{ 25, 35 }, E{ 30, 40 }, F{ 35, 45 };

	return 0;

}


unsigned Punkt::count = 0;

Punkt::Punkt() {

	x = 0;
	y = 0;
	name = "NONAME";
	cout << "To ja, konstruktor nr " << ++count << endl;

}

Punkt::Punkt(double x, double y, const string name) {

	this->x = x; this->y = y; this->name = name;
	cout << "To ja, konstruktor nr " << ++count << endl;

}

Punkt::Punkt(double x, double y) {

	this->x = x; this->y = y;
	cout << "To ja, konstruktor nr " << ++count << endl;

}

Punkt::~Punkt() {

	cout << "Nacisnij cos aby kontynuowac..." << endl;
	getchar();
	cout << "To ja destruktor nr" << count-- << endl;


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

