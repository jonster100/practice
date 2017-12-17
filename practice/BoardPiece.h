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
	PieceType piece_type;
	ChessColour piece_colour;
	Coordinates piece_coordinates;
};

