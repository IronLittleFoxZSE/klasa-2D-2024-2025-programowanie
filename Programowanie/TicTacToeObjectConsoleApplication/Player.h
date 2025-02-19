#pragma once
#include <iostream>

class Player
{
private:
	char symbol;
protected:

public:
	Player(char s)
	{
		symbol = s;
	}

	int GetFieldNumber()
	{
		int fieldNumber;
		std::cout << "Gracz o znaku " << symbol << " wybiera pole: \n";
		std::cin >> fieldNumber;

		return fieldNumber;
	}

	char GetSymbol()
	{
		return symbol;
	}
};

