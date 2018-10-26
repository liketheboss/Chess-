#include "Bishop.h"



Bishop::Bishop(int x, int y, Alliance alliance): Piece(x, y, alliance)
{
}


Bishop::~Bishop()
{
}

std::set<Location> Bishop::calculateLegalMoves(Board board)
{
	return std::set<Location>();
}
