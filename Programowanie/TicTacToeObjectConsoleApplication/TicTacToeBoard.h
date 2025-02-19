#pragma once
#include <iostream>

class TicTacToeBoard
{
private:
	int boardSize;
	char* board;

	void drawRow(int rowNumber)
	{
		for (int fieldNumber = 0; fieldNumber < boardSize; fieldNumber++)
		{
			std::cout << " " << board[boardSize * rowNumber + fieldNumber] << " ";
			if (fieldNumber < boardSize - 1)
				std::cout << "|";
		}
		std::cout << "\n";
	}

	void drawHorizontalFrame()
	{
		for (int fieldNumber = 0; fieldNumber < boardSize; fieldNumber++)
		{
			std::cout << "---";
			if (fieldNumber < boardSize - 1)
				std::cout << "+";
		}
		std::cout << "\n";
	}

	bool isWinInRows(char playerSymbol)
	{
		for (int row = 0; row < boardSize; row++)
		{
			if (isWinInRow(playerSymbol, row))
				return true;
		}
		return false;
	}

	bool isWinInRow(char playerSymbol, int row)
	{
		for (int fieldNumber = 0; fieldNumber < boardSize; fieldNumber++)
		{
			if (board[row * boardSize + fieldNumber] != playerSymbol)
				return false;
		}
		return true;
	}

	bool isWinInColumns(char playerSymbol)
	{
		for (int col = 0; col < boardSize; col++)
		{
			if (isWinInCol(playerSymbol, col))
				return true;
		}
		return false;
	}

	bool isWinInCol(char playerSymbol, int col)
	{
		for (int fieldNumber = 0; fieldNumber < boardSize; fieldNumber++)
		{
			if (board[boardSize * fieldNumber + col] != playerSymbol)
				return false;
		}
		return true;
	}

	bool isWinInDiagonals(char playerSymbol)
	{
		if (isWinInLeftDiagonal(playerSymbol))
			return true;

		if (isWinInRightDiagonal(playerSymbol))
			return true;

		return false;
	}

	bool isWinInLeftDiagonal(char playerSymbol)
	{
		for (int fieldNumber = 0; fieldNumber < boardSize; fieldNumber++)
		{
			if (board[boardSize * fieldNumber + fieldNumber] != playerSymbol)
				return false;
		}
		return true;
	}

	bool isWinInRightDiagonal( char playerSymbol)
	{
		for (int fieldNumber = 0; fieldNumber < boardSize; fieldNumber++)
		{
			if (board[boardSize * fieldNumber + boardSize - fieldNumber - 1] != playerSymbol)
				return false;
		}
		return true;
	}
protected:

public:
	TicTacToeBoard(int s)
	{
		boardSize = s;
		board = new char[boardSize * boardSize];
	}

	void clearBord()
	{
		for (int i = 0; i < boardSize * boardSize; i++)
		{
			board[i] = ' ';
		}
	}

	void drawBoard()
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
			drawRow(row);
			if (row < boardSize - 1)
				drawHorizontalFrame();
		}
	}

	bool isNotCorrectMove(int fieldNumber)
	{
		bool result;

		result = fieldNumber < 0
			|| fieldNumber >= boardSize * boardSize
			|| board[fieldNumber] != ' ';

		return result;
	}

	void SetBoardField(int fieldNumber, char symbol)
	{
		board[fieldNumber] = symbol;
	}

	bool isWin(char playerSymbol)
	{
		if (isWinInRows(playerSymbol) == true)
			return true;

		if (isWinInColumns(playerSymbol))
			return true;

		if (isWinInDiagonals(playerSymbol))
			return true;

		return false;
	}

	bool isDraw()
	{
		for (int i = 0; i < boardSize * boardSize; i++)
		{
			if (board[i] == ' ')
				return false;
		}

		return true;
	}
};

