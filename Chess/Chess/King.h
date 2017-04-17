#pragma once
#include "Piece.h"
class King : public Piece
{
public:
	
	King(bool is_white, int prow, char pcolumn);

	virtual ~King();

	virtual bool checkMovement(int prow, char pcolumn);
};

