#pragma once
#include "Coordinates.h"
#include "BoardPiece.h"
#include "PieceType.h"
#include "ChessColour.h"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
class Board
{
public:
	Board();
	void createBoardFile();
	void readBoardFile();
	void setPiece(int x, int y, ChessColour col, PieceType type);
	~Board();
private:
	BoardPiece *board[8][8];
	std::vector<BoardPiece> boardPieces; 
	void setupBoard();
	void printBoard();
	char getPieceCharacter(PieceType pType);
	PieceType convertPieceTypeValue(std::string tempPiece);
	ChessColour convertColourValue(std::string tempCol);
	void movePiece(BoardPiece piece);
};

