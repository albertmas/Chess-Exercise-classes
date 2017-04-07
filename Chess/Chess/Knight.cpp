#include "Knight.h"
#include <math.h>



Knight::Knight(bool is_white, int prow, char pcolumn)
	:Piece(is_white, prow, pcolumn)
{}


Knight::~Knight()
{}

bool Knight::checkMovement(int prow, char pcolumn)
{
	if ((abs(_row - prow) == 3 && abs((int)(_column - pcolumn)) == 1)
		|| (abs(_row - prow) == 1 && abs((int)(_column - pcolumn)) == 3))
	{
		return true;
	}
	else
		return false;
}