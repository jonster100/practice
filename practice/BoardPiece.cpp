#include "stdafx.h"
#include "BoardPiece.h"


BoardPiece::BoardPiece(PieceType type,ChessColour col,Coordinates coord)
{
	pieceType = type;
	pieceColour = col;
	pieceCoordinates = coord;
}

Coordinates BoardPiece::getCoordinates() {
	return pieceCoordinates;
}

void BoardPiece::setCoordinates(Coordinates coord) {
	pieceCoordinates = coord;
}

PieceType BoardPiece::getPieceType() {
	return pieceType;
}

ChessColour BoardPiece::getPieceColour() {
	return pieceColour;
}

BoardPiece::~BoardPiece()
{
}
