#pragma once
#include "Piece.h"
class Rook : public Piece
{
public:

	Rook(bool is_white, int prow, char pcolumn);

	virtual ~Rook();

	virtual bool checkMovement(int prow, char pcolumn);
};

