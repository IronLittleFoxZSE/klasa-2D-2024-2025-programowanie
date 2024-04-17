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


int main()
{
	task2();
}
