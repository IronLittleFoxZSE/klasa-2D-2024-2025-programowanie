#pragma once
#include <iostream>
#include "Quadrangle.h"

class Trapeze : public Quadrangle
{
private:

protected:
	double height;
public:

	Trapeze(double a, double b, double c, double d, double h, std::string n) :Quadrangle(a, b, c, d, n)
	{
		height = h;
	}

	double GetArea()
	{
		return (sideB + sideD) * height / 2;
	}
};

