#include <iostream>
#include "Piece.h"
#include "Pawn.h"
#include "Bishop.h"
#include "Knight.h"

int main()
{
	Piece* piece1 = new Bishop(true, 4, 'a');
	Piece* piece2 = new Knight(true, 4, 'c');

	if (piece1->checkMovement(6, 'c'))
		std::cout << "Valid" << std::endl;
	else
		std::cout << "Not valid" << std::endl;

	if (piece2->checkMovement(1, 'b'))
		std::cout << "Valid" << std::endl;
	else
		std::cout << "Not valid" << std::endl;

	system("pause");
	return 0;
}