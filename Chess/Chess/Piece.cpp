#include "Piece.h"



Piece::Piece(bool is_white, int prow, char pcolumn)
{
	_isWhite = is_white;
	_row = prow;
	_column = pcolumn;
}

Piece::~Piece()
{
}

int Piece::getRow()const
{
	return _row;
}
char Piece::getColumn()const
{
	return _column;
}
bool Piece::isWhite()const
{
	return _isWhite;
}
void Piece::setPosition(int prow, char pcolumn)
{
	_row = prow;
	_column = pcolumn;
}