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

bool isWinInRow(unsigned int boardSize, char board[], char playerSymbol, int row)
{
	for (int fieldNumber = 0; fieldNumber < boardSize; fieldNumber++)
	{
		if (board[row * boardSize + fieldNumber] != playerSymbol)
			return false;
	}
	return true;
}

bool isWinInRows(unsigned int boardSize, char board[], char playerSymbol)
{
	for (int row = 0; row < boardSize; row++)
	{
		if (isWinInRow(boardSize, board, playerSymbol, row))
			return true;
	}
	return false;
}

bool isWinInCol(unsigned int boardSize, char board[], char playerSymbol, int col)
{
	for (int fieldNumber = 0; fieldNumber < boardSize; fieldNumber++)
	{
		if (board[boardSize * fieldNumber + col] != playerSymbol)
			return false;
	}
	return true;
}

bool isWinInColumns(unsigned int boardSize, char board[], char playerSymbol)
{
	for (int col = 0; col < boardSize; col++)
	{
		if (isWinInCol(boardSize, board, playerSymbol, col))
			return true;
	}
	return false;
}

bool isWinInLeftDiagonal(unsigned int boardSize, char board[], char playerSymbol)
{
	for (int fieldNumber = 0; fieldNumber < boardSize; fieldNumber++)
	{
		if (board[boardSize * fieldNumber + fieldNumber] != playerSymbol)
			return false;
	}
	return true;
}

bool isWinInRightDiagonal(unsigned int boardSize, char board[], char playerSymbol)
{
	for (int fieldNumber = 0; fieldNumber < boardSize; fieldNumber++)
	{
		if (board[boardSize * fieldNumber + boardSize - fieldNumber - 1] != playerSymbol)
			return false;
	}
	return true;
}

bool isWinInDiagonals(unsigned int boardSize, char board[], char playerSymbol)
{
	if (isWinInLeftDiagonal(boardSize, board, playerSymbol))
		return true;

	if (isWinInRightDiagonal(boardSize, board, playerSymbol))
		return true;

	return false;
}

bool isWin(unsigned int boardSize, char board[], char playerSymbol)
{
	if (isWinInRows(boardSize, board, playerSymbol) == true)
		return true;

	if (isWinInColumns(boardSize, board, playerSymbol))
		return true;

	if (isWinInDiagonals(boardSize, board, playerSymbol))
		return true;

	return false;
}

bool isDraw(unsigned int boardSize, char board[])
{
	for (int i = 0; i < boardSize * boardSize; i++)
	{
		if (board[i] == ' ')
			return false;
	}

	return true;
}
