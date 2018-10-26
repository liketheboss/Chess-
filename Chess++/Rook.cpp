#include "Rook.h"



Rook::Rook(int x, int y, Alliance alliance) : Piece(x, y, alliance)
{
}


Rook::~Rook()
{
}

std::set<Location> Rook::calculateLegalMoves(Board board)
{
	std::set<Location> moves;

	for (int i = 0; i < COLUMNS; i++)
	{
		if (i != location.x)
		{
			moves.insert({ i, location.y });
		}
		if (i != location.y)
		{
			moves.insert({ location.x, i });
		}
	}

	return moves;
}
