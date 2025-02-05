// GeometricFiguresConsoleApplication.cpp 

#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Trapeze.h"

//Napisz klasy kt�re opisz� figury geometryczne: 
// trapez, romb, r�wnoleg�obok, prostok�t i kwadrat.
// Zdefiniuj podstawowe metody.


int main()
{
    Rectangle rec(6, 4, "prostok�t");
    std::cout << rec.GetArea();
    rec.ShowInfo();

    Square sq(5, "kwadrat");
    sq.ShowInfo();

    Trapeze tr(2, 5, 3, 8, 4, "trapez");
    tr.ShowInfo();
}

 
