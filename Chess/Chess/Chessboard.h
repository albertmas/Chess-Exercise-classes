#pragma once

#include "Piece.h"

class Chessboard
{
public:

	Chessboard();

	~Chessboard();

	void Start();

	void printBoard();

	void movePiece(bool is_white, int prow, char pcolumn, int pNewRow, char pNewColumn);

private:

	Piece* _pieces[32];

};

