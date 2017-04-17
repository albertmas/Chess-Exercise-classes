#include "Rook.h"

Rook::Rook(bool is_white, int prow, char pcolumn)
	:Piece(is_white, prow, pcolumn)
{}

Rook::~Rook()
{}

bool Rook::checkMovement(int prow, char pcolumn)
{
	if ((_row != prow && _column == pcolumn)
		|| (_row == prow && _column != pcolumn))
	{
		return true;
	}
	else
		return false;
}