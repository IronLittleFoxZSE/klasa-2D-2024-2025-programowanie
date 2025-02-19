#include <iostream>
#include "Player.h"
#include "TicTacToeBoard.h"

int main()
{
	//inicjowanie gry
	unsigned int playersCount = 2;
	unsigned int currentPlayerNumber = 0;
	Player** players = new Player * [playersCount];
	players[0] = new Player('O');
	players[1] = new Player('X');

	int fieldNumber;

	unsigned int boardSize = 3;
	TicTacToeBoard ticTacToeBoard(boardSize);

	ticTacToeBoard.clearBord();

	while (true)
	{
		ticTacToeBoard.drawBoard();
		
		fieldNumber = players[currentPlayerNumber]->GetFieldNumber();

		if (ticTacToeBoard.isNotCorrectMove(fieldNumber))
			continue;

		ticTacToeBoard.SetBoardField(fieldNumber, players[currentPlayerNumber]->GetSymbol());

		ticTacToeBoard.drawBoard();

		if (ticTacToeBoard.isWin(players[currentPlayerNumber]->GetSymbol()) == true)
		{
			std::cout << "Wygrana!!!\n";
			break;
		}

		if (ticTacToeBoard.isDraw())
		{
			std::cout << "Remis!!!\n";
			break;
		}

		//zmiana aktualnego gracza na nastêpnege
		currentPlayerNumber = (currentPlayerNumber + 1) % playersCount;
	}
}
