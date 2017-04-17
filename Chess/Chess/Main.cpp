#include <iostream>
#include "Piece.h"
#include "Pawn.h"
#include "Bishop.h"
#include "Knight.h"
#include "Rook.h"
#include "Queen.h"
#include "King.h"

int main()
{
	Piece* piece1 = new Pawn(true, 4, 'c');
	Piece* piece2 = new Bishop(true, 4, 'a');
	Piece* piece3 = new Knight(true, 4, 'c');
	Piece* piece4 = new Rook(true, 4, 'c');
	Piece* piece5 = new Queen(true, 4, 'c');
	Piece* piece6 = new King(true, 4, 'c');

	std::cout << "Testing Pawn: ";
	if (piece1->checkMovement(5, 'c'))
		std::cout << "Valid" << std::endl;
	else
		std::cout << "Not valid" << std::endl;

	std::cout << "Testing Bishop: ";
	if (piece2->checkMovement(6, 'c'))
		std::cout << "Valid" << std::endl;
	else
		std::cout << "Not valid" << std::endl;

	std::cout << "Testing Knight: ";
	if (piece3->checkMovement(1, 'b'))
		std::cout << "Valid" << std::endl;
	else
		std::cout << "Not valid" << std::endl;

	std::cout << "Testing Rook: ";
	if (piece4->checkMovement(4, 'e'))
		std::cout << "Valid" << std::endl;
	else
		std::cout << "Not valid" << std::endl;

	std::cout << "Testing Queen: ";
	if (piece5->checkMovement(4, 'e'))
		std::cout << "Valid" << std::endl;
	else
		std::cout << "Not valid" << std::endl;

	std::cout << "Testing King: ";
	if (piece6->checkMovement(4, 'f'))
		std::cout << "Valid" << std::endl;
	else
		std::cout << "Not valid" << std::endl;

	system("pause");
	return 0;
}