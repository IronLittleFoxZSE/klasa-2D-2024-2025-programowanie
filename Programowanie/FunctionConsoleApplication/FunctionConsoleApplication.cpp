// FunctionConsoleApplication.cpp

#include <iostream>

/*

Funkcja - zbiór instrukcji. Definicja/deklaracja funkcji składa się z dwóch części:
* nagówek - sposób użycia funkcji
	- typ zwracany
	- nazwa (poprawny identyfikator)
	- parametrów w nawiasie (nieobowiąznowe)
* ciało - zbiór instrukcji

typZwracany nazwaFuncji(parametry)
{
	//ciało funcji
}
*/

void showHello()
{
	std::cout << "Hello world\n";
}

void showWelcomeMaciek()
{
	std::cout << "Witaj Maciek\n";
}

void showWelcomeJan()
{
	std::cout << "Witaj Jan\n";
}

void showWelcome(std::string n)
{
	std::cout << "Witaj " << n << "\n";
}

void showWelcome(std::string n, int w)
{
	showWelcome(n);
	std::cout << "Wiek tej osoby to " << w << "\n";
}

void showWelcome(std::string n, int w, std::string a)
{
	showWelcome(n, w);
	std::cout << "Adres to " << a << "\n";
}

void parameterTest(int& p)  //parametr przekazywany przez referencję
{
	std::cout << "Wartość parametru " << p << "\n";
	p++;
	std::cout << "Wartość parametru " << p << "\n";
}

void sum(int firstnumber, int secondNumber, int& result)
{
	int r;
	r = firstnumber + secondNumber;
	result = r;
}

int sum(int firstnumber, int secondNumber)
{
	int r;
	r = firstnumber + secondNumber;
	return r;
}

int main()
{
	/*
	showHello();

	showWelcomeMaciek();
	showWelcomeJan();

	std::string name;
	name = "Maciek";
	showWelcome(name);
	name = "Jan";
	showWelcome(name);
	showWelcome("Anna");

	showWelcome("Anna", 35);
	showWelcome("Jan", 60, "ul. Majowa 5");
	*/
	
	//parameterTest(89); //przez referencję nie mogę przekazać stałej
	int variable = 5;
	std::cout << "Wartość zmiennej przed funkcją " << variable << "\n";
	parameterTest(variable);
	std::cout << "Wartość zmiennej po wywołaniu funkcji " << variable << "\n";

	int result;
	sum(6, 8, result);
	std::cout << "Wynik sumowania to " << result << "\n";

	result = sum(15, 7) + 2;
	std::cout << "Wynik sumowania to " << result << "\n";

}
