#pragma once
class Player
{
protected:
	char symbol;

public:
	Player(char s)
	{
		symbol = s;
	}

	char GetSymbol()
	{
		return symbol;
	}

	virtual int GetFieldNumber()
	{
		return 0;
	}
};

