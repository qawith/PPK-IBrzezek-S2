#pragma once

#include <iostream>

using namespace std;

class Punkt {

private:

	static unsigned count;
	string name;
	double x, y;
	const int SDLX = 800;
	int numer_obiektu = 0;

public:

	Punkt();

	Punkt(double x, double y, const string name);

	Punkt(double x, double y);

	~Punkt();

	void setAll(double x, double y, const string name);

	void setXY(double _x, double _y);

	void readXY(double& _x, double& _y);

	int setName(const string _name);

	string readName();

	int setX(double x);

	double readX();

	static void printCount();

	void printAll();

	Punkt* copyObject();

};

