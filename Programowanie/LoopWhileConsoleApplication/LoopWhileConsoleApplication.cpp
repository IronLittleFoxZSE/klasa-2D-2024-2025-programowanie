// LoopWhileConsoleApplication.cpp 

#include <iostream>

//Napisz program, który policzy sumę cyfr podanej przez użytkownika liczby.
void task1()
{
	int number;
	do
	{
		std::cout << "Podaj liczbę dodatnią\n";
		std::cin >> number;
	} while (number < 0);

	int numberOfDigit = 1;

	/*
	if (number > 9)
	{
		number = number / 10;
		numberOfDigit++;
		if (number > 9)
		{
			number = number / 10;
			numberOfDigit++;
			if (number > 9)
			{
				//...
			}
		}
	}
	*/

	while (number > 9)
	{
		number = number / 10;
		numberOfDigit++;
	}

	std::cout << "Ilość cyfr w liczbie to " << numberOfDigit << "\n";
}

//Napisz program, który policzy NWD dwóch liczb.
//NWD(a,b) = a jeśli b = 0
//NWD(a,b) = NWD(b, a%b) jeśli b != 0
void task2()
{
	int a;
	std::cout << "Podaj pierwszą liczbę\n";
	std::cin >> a;

	int b;
	std::cout << "Podaj drugą liczbę\n";
	std::cin >> b;
	/*
	if (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
		if (b != 0)
		{
			//...
		}
	}
	*/
	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
	}

	std::cout << "NWD = " << a << "\n";

}

//Miasto T. ma obecnie 100 tys. mieszkańców, ale jego populacja rośnie co roku o 3% rocznie. 
//Miasto B. ma 300 tys. mieszkańców i ta liczba rośnie w tempie 2% na rok.
// Wykonaj symulację prezentującą liczbę mieszkańców w obu miastach i zatrzymującą się, 
// gdy liczba mieszkańców miasta T. przekroczy liczbę z miasta B.

void task3()
{

}

int main()
{
	task2();
}
