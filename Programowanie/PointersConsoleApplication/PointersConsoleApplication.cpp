// PointersConsoleApplication.cpp 

#include <iostream>

int main()
{
	int firstVar = 5;
	int secondVar = 9;

	std::cout << "firstVar = " << firstVar << "\n";
	std::cout << "adres zmiennej firstVar = " << (&firstVar) << "\n";
	std::cout << "*(&firstVar) = " << *(&firstVar) << "\n";
	std::cout << "secondVar = " << secondVar << "\n";
	std::cout << "adres zmiennej secondVar = " << (&secondVar) << "\n";

	int* ptr = &firstVar;
	//ptr = &firstVar;

	std::cout << "ptr = " << ptr << "\n";
	std::cout << "*ptr = " << *ptr << "\n";
	*ptr = 99;
	std::cout << "firstVar = " << firstVar << "\n";

	bool thirdVar = true;

	bool* boolPtr;
	boolPtr = &thirdVar;

	int tab[3] = { 2, 98, 4 };
	std::cout << "tab[0] = " << tab[0] << "\n";
	std::cout << "tab[0] = " << *tab << "\n";
	std::cout << "tab[0] = " << *(tab + 0) << "\n";
	std::cout << "tab[1] = " << tab[1] << "\n";
	std::cout << "tab[1] = " << *(tab + 1) << "\n";
	std::cout << "tab[2] = " << tab[2] << "\n";
	std::cout << "tab[2] = " << *(tab + 2) << "\n";


	std::cout << "Zawartoœæ tablicy:\n";
	for (int i = 0; i < 3; i++)
	{
		std::cout << i << ": " << tab[i] << "\n";
		std::cout << i << ": " << *(tab + i) << "\n";
	}
}
