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

//Napisz program, który wylosuje liczbę 
//a następnie uzytkownik będzie musiał ją zgadnąć.
void task2()
{
	int randomNumber;

	srand(time(0));
	randomNumber = rand() % 101;

	//std::cout << "Liczba losowa " << randomNumber << "\n";

	int numberFromUser;

	/*
	std::cout << "Podaj liczbę:\n";
	std::cin >> numberFromUser;
	if (numberFromUser != randomNumber)
	{
		std::cout << "Podaj liczbę:\n";
		std::cin >> numberFromUser;
		if (numberFromUser != randomNumber)
		{
			std::cout << "Podaj liczbę:\n";
			std::cin >> numberFromUser;
			if (numberFromUser != randomNumber)
			{
				//...
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczbę:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Za duża liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "Za mała liczba\n";
	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje!!!\nZgałeś liczbę\n";
}

//Napisz program wyświetlający liczby całkowite z przedziału <0,x> (wartość x podaje użytkownik)
void task3()
{
	long long upperRange;
	std::cout << "Podaj górny zakres:\n";
	std::cin >> upperRange;

	/*
	std::cout << "0, ";
	if (upperRange >= 1)
	{
		std::cout << "1, ";
		if (upperRange >= 2)
		{
			std::cout << "2, ";
			if (upperRange >= 3)
			{
				//...
			}
		}
	}
	*/

	int number = 0;
	do
	{
		std::cout << number << ", ";
		number++;
	} while (upperRange >= number);
}

//Napisz program, który policzy sumę cyfr podanej przez użytkownika liczby.
void task4()
{
	int number;
	do
	{
		std::cout << "Podaj liczbę dodatnią\n";
		std::cin >> number;
	} while (number < 0);

	int tmpNumber;

	do
	{
		/*
		tmpNumber = -1;
		do
		{
			tmpNumber++;
		} while ((number - tmpNumber) % 10 != 0);
		
		std::cout << tmpNumber << ", ";
		*/

		int rest = number % 10;
		std::cout << rest << ", ";

		number = number / 10;

	} while (number > 0);
}

int main()
{
	task4();
}
