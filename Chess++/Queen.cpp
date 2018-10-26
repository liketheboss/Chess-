#include "Queen.h"



Queen::Queen(int x, int y, Alliance alliance) : Piece(x, y, alliance)
{
}


Queen::~Queen()
{
}

std::set<Location> Queen::calculateLegalMoves(Board board)
{
	std::set<Location> moves;

	// Rook Movement
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

	// Bishop Movement
	for (int i = 1; i < COLUMNS; i++)
	{
		moves.insert({ ((location.x + i) % COLUMNS + COLUMNS) % COLUMNS, ((location.y + i) % ROWS + ROWS) % ROWS });
		moves.insert({ ((location.x + i) % COLUMNS + COLUMNS) % COLUMNS, ((location.y - i) % ROWS + ROWS) % ROWS });
	}

	return moves;
}
