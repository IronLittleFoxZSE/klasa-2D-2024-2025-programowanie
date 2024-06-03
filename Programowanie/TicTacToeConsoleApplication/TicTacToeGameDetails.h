#pragma once
#include <iostream>

void clearBord(unsigned int boardSize, char board[]);

bool isNotCorrectMove(int fieldNumber, unsigned int boardSize, char fieldInBoard);

void drawBoard(unsigned int boardSize, char board[]);
