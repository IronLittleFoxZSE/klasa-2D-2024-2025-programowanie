#include <iostream>

namespace task2Namespace
{
	struct point
	{
		double x;
		double y;
	};

	void getCoordinate(double& x, double& y)
	{
		std::cout << "Podaj x\n";
		std::cin >> x;

		std::cout << "Podaj y\n";
		std::cin >> y;
	}

	void getCoordinate(point& p)
	{
		std::cout << "Podaj x\n";
		std::cin >> p.x;

		std::cout << "Podaj y\n";
		std::cin >> p.y;
	}


	//Napisz program, kt�ry pobierze wsp�rz�dne 2D
	//i obliczy jak daleko jest ten punkt od
	// �rodka uk�adu wsp�rz�dnych.
	void task2()
	{
		point firstPoint;
		//point secondPoint;
		//firstPoint.x = 5;
		//double x, y;

		//getCoordinate(firstPoint.x, firstPoint.y);
		getCoordinate(firstPoint);

		double distance = sqrt(firstPoint.x * firstPoint.x + firstPoint.y * firstPoint.y);

		std::cout << "Odleg�o�� od �rodka to: " << distance << "\n";
	}
}