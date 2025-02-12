// PointersConsoleApplication.cpp 

#include <iostream>

int main()
{
	//int t[100000000];
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
	std::cout << "tab " << tab << "\n";
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

	ptr = new int;
	*ptr = 878;

	std::cout << "Adres obszaru na stercie " << ptr << "\n";
	std::cout << "Zawartoœæ ze sterty " << *ptr << "\n";

	delete ptr;
	ptr = NULL;

	if (ptr != NULL)
		std::cout << "Zawartoœæ ze sterty " << *ptr << "\n";
	/*
	while (true)
	{
		new int;
	}
	*/

	int count;
	std::cout << "Podaj rozmiar tablicy\n";
	std::cin >> count;
	int *t = new int[count];
	*t = 45;
	*(t + 1) = 87;
	t[3] = 99;

	int* tt = new int[count * 2];
	for (int i = 0; i < count; i++)
	{
		tt[i] = t[i];
	}
	delete[] t;
	t = tt;
	count = count * 2;


}
