#include <iostream>






void getCoordinate(double &x, double &y)
{
	std::cout << "Podaj x\n";
	std::cin >> x;

	std::cout << "Podaj y\n";
	std::cin >> y;
}

//Napisz program, kt�ry pobierze wsp�rz�dne 2D
//i obliczy jak daleko jest ten punkt od
// �rodka uk�adu wsp�rz�dnych.
void task1()
{
	double x, y;

	getCoordinate(x, y);

	double distance = sqrt(x * x + y * y);

	std::cout << "Odleg�o�� od �rodka to: " << distance << "\n";
}