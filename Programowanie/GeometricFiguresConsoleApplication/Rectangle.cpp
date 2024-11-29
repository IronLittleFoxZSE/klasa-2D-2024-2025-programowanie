#include "Rectangle.h"

Rectangle::Rectangle(double a, double b)
{
	sideA = a;
	sideB = b;
}

void Rectangle::ShowInfo()
{
	std::cout << "Informacja o prostok¹cie:\n";
	std::cout << "Bok A = " << sideA << "\n";
	std::cout << "Bok B = " << sideB << "\n";
	std::cout << "Obwód = " << GetPerimeter() << "\n";
	std::cout << "Pole = " << GetArea() << "\n";
}

double Rectangle::GetPerimeter()
{
	return 2 * sideA + 2 * sideB;
}

double Rectangle::GetArea()
{
	return sideA * sideB;
}