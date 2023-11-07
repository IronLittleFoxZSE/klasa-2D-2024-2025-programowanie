#include <iostream>

//Napisz program, który wczyta od użytkownika jego wiek a następnie wyświetli go na konsoli.
void task1()
{
	short ageFromUser;
	std::cout << "Podaj swój wiek.\n";
	std::cin >> ageFromUser;

	std::cout << "Masz " << ageFromUser << " lat.\n";
}

//Stwórz program, który pobiera od użytkownika 
//długość w metrach i przelicza ją na centymetry, 
//milimetry i  kilometry. Wyświetl wynik.
void task2()
{
	float lengthInMeterFromUser;
	std::cout << "Podaj długość w metrach\n";
	std::cin >> lengthInMeterFromUser;

	float lengthInCentimeter;
	lengthInCentimeter = lengthInMeterFromUser * 100;

	float lengthInMilimeter = lengthInCentimeter * 10;

	float LengthInKilometer = lengthInMeterFromUser / 1000;

	std::cout << "Metry: " << lengthInMeterFromUser << "\n";
	std::cout << "Centymetry: " << lengthInCentimeter << "\n";
	std::cout << "Milimetry: " << lengthInMilimeter << "\n";
	std::cout << "Kilometry: " << LengthInKilometer << "\n";
}


int main()
{
	//task1();
	task2();
}

/*

Algorytm - skończony zbiór instrukcji realizujący postawione przed nim zadanie.
Kolejność instrukcji w zbiorze jest określona.
Sposoby zapisu:
* w punktach
* opis słowny
* język programowania lub pseudokod
* zbiór rysunków
* schemat blokowy

Zmienna - jest to pewien obszar w pamięci, słóżący do przechowywania danych. Te dane można modyfikować.
Zmienna pozwala przechować tylko jedną wartość w danym momencie czasu.

Deklaracja zmiennej - moment jej utworzenia.

typ_zmiennej nazwa_zmiennej;

Typ zmiennej - mówi o wielkości obszaru w pamięci i o rodzaju przechowywanych danych.

short           liczby całkowite ze znakiem     2 bajty     <-32 768; 32 767>
int/long        liczby całkowite ze znakiem     4 bajty     <-2 147 483 648; 2 147 483 647>
long long       liczby całkowite ze znakiem     8 bajtów    <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

Jeżeli przed powyższymi typami dodamy słowo "unsigned" to zakres
jest od zera do podwojonego zakresu górnego plus 1.

float           liczby rzeczywiste ze znakiem   4 bajty
double          liczby rzeczywiste ze znakiem   8 bajtów
long double     liczby rzeczywiste ze znakiem   12 bajtów

Nazwa zmiennej - nazwa obszaru w pamięci. Poprzez ta nazwę odwołujemy się do tego obszaru.

Wymagania kompilatora względem nazwy:
* uzycie tylko dozwolonych znaków
	- alfabet angielski a-z oraz A-Z
	- cyfry arabskie 0-9
	- podkreślenie (podłoga) _
* pierwszym znakiem nie może być cyfra
* nie może to być słowo kluczowe danego języka programowania
* musi być unikalna w danej widoczności

Wymagania programistów:
* jeśli nazwa skłąda się z wielu wyrazów to zamiast spacji:
	- używamy znaku podkreślenia np. first_number_from_user
	- stosujemy camel case, czyli piszemy wszystko razem a słowa (zaczynamy od drugiego)
	  zaczynamy z dużej litery np. firstNumberFromUser
* nazwa zmiennej musi oddawać charakter przechowywanych danych, czyli mieć znaczenie
* nazwy po angielsku !!!!

*/