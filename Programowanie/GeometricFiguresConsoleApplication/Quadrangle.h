#pragma once
#include <iostream>

class Quadrangle
{
private:

protected:
	double sideA, sideB, sideC, sideD;
	std::string name;
public:

	Quadrangle(double a, double b, double c, double d, std::string n)
	{
		sideA = a;
		sideB = b;
		sideC = c;
		sideD = d;
		name = n;
	}

	void ShowInfo()
	{
		std::cout << "Informacja o obiekcie o nazwie " << name << ":\n";
		std::cout << "Bok A = " << sideA << "\n";
		std::cout << "Bok B = " << sideB << "\n";
		std::cout << "Bok C = " << sideC << "\n";
		std::cout << "Bok D = " << sideD << "\n";
		std::cout << "Obwód = " << GetPerimeter() << "\n";
		std::cout << "Pole = " << GetArea() << "\n";
	}

	virtual double GetArea() //Rozwi¹zanie tego problemu na innych zajêcich
	{
		return -1;
	}

	double GetPerimeter()
	{
		return sideA + sideB + sideC + sideD;
	}
};

