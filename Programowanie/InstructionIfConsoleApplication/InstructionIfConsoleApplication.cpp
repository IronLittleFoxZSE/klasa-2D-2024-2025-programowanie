#include <iostream>

/*
* Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona parzysta. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.

* Napisz program, który poprosi użytkownika o podanie masy ciała (w kilogramach) i wzrostu (w metrach).
Na podstawie tych danych oblicz wskaźnik BMI (Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.
BMI = masa/wzrost^2
poniżej 16 - wygłodzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagę
18.5 - 24.99 - wagę prawidłową
25.0 - 29.9 - nadwagę
30.0 - 34.99 - I stopień otyłości
35.0 - 39.99 - II stopień otyłości
powyżej 40.0 - otyłość skrajną

* Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 i wyświetli odpowiadający mu dzień tygodnia.
* Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.
* Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną. Wyświetl wynik.
* Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie oceny w skali 100-punktowej i przeliczy ją na ocenę procentową w przedziale od 0 do 100. Wyświetl wynik.
* Program wyświetlający odpowiedni komunikat w zależności od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
* Napisz program, który na podstawie współczynników równania kwadratowego (a, b, c) sprawdzi, czy to równanie ma rozwiązania rzeczywiste, i jeśli tak, to je obliczy.
* Program sprawdzający czy podana data jest poprawna (np. sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)



*/

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
	int firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;

	std::cout << "Liczby w kolejności rosnącej:\n";
	std::cout << firstNumber;

	std::cout << "\n";
}

//Napisz program, który wczyta dwie liczby i wyświetli je w kolejności rosnącej.
void task8()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;

	std::cout << "Liczby w kolejności rosnącej:\n";

	if (firstNumber > secondNumber)
		std::cout << secondNumber << ", " << firstNumber;
	else
		std::cout << firstNumber << ", " << secondNumber;

	std::cout << "\n";
}

//Napisz program, który wczyta trzy liczby i wyświetli je w kolejności rosnącej.
void task9()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> thirdNumber;

	std::cout << "Liczby w kolejności rosnącej:\n";

	if (thirdNumber < firstNumber
		&& thirdNumber < secondNumber)
	{
		std::cout << thirdNumber << ", ";
		if (secondNumber < firstNumber)
			std::cout << secondNumber << ", " << firstNumber;
		else
			std::cout << firstNumber << ", " << secondNumber;
	}
	else
	{
		if (secondNumber < firstNumber)
		{
			std::cout << secondNumber << ", ";
			if (thirdNumber < firstNumber)
				std::cout << thirdNumber << ", " << firstNumber;
			else
				std::cout << firstNumber << ", " << thirdNumber;
		}
		else
		{
			std::cout << firstNumber << ", ";
			if (thirdNumber < secondNumber)
				std::cout << thirdNumber << ", " << secondNumber;
			else
				std::cout << secondNumber << ", " << thirdNumber;
		}
	}

	std::cout << "\n";
}

//
void task10()
{

}

int main()
{
	task9();
}