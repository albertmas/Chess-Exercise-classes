#include "Chessboard.h"
#include "Pawn.h"
#include "Bishop.h"
#include "Knight.h"
#include "Rook.h"
#include "Queen.h"
#include "King.h"

Chessboard::Chessboard()
{
	//Pawns
	for (int i = 0; i < 8; i++)
	{
		_pieces[i] = new Pawn(true, 2, ((char)i) + 'a');
		_pieces[i + 8] = new Pawn(false, 7, ((char)i) + 'a');
	}

	//Bieshops
	_pieces[16] = new Bishop(true, 1, 'c');
	_pieces[17] = new Bishop(true, 1, 'f');
	_pieces[18] = new Bishop(false, 8, 'c');
	_pieces[19] = new Bishop(false, 8, 'f');

	//Knights
	_pieces[20] = new Knight(true, 1, 'b');
	_pieces[21] = new Knight(true, 1, 'g');
	_pieces[22] = new Knight(false, 8, 'b');
	_pieces[23] = new Knight(false, 8, 'g');

	//Rooks
	_pieces[24] = new Rook(true, 1, 'a');
	_pieces[25] = new Rook(true, 1, 'h');
	_pieces[26] = new Rook(false, 8, 'a');
	_pieces[27] = new Rook(false, 8, 'h');

	//Queens
	_pieces[28] = new Queen(true, 1, 'd');
	_pieces[29] = new Queen(false, 8, 'd');
	
	//Kings
	_pieces[30] = new King(true, 1, 'e');
	_pieces[31] = new King(false, 8, 'e');
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