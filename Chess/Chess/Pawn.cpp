#include "Pawn.h"

Pawn::Pawn(bool is_white, int prow, char pcolumn)
	:Piece(is_white, prow, pcolumn)
{}

Pawn::~Pawn()
{}

bool Pawn::checkMovement(int prow, char pcolumn)
{
	if (_isWhite)
	{
		return (_row == (prow - 1)) &&
			(_column = pcolumn);
	}
	else
	{
		return (_row == (prow + 1)) &&
			(_column = pcolumn);
	}
}