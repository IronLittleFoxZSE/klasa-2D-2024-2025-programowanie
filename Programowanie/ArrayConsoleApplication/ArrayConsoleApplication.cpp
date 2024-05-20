// ArrayConsoleApplication.cpp 

#include <iostream>

// Napisz program, który wczyta np. 5 liczb 
// a następnie wyświetli je w odwrotnej kolejności.
void task1()
{
	/*
	int number0, number1, number2, number3;

	std::cout << "Podaj 1 liczbę\n";
	std::cin >> number0;
	std::cout << "Podaj 2 liczbę\n";
	std::cin >> number1;
	std::cout << "Podaj 3 liczbę\n";
	std::cin >> number2;
	std::cout << "Podaj 4 liczbę\n";
	std::cin >> number3;
	std::cout << number3 << ", " << number2 << ", " << number1 << ", " << number0 << "\n";
	*/

	const unsigned int ARRAY_NUMBERS_SIZE = 5;
	int numbers[ARRAY_NUMBERS_SIZE];
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		std::cout << "Podaj " << (i + 1) << " liczbę\n";
		std::cin >> numbers[i];
	}

	for (int i = ARRAY_NUMBERS_SIZE - 1; i >= 0; i--)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
}

//Napisz program obliczający średnią arytmetyczną elementów w tablicy liczb całkowitych.
void task2()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 5;
	int numbers[ARRAY_NUMBERS_SIZE];

	srand(time(NULL));
	std::cout << "Liczby w kolekcji:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 11;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n\n";

	//liczę średnią
	int sum = numbers[0];
	for (int i = 1; i < ARRAY_NUMBERS_SIZE; i++)
	{
		sum = sum + numbers[i];
		//sum += numbers[i];
	}

	double avg = sum * 1.0 / ARRAY_NUMBERS_SIZE;

	std::cout << "Suma: " << sum << "\n";
	std::cout << "Średnia to: " << avg << "\n";
}

//Napisz program, który uzupełni tablicę liczbami losowymi
// a następnie znajdzie minimum oraz maksimum.
void task3()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 10;
	int numbers[ARRAY_NUMBERS_SIZE];

	srand(time(NULL));
	std::cout << "Liczby w kolekcji:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 100;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n\n";

	int max = numbers[0];
	for (int i = 1; i < ARRAY_NUMBERS_SIZE; i++)
	{
		if (numbers[i] > max)
			max = numbers[i];
	}
	std::cout << "Największa liczba to " << max << "\n";

	int min = numbers[0];
	for (int i = 1; i < ARRAY_NUMBERS_SIZE; i++)
	{
		if (numbers[i] < min)
			min = numbers[i];
	}
	std::cout << "Najmniejsza liczba to " << min << "\n";
}

//Napisz program, który wczyta numer dnia tygodania 
// a następnie wyświetli nazwę tego dnia lub komunikat błedu.
void task4()
{
	int dayNumberFromUser;
	std::cout << "Podaj numer dnia tygodnia:\n";
	std::cin >> dayNumberFromUser;

	std::string nameOfDayInWeek[7] = { "Poniedziałek", "Wtorek" };
	nameOfDayInWeek[0] = "Poniedziałek";
	nameOfDayInWeek[1] = "Wtorek";
	nameOfDayInWeek[2] = "Środa";
	nameOfDayInWeek[3] = "Czwartek";
	nameOfDayInWeek[4] = "Piątek";
	nameOfDayInWeek[5] = "Sobota";
	nameOfDayInWeek[6] = "Niedziela";

	if (dayNumberFromUser >= 0 && dayNumberFromUser <= 6)
	{
		std::cout << "Nazwa dnia to " << nameOfDayInWeek[dayNumberFromUser] << "\n";
	}
	else
	{
		std::cout << "Nie ma takiego dnia\n";
	}
}

// Napisz program, który posortuje tablicę liczb sposobem przez wybór.
void task5()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 10;
	int numbers[ARRAY_NUMBERS_SIZE];

	srand(time(NULL));
	std::cout << "Liczby w kolekcji:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 100;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n\n";

	//algorytm sortujący
	for (int i = 0; i <= ARRAY_NUMBERS_SIZE - 2; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < ARRAY_NUMBERS_SIZE; j++)
		{
			if (numbers[j] < numbers[minIndex])
				minIndex = j;
		}
		int tmp = numbers[i];
		numbers[i] = numbers[minIndex];
		numbers[minIndex] = tmp;
	}

	std::cout << "Po posortowaniu:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n\n";
}

// Napisz program, który posortuje tablicę liczb metodą bąbelkową.
void task6()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 10;
	int numbers[ARRAY_NUMBERS_SIZE];

	srand(time(NULL));
	std::cout << "Liczby w kolekcji:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 100;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n\n";

	//algorytm sortujący
	for (int i = 0; i < ARRAY_NUMBERS_SIZE - 1; i++)
	{
		for (int j = 0; j < ARRAY_NUMBERS_SIZE - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				int tmp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = tmp;
			}
		}
	}

	std::cout << "Po posortowaniu:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n\n";
}

//Napisz program, który wyznaczy wszystkie liczby pierwsze od 2 do zadeklarowanego zakresu.
//Metoda sito Eratostenesa.
void task7()
{
	const int ARRAY_NUMBERS_SIZE = 50;
	bool sieve[ARRAY_NUMBERS_SIZE];
	for (int i = 2; i < ARRAY_NUMBERS_SIZE; i++)
	{
		sieve[i] = true;
	}

	for (int i = 2; i < ARRAY_NUMBERS_SIZE; i++)
	{
		if (sieve[i]/* == true*/)
		{
			for (int j = i + i; j < ARRAY_NUMBERS_SIZE; j = j + i)
				sieve[j] = false;
		}
	}
	
	std::cout << "Liczby pierwsze:\n";
	for (int i = 2; i < ARRAY_NUMBERS_SIZE; i++)
	{
		if (sieve[i]/* == true*/)
			std::cout << i << ",";
	}
}

int main()
{
	task1();
	task1();
}
