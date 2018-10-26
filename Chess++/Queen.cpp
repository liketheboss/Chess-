#include "Queen.h"



Queen::Queen(int x, int y, Alliance alliance) : Piece(x, y, alliance)
{
}


Queen::~Queen()
{
}

std::set<Location> Queen::calculateLegalMoves(Board board)
{
	return std::set<Location>();
}
