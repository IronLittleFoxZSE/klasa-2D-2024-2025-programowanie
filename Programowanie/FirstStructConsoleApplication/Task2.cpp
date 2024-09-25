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


	//Napisz program, który pobierze wspó³rzêdne 2D
	//i obliczy jak daleko jest ten punkt od
	// œrodka uk³adu wspó³rzêdnych.
	void task2()
	{
		point firstPoint;
		//point secondPoint;
		//firstPoint.x = 5;
		//double x, y;

		//getCoordinate(firstPoint.x, firstPoint.y);
		getCoordinate(firstPoint);

		double distance = sqrt(firstPoint.x * firstPoint.x + firstPoint.y * firstPoint.y);

		std::cout << "Odleg³oœæ od œrodka to: " << distance << "\n";
	}
}