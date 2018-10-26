#pragma once
#include "Piece.h"
class Queen :
	public Piece
{
public:
	Queen(int x, int y, Alliance alliance);
	~Queen();
	std::set<Location> calculateLegalMoves(Board board) override;
};

