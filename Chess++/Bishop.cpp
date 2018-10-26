#include "Bishop.h"



Bishop::Bishop(int x, int y, Alliance alliance): Piece(x, y, alliance)
{
}


Bishop::~Bishop()
{
}

std::set<Location> Bishop::calculateLegalMoves(Board board)
{
	std::set<Location> moves;

	for (int i = 1; i < COLUMNS; i++)
	{
		moves.insert({ ((location.x + i) % COLUMNS + COLUMNS) % COLUMNS, ((location.y + i) % ROWS + ROWS) % ROWS });
		moves.insert({ ((location.x + i) % COLUMNS + COLUMNS) % COLUMNS, ((location.y - i) % ROWS + ROWS) % ROWS });
	}

	return moves;
}
