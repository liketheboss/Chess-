#include "King.h"



King::King(int x, int y, Alliance alliance) : Piece(x, y, alliance)
{
}


King::~King()
{
}

std::set<Location> King::calculateLegalMoves(Board board)
{
	return std::set<Location>();
}
