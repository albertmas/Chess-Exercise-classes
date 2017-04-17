#include "King.h"

King::King(bool is_White, int prow, char pcolumn)
	: Piece(is_White, prow, pcolumn)
{}

King::~King()
{}

bool King::checkMovement(int prow, char pcolumn)
{
	if (prow == _row + 1)
	{
		if (pcolumn == _column + 1)
			return true;
		if (pcolumn == _column - 1)
			return true;
		if (pcolumn == _column)
			return true;
		else
			return false;
	}
	else if (prow == _row - 1)
	{
		if (pcolumn == _column + 1)
			return true;
		if (pcolumn == _column - 1)
			return true;
		if (pcolumn == _column)
			return true;
		else
			return false;
	}
	else if (prow == _row)
	{
		if (pcolumn == _column + 1)
			return true;
		if (pcolumn == _column - 1)
			return true;
		if (pcolumn == _column)
			return true;
		else
			return false;
	}
	else
		return false;

	/*if (abs(prow - _row) == 1)
	{
		if ((abs(pcolumn - _column) == 1)
			|| (pcolumn == _column))
		{
			return true;
		}
		else
			return false;
	}
	
	else if (prow == _row)
	{
		if (abs(pcolumn - _column) == 1)
		{
			return true;
		}
	}

	else
		return false;*/
}