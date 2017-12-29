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

PieceType BoardPiece::getPieceType() {
	return pieceType;
}

ChessColour BoardPiece::getPieceColour() {
	return pieceColour;
}

void BoardPiece::setPieceColour(ChessColour col) {
	pieceColour = col;
}

void BoardPiece::setPieceType(PieceType type) {
	pieceType = type;
}

BoardPiece::~BoardPiece()
{
}
