#include "Knight.h"
#include "Location.h"


Knight::Knight(int x, int y, Alliance alliance) : Piece(x, y, alliance)
{
}


Knight::~Knight()
{
}

std::set<Location> Knight::calculateLegalMoves(Board board)
{
	// Knights move in L's at +-2 and +-1 for each value
	Location candidates[8] = {
		{ location.x - 2, location.y - 1},
		{ location.x - 2, location.y + 1},
		{ location.x - 1, location.y - 2},
		{ location.x - 1, location.y + 2},
		{ location.x + 1, location.y - 2},
		{ location.x + 1, location.y + 2},
		{ location.x + 2, location.y - 1},
		{ location.x + 2, location.y + 1}
	};

	std::set<Location> moves;
	for (auto candidate : candidates)
	{
		if (!(candidate.x < 0 || candidate.x > COLUMNS - 1 || candidate.y < 0 || candidate.y > ROWS - 1))
		{
			moves.insert(candidate);
		}
	}

	return moves;
}

