#pragma once
#include "Piece.h"
class Bishop :
	public Piece
{
public:
	Bishop(bool is_white, int prow, char pcolumn);
	
	virtual ~Bishop();

	virtual bool checkMovement(int prow, char pcolumn);
};

