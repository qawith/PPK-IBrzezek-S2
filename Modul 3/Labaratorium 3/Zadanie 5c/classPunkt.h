#pragma once

#include <iostream>

using namespace std;

class Punkt {

private:

	static unsigned count;
	string name;
	double x, y;
	int* dane;
	const int SDLX = 800;
	int numer_obiektu = 0;

public:

	Punkt();

	Punkt(int _x, int _y, string _nazwa, int d);

	Punkt(double x, double y, const string name);

	Punkt(double x, double y);

	Punkt(const Punkt &temp);

	~Punkt();

	void setAll(double x, double y, const string name);

	void setXY(double _x, double _y);

	int setName(const string _name);

	int setX(double x);

	void setDane(int * _dane);

	void readXY(double& _x, double& _y);

	string readName();

	string getName() const;

	double getX() const;
	
	double getY() const;

	int getDane() const;

	static void printCount();

	void printAll();

	Punkt* copyObject();

};

