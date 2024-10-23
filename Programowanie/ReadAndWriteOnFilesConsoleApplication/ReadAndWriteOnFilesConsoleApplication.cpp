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

//odczyt danych z pliku
void task2()
{
	std::string name;
	int age;
	std::ifstream readFromFile;
	readFromFile.open("c:\\dane.txt");
	if (readFromFile.is_open())
	{
		while (readFromFile.eof() == false)
		{
			readFromFile >> name;
			readFromFile >> age;

			std::cout << "Imie: " << name << " wiek: " << age << "\n";
		}

		readFromFile.close();
	}
	//readFromFile.eof();
}

//Napisz program, który wygeneruje losow¹ iloœæ liczb losowych i zapisze je do pliku tekstowego.
void task3()
{
	srand(time(NULL));

	std::ofstream writeInFile;
	writeInFile.open("c:\\liczbyLosowe.txt", std::ios::app);

	if (writeInFile.is_open() == true)
	{
		int randomNumberCount = rand() % 10 + 1;
		for (int i = 1; i < randomNumberCount; i++)
		{
			writeInFile << rand() % 1000 << "\n";
		}

		writeInFile.close();
	}
}

//Napisz program, kóry odczyta liczby z wczeœniejszego pliku i znajdzie liczbê maksymaln¹.
void task4()
{
	std::ifstream readFromFile;
	readFromFile.open("c:\\liczbyLosowe.txt");
	if (readFromFile.is_open())
	{
		int max = 0;
		int numberFromFile;
		while (readFromFile >> numberFromFile)
		{
			if (numberFromFile > max)
				max = numberFromFile;
		}

		readFromFile.close();

		std::cout << "Najwiêksza liczba to " << max << "\n";
	}
}

int main()
{
	task3();
	task4();
}
