#pragma once
#include "Coordinates.h"
#include "BoardPiece.h"
#include "PieceType.h"
#include "ChessColour.h"
#include <vector>
#include <iostream>
#include <string>
class Board
{
public:
	Board();
	void readBoardFile();
	void setPiece(int x, int y, ChessColour col, PieceType type);
	~Board();
private:
	BoardPiece board[8][8];
	std::vector<BoardPiece> board_pieces;
	void movePiece(BoardPiece piece);
};

