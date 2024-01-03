#include <iostream>

/*

Priorytety operatorów:

* /
+ -
> < >= <= == !=
&&
||
=

Operatory porównania:
>   większości
<   mniejszości
>=  wieksze bądź równe
<=  mniesze bądź równe
==  równe
!=  różne/ nie równe

Operatory logiczne:

||  or/lub
&&  and/i
!   not/nie


 A  B   A || B      A && B      !A
 f  f      f           f         t
 f  t      t           f
 t  f      t           f         f
 t  t      t           t


*/

//Napisz program, który pobierze liczbę od użytkownika i wyświetli czy jest ona dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbę \n";
	std::cin >> number;

	//wersja 1
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}

	if (number <= 0)
	{
		std::cout << "Liczba jest ujemna\n";
	}

	//wersja 2
	if (number > 0)
	{
		std::cout << "Liczba jest dodatnia\n";
	}
	else
	{
		std::cout << "Liczba jest ujemna\n";
	}


	//std::cout << "dfgsdf";
}

//Napisz program, który wczyta liczbę 
//i sprawdzi czy jest ona z zakresu <1;10).
void task2()
{
	int number;
	std::cout << "Podaj liczbę \n";
	std::cin >> number;

	//wersja 1
	if (number >= 1)
	{
		if (number < 10)
		{
			std::cout << "Liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "Liczba nie jest w zakresie\n";
		}
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}


	//wersja 2
	if (number >= 1 && number < 10)
	{
		std::cout << "Liczba jest w zakresie\n";
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}
}

//Napisz program, który wczyta jedną liczbę i wyświetli większą z nich.
void task3()
{
	int firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;

	std::cout << "Największa wartość to " << firstNumber << "\n";
}

//Napisz program, który wczyta dwie liczby i wyświetli większą z nich.
void task4()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;

	if (secondNumber > firstNumber)
		std::cout << "Największa wartość to " << secondNumber << "\n";
	else
		std::cout << "Największa wartość to " << firstNumber << "\n";
}

//Napisz program, który wczyta trzy liczby i wyświetli największą z nich.
void task5()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> thirdNumber;

	if (thirdNumber > firstNumber && thirdNumber > secondNumber)
		std::cout << "Największa wartość to " << thirdNumber << "\n";
	else
	{
		if (secondNumber > firstNumber)
			std::cout << "Największa wartość to " << secondNumber << "\n";
		else
			std::cout << "Największa wartość to " << firstNumber << "\n";
	}
}

//Napisz program, który wczyta cztery liczby i wyświetli największą z nich.
void task6()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> fourthNumber;

	if (fourthNumber > firstNumber
		&& fourthNumber > secondNumber
		&& fourthNumber > thirdNumber)
		std::cout << "Największa wartość to " << fourthNumber << "\n";
	else
	{
		if (thirdNumber > firstNumber && thirdNumber > secondNumber)
			std::cout << "Największa wartość to " << thirdNumber << "\n";
		else
		{
			if (secondNumber > firstNumber)
				std::cout << "Największa wartość to " << secondNumber << "\n";
			else
				std::cout << "Największa wartość to " << firstNumber << "\n";
		}
	}
}

//Napisz program, który wczyta jedną liczbę i wyświetli ją w kolejności rosnącej.
void task7()
{

}

int main()
{
	task4();
}