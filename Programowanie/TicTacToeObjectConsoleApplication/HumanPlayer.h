#pragma once
#include <iostream>
#include "Player.h"

class HumanPlayer : public Player
{
public:
	HumanPlayer(char s) :Player(s)
	{

	}

	int GetFieldNumber()
	{
		int fieldNumber;
		std::cout << "Gracz o znaku " << symbol << " wybiera pole: \n";
		std::cin >> fieldNumber;

		return fieldNumber;
	}
};

