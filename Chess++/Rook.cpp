#include "Rook.h"



Rook::Rook(int x, int y, Alliance alliance) : Piece(x, y, alliance)
{
}


Rook::~Rook()
{
}

std::set<Location> Rook::calculateLegalMoves(Board board)
{
	return std::set<Location>();
}
