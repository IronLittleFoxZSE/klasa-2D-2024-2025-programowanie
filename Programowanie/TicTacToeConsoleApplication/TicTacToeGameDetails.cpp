#include <iostream>

void clearBord(unsigned int boardSize, char board[])
{
	for (int i = 0; i < boardSize * boardSize; i++)
	{
		board[i] = ' ';
	}
}

bool isNotCorrectMove(int fieldNumber, unsigned int boardSize, char fieldInBoard)
{
	bool result;

	result = fieldNumber < 0
		|| fieldNumber >= boardSize * boardSize
		|| fieldInBoard != ' ';

	return result;
}

void drawRow(unsigned int boardSize, char board[], int rowNumber)
{
	for (int fieldNumber = 0; fieldNumber < boardSize; fieldNumber++)
	{
		std::cout << " " << board[boardSize * rowNumber + fieldNumber] <<" ";
		if (fieldNumber < boardSize - 1)
			std::cout << "|";
	}
	std::cout << "\n";
}

void drawHorizontalFrame(unsigned int boardSize)
{
	for (int fieldNumber = 0; fieldNumber < boardSize; fieldNumber++)
	{
		std::cout << "---";
		if (fieldNumber < boardSize - 1)
			std::cout << "+";
	}
	std::cout << "\n";
}

void drawBoard(unsigned int boardSize, char board[])
{
	/*
	
 o | x | o 
---+---+---
   | x |   
---+---+---
   |   | x 

 o | x | o |   
---+---+---+---
 o |   |   |
---+---+---+---
   |   |   |
---+---+---+---
   |   |   |

	
	*/
	system("cls");
	for (int row = 0; row < boardSize; row++)
	{
		drawRow(boardSize, board, row);
		if (row < boardSize - 1)
			drawHorizontalFrame(boardSize);
	}
}

