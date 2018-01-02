#include "stdafx.h"
#include "Board.h"

using namespace std;
Board::Board()
{
	setupBoard();
	readBoardFile();
	printBoard();
}

void Board::setupBoard() {
	int x;
	int y;
	for (x = 0; x < 8; x++) {
		for (y = 0; y < 8; y++) {
			board[x][y] = nullptr;
		}
	}
}

void Board::createBoardFile() {
	
}

void Board::readBoardFile() {
	int i = 1;
	string temp="";
	string pieceType="";
	string pieceColour="";
	string xCoord="";
	string yCoord="";
	bool newChessPiece = false;
	ifstream file("setupChessPieces.txt");
	if (file.is_open())
	{
		while (getline(file, temp, ':'))
		{
				(i == 1) ? pieceType = temp : (i == 2) ? pieceColour = temp : (i == 3) ? xCoord = temp : yCoord = temp;
				i += 1;
				(i==5) ? newChessPiece =true : newChessPiece =false;
				if (newChessPiece == true) {
					int x = 0;
					int y = 0;
					stringstream intConvX(xCoord);
					stringstream intConvY(yCoord);
					intConvX >> x;
					intConvY >> y;
					Coordinates tempCoord(x,y);
					BoardPiece tempPiece(convertPieceTypeValue(pieceType), convertColourValue(pieceColour),tempCoord);
					boardPieces.push_back(tempPiece);
					board[x][y] = &tempPiece;
					cout << getPieceCharacter(tempPiece.getPieceType()) << "-" << tempPiece.getCoordinates().getXCoordinate() << "/" << tempPiece.getCoordinates().getYCoordinate() << endl;
					cout << "=" << xCoord << "/" << yCoord << endl;
					i = 1;
					newChessPiece = false;
				}
		}
		file.close();
	}
	else cout << "Unable to open file";
	//while (true);
}

void Board::printBoard() {
	int x;
	int y;
	for (x = 0; x < 8; x++) {
		cout << "" << endl;
		for (y = 0; y < 8;y++) {
			if (board[x][y] != nullptr) {
				cout << getPieceCharacter(board[x][y]->getPieceType());
			}
			else {
				cout << "X";
			}
		}
	}
	while (true);
}

char Board::getPieceCharacter(PieceType pType) {
	return (pType == PAWN) ? 'P' : (pType == KNIGHT) ? 'N' : (pType == BISHOP) ? 'B' : (pType == ROOK) ? 'R' : (pType == QUEEN) ? 'Q' : (pType == KING) ? 'K' : 'X';
}


PieceType Board::convertPieceTypeValue(string tempPiece) {
	return (tempPiece == "PAWN") ? PAWN : (tempPiece == "KNIGHT") ? KNIGHT : (tempPiece == "BISHOP") ? BISHOP : (tempPiece == "ROOK") ? ROOK : (tempPiece == "QUEEN") ? QUEEN :(tempPiece=="KING")? KING:NOTYPE;
}

ChessColour Board::convertColourValue(string tempCol) {
	return (tempCol == "BLACK") ? BLACK : WHITE;
}

void Board::setPiece(int x, int y, ChessColour col, PieceType type) {
	Coordinates coord(x, y);
	BoardPiece piece(type,col,coord);
	board[x][y]= &piece;
}

void Board::movePiece(BoardPiece piece) {}

Board::~Board()
{
}
