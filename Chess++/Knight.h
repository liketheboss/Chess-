#pragma once
#include "Piece.h"
class Knight :
	public Piece
{
	public:
		Knight(int x, int y, Alliance alliance);
		~Knight();

	std::set<Location> calculateLegalMoves(Board board) override;
};

