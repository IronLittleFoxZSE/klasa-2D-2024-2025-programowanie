// GeometricFiguresConsoleApplication.cpp 

#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Trapeze.h"

//Napisz klasy które opisz¹ figury geometryczne: 
// trapez, romb, równoleg³obok, prostok¹t i kwadrat.
// Zdefiniuj podstawowe metody.


int main()
{
    Rectangle rec(6, 4, "prostok¹t");
    std::cout << rec.GetArea();
    rec.ShowInfo();

    Square sq(5, "kwadrat");
    sq.ShowInfo();

    Trapeze tr(2, 5, 3, 8, 4, "trapez");
    tr.ShowInfo();
}

 
