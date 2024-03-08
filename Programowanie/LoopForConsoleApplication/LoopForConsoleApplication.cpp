// LoopForConsoleApplication.cpp 

#include <iostream>

//Napisz program, który wyświetli "Hello world" tyle razy ile chce użytkownik
void task1()
{
	int number;
	std::cout << "Podaj liczbę dodatnią\n";
	std::cin >> number;

	/*
	int i = 0;
	while (i != number)
	{
		std::cout << "Hello world\n";
		i++;
	}
	*/

	for (int i = 0; i != number; i++)
	{
		std::cout << "Hello world\n";
	}
}

//Program wyświetlający na ekranie kolejne liczby naturalne od 1 do 10
void task2()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << i << "\n";
	}
	/*
	for (int i = 1; i <= 10; i = i + 2)
	{
		std::cout << i << "\n";
	}
	*/
}

int main()
{
	task2();
}
