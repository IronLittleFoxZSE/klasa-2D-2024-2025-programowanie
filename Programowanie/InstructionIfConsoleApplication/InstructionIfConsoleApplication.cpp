#include <iostream>

/*
Operatory porównania:
>   większości
<   mniejszości
>=  wieksze bądź równe
<=  mniesze bądź równe
==  równe
!=  różne

*/

//Napisz program, który pobierze liczbę od użytkownika i wyświetli czy jest ona dodatnia czy nie.
void task1()
{
    int number;
    std::cout << "Podaj liczbę \n";
    std::cin >> number;

    //wersja 1
    if (number > 0)
    {
        std::cout << "Liczba jest dodatnia\n";
    }
    
    if (number <= 0)
    {
        std::cout << "Liczba jest ujemna\n";
    }

    //wersja 2
    if (number > 0)
    {
        std::cout << "Liczba jest dodatnia\n";
    }
    else
    {
        std::cout << "Liczba jest ujemna\n";
    }


    //std::cout << "dfgsdf";
}

//Napisz program, który wczyta liczbę 
//i sprawdzi czy jest ona z zakresu <1;10).
void task2()
{
    int number;
    std::cout << "Podaj liczbę \n";
    std::cin >> number;

    if (number >= 1)
    {
        if (number < 10)
        {
            std::cout << "Liczba jest w zakresie\n";
        }
        else
        {
            std::cout << "Liczba nie jest w zakresie\n";
        }
    }
    else
    {
        std::cout << "Liczba nie jest w zakresie\n";
    }

}

int main()
{
    task2();
}