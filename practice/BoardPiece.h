#pragma once
#include "PieceType.h"
#include "ChessColour.h"
#include "Coordinates.h"
#include <fstream>
class BoardPiece
{
public:
	BoardPiece(PieceType type, ChessColour col, Coordinates coord);
	BoardPiece() = default;
	
	Coordinates getCoordinates();
	ChessColour getPieceColour();
	PieceType getPieceType();
	void setPieceColour(ChessColour col);
	void setPieceType(PieceType type);
	~BoardPiece();
private:
	PieceType pieceType;
	ChessColour pieceColour;
	Coordinates pieceCoordinates;
};

