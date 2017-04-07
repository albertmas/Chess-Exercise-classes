#include "Piece.h"

class Pawn : public Piece
{
public:

	Pawn(bool is_white, int prow, char pcolumn);

	virtual ~Pawn();

	virtual bool checkMovement(int prow, char pcolumn);
};

