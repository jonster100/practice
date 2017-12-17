#include "stdafx.h"
#include "Board.h"

using namespace std;
Board::Board()
{

}

void Board::readBoardFile() {
	string temp;
	ifstream file("file.txt");
	if (file.is_open())
	{
		while (getline(file, temp))
		{
			cout << temp << '\n';
		}
		file.close();
	}

	else cout << "Unable to open file";
}

void Board::setPiece(int x, int y, ChessColour col, PieceType type) {
	Coordinates coord(x, y);
	BoardPiece piece(type,col,coord);
	board[x][y]=piece;
}

void Board::movePiece(BoardPiece piece) {}

Board::~Board()
{
}
