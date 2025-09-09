
Console.Write("Hello, World!\n");
Console.WriteLine("Hello, World!");

string name = "Jan";
string surname = "Kowalski";
Console.WriteLine("Witaj " + name + " " + surname + " tutaj!!!");
Console.WriteLine("Witaj {0} {1} tutaj!!!", name, surname);
Console.WriteLine($"Witaj {name} {surname} tutaj!!!");

Console.WriteLine("Prędkość to km\\h");
Console.WriteLine(@"Prędkość to km\h");

int firstNumber = 5;
int secondNumber = firstNumber;
secondNumber = 6;
Console.WriteLine($"firstNumber = {firstNumber}");
Console.WriteLine($"secondNumber = {secondNumber}");

//----------------------------------------------------------

void ParametrTest_v1(int p)
{
    Console.WriteLine($"Przed zmianą ParametrTest_v1 {p}");
    p++;
    Console.WriteLine($"Po zmianie ParametrTest_v1 {p}");
}

firstNumber = 99;
Console.WriteLine($"Przed ParametrTest_v1 {firstNumber}");
ParametrTest_v1(firstNumber);
Console.WriteLine($"Po ParametrTest_v1 {firstNumber}");