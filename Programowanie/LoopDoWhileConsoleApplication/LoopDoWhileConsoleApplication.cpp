// LoopDoWhileConsoleApplication.cpp 
#include <iostream>

//Napisz program, który wczyta od użytkownika liczbę dodatnią
void task1()
{
	int number;

	/*
	std::cout << "Podaj liczbę dodatnią\n";
	std::cin >> number;
	if (number < 0)
	{
		std::cout << "Podaj liczbę dodatnią\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj liczbę dodatnią\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "Podaj liczbę dodatnią\n";
				std::cin >> number;
				if (number < 0)
				{
					//....
				}
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczbę dodatnią\n";
		std::cin >> number;
	} while (number < 0);

	std::cout << "Podano liczbę " << number << "\n";
}

int main()
{
	task1();
}
