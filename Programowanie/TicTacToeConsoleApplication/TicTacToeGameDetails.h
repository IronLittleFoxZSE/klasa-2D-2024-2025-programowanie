#pragma once
#include <iostream>

void clearBord(unsigned int boardSize, char board[]);

bool isNotCorrectMove(int fieldNumber, unsigned int boardSize, char fieldInBoard);

void drawBoard(unsigned int boardSize, char board[]);

bool isWin(unsigned int boardSize, char board[], char playerSymbol);

bool isDraw(unsigned int boardSize, char board[]);