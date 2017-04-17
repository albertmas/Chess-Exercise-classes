#pragma once
#include "Piece.h"
class Queen : public Piece
{
public:
	
	Queen(bool is_white, int prow, char pcolumn);

	virtual ~Queen();

	virtual bool checkMovement(int prow, char pcolumn);
};

