#include <iostream>
#include "HumanPlayer.h"
#include "TicTacToeBoard.h"
#include "EasyBoot.h"
#include "Player.h"

int main()
{
	//inicjowanie gry
	unsigned int playersCount = 3;
	unsigned int currentPlayerNumber = 0;
	Player ** players = new Player* [playersCount];
	players[0] = new EasyBoot('O');
	players[1] = new HumanPlayer('X');

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
