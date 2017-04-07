#include "Bishop.h"
#include <math.h>

Bishop::Bishop(bool is_white, int prow, char pcolumn)
	:Piece(is_white, prow, pcolumn)
{}

Bishop::~Bishop()
{}

bool Bishop::checkMovement(int prow, char pcolumn)
{
	if (abs(_row - prow) == abs((int)(_column - pcolumn)))
		return true;
	else
		return false;
}