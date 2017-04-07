#pragma once
#include "Piece.h"
class Knight : public Piece
{
public:
	Knight(bool is_white, int prow, char pcolumn);

	virtual ~Knight();

	virtual bool checkMovement(int prow, char pcolumn);
};

