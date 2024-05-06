// FirstConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
DRY - don't repeat yourself - nie powtarzaj się
KISS - kept in simple, stupid - trzymaj prostotę, głupcze
YAGNI - you aren't gonna need it - nie potrzebujesz tego
SOLID
	S - single responsibility - pojedyńcza odpowiedzialność
*/

#include <iostream>

int main()
{
	std::cout << "Hel\tlo World!\n"; //stała łańcucuchowa od 0 do 4 miliardów znaków

	std::cout << "Nazywam sie Lukasz Felisek\n";
	std::cout << "Nazywam sie Lukasz Felisek\n";
	std::cout << 'X'; // stała znakowa - musi być jeden znak
	std::cout << "\n";
	std::cout << '\n';
	std::cout << 257 << "\n"; //stała liczbowa całkowita
	std::cout << 12.5 << "\n"; //stała liczbowa rzeczywista
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
