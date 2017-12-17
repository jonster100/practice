#include "stdafx.h"
#include "BoardPiece.h"


BoardPiece::BoardPiece(PieceType type,ChessColour col,Coordinates coord)
{
	piece_type = type;
	piece_colour = col;
	piece_coordinates = coord;
}

Coordinates BoardPiece::getCoordinates() {
	return piece_coordinates;
}

void BoardPiece::setCoordinates(Coordinates coord) {
	piece_coordinates = coord;
}

PieceType BoardPiece::getPieceType() {
	return piece_type;
}

ChessColour BoardPiece::getPieceColour() {
	return piece_colour;
}

BoardPiece::~BoardPiece()
{
}
