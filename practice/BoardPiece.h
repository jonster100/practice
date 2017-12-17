#pragma once
#include "PieceType.h"
#include "ChessColour.h"
#include "Coordinates.h"
#include <fstream>
class BoardPiece
{
public:
	BoardPiece() = default;
	BoardPiece(PieceType type, ChessColour col,Coordinates coord);
	void setCoordinates(Coordinates coord);
	Coordinates getCoordinates();
	ChessColour getPieceColour();
	PieceType getPieceType();
	~BoardPiece();
private:
	PieceType pieceType;
	ChessColour pieceColour;
	Coordinates pieceCoordinates;
};

