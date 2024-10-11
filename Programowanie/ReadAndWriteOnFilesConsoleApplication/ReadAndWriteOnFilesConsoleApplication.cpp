// ReadAndWriteOnFilesConsoleApplication.cpp 

#include <iostream>
#include <fstream>

//Napisz funkcjê zapisuj¹c¹ dan¹ do pliku tekstowego
void task1()
{
	std::string name;
	int age;

	std::cout << "Podaj imie\n";
	std::cin >> name;

	std::cout << "Podaj wiek\n";
	std::cin >> age;

	std::ofstream writeInFile;
	writeInFile.open("c:\\dane.txt", std::ios::app);

	if (writeInFile.is_open() == true)
	{
		//praca na pliku
		writeInFile << name;
		writeInFile << "\n";
		writeInFile.flush();
		writeInFile << age << "\n";

		writeInFile.close();
	}
	else
		std::cout << "B³¹d otwarcia pliku\n";
}


int main()
{
	task1();
}
