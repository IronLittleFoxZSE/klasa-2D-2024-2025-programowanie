#include "Rectangle.h"

Rectangle::Rectangle(double a, double b, std::string n) :Quadrangle(a, b, a, b, n)
{
	
}

double Rectangle::GetArea()
{
	return sideA * sideB;
}