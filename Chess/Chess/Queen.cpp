#include "Queen.h"

Queen::Queen(bool is_white, int prow, char pcolumn)
	:Piece(is_white, prow, pcolumn)
{}

Queen::~Queen()
{
}

bool Queen::checkMovement(int prow, char pcolumn)
{
	if ((_row != prow)
		|| (_column != pcolumn))
	{
		return true;
	}
	else
		return false;
}