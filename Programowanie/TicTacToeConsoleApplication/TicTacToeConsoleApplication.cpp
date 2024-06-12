#include <iostream>
#include "TicTacToeGameDetails.h"

int main()
{
	//inicjowanie gry
	const unsigned int PLAYERS_COUNT = 2;
	unsigned int currentPlayerNumber = 0;
	char playersSymbols[PLAYERS_COUNT] = { 'X', 'O' };
	//playersSymbols[0] = 'X';
	//playersSymbols[1] = 'O';

	int fieldNumber;

	const unsigned int BOARD_SIZE = 3;
	char board[BOARD_SIZE * BOARD_SIZE];

	clearBord(BOARD_SIZE, board);

	while (true)
	{
		drawBoard(BOARD_SIZE, board);

		std::cout << "Gracz o znaku " << playersSymbols[currentPlayerNumber] << " wybiera pole: \n";
		std::cin >> fieldNumber;

		if (isNotCorrectMove(fieldNumber, BOARD_SIZE, board[fieldNumber]))
			continue;

		board[fieldNumber] = playersSymbols[currentPlayerNumber];

		drawBoard(BOARD_SIZE, board);

		if (isWin(BOARD_SIZE, board, playersSymbols[currentPlayerNumber]) == true)
		{
			std::cout << "Wygrana!!!\n";
			break;
		}

		if (isDraw(BOARD_SIZE, board))
		{
			std::cout << "Remis!!!\n";
			break;
		}

		//zmiana aktualnego gracza na nastêpnege
		currentPlayerNumber = (currentPlayerNumber + 1) % PLAYERS_COUNT;
	}

}
