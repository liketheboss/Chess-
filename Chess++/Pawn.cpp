#include "Pawn.h"



Pawn::Pawn(int x, int y, Alliance alliance) : Piece(x, y, alliance)
{
}


Pawn::~Pawn()
{
}

std::set<Location> Pawn::calculateLegalMoves(Board board)
{
	return std::set<Location>();
}
