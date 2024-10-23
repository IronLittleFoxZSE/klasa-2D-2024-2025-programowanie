// StringConsoleApplication.cpp
#include <iostream>


int main()
{
    std::string text;
    text = "Ala ma kota";
    std::cout << "Tekst na pocz�tku: " << text << "\n";
    size_t len = text.length();
    std::cout << "D�ugo��: " << len << "\n";

    //pierwszy parametr: od kt�rego znaku
    //drugi parametr: ile znak�w
    std::string sub = text.substr(4, 2);
    std::cout << "Pod�a�cuch: " << sub << "\n";

    text.replace(0, 3, "Ola");
    std::cout << "Tekst po zmianie: " << text << "\n";

    text.insert(3, " nie");
    std::cout << "Tekst po zmianie: " << text << "\n";

}
