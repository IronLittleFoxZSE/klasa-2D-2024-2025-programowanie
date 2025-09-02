// Matura2022MajConsoleApplication.cpp :
#include <iostream>
#include <fstream>
#include <vector>

/*
1. Kopiujemy pliki txt do folderu z projektem
2. PPM na pliku txt i wybieramy Properties.
3. Zmieniamy Item type na "Copy to"
*/

int main()
{
    std::ifstream file("przyklad.txt");

	/*
    int numbers[200];

	for (int i = 0; i < 200; i++)
	{
		file >> numbers[i];
	}*/

	std::vector<int> numbers;
	
	int n;
	while (file >> n)
	{
		numbers.push_back(n);
	}

	/*
	std::cout << "Odczytane liczby:\n";
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	*/

	std::cout << "Odczytane liczby:\n";
	for (int num:numbers)
	{
		std::cout << num << ", ";
	}
	std::cout << "\n";

	std::cout << "Zadanie 4.1:\n";
	int counter = 0;
	for (int num : numbers)
	{
		int firstDigit;
		int lastDigit = num % 10;

		int tmpNum = num;
		do
		{
			firstDigit = tmpNum % 10;
			tmpNum = tmpNum / 10;
		} while (tmpNum != 0);

		if (firstDigit == lastDigit)
		{
			counter++;
		}
	}
	std::cout << counter << "\n";
}
