// StringConsoleApplication.cpp
#include <iostream>


int main()
{
    std::string text;
    text = "Ala ma kota";
    std::cout << "Tekst na pocz¹tku: " << text << "\n";
    size_t len = text.length();
    std::cout << "D³ugoœæ: " << len << "\n";

    //pierwszy parametr: od którego znaku
    //drugi parametr: ile znaków
    std::string sub = text.substr(4, 2);
    std::cout << "Pod³añcuch: " << sub << "\n";

    text.replace(0, 3, "Ola");
    std::cout << "Tekst po zmianie: " << text << "\n";

    text.insert(3, " nie");
    std::cout << "Tekst po zmianie: " << text << "\n";

}
