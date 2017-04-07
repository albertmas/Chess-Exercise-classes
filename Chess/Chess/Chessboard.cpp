#include "Chessboard.h"
#include "Pawn.h"
#include "Bishop.h"
#include "Knight.h"

Chessboard::Chessboard()
{
	//Pawns
	for (int i = 0; i < 8; i++)
	{
		_pieces[i] = new Pawn(1, ((char)i) + 'a', true);
		_pieces[i + 8] = new Pawn(7, ((char)i) + 'a', false);
	}
	//Bieshops
	_pieces[16] = new Bishop(1, 'c', true);
	_pieces[17] = new Bishop(1, 'f', true);
	_pieces[18] = new Bishop(8, 'c', true);
	_pieces[19] = new Bishop(8, 'f', true);
}


Chessboard::~Chessboard()
{
}

void Chessboard::movePiece(bool is_white, int prow, char pcolumn, int pNewRow, char pNewColumn)
{
	for (int i = 0; i < 20; i++)
	{
		if (_pieces[i]->isWhite() == is_white &&
			_pieces[i]->getRow() == prow &&
			_pieces[i]->getColumn() == pcolumn)
		{
			if (_pieces[i]->checkMovement(pNewRow, pNewColumn))
			{
				_pieces[i]->setPosition(pNewRow, pNewColumn);
			}
			break;
		}
	}
}