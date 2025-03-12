#pragma once
#include "Player.h"
#include <iostream>

class EasyBoot : public Player
{
public:
	EasyBoot(char s) : Player(s)
	{
		srand(time(NULL));
	}

	int GetFieldNumber()
	{
		int fieldNumber;

		fieldNumber = rand();

		return fieldNumber;
	}
};

