#pragma once
#include "Piece.h"
class Rook :
	public Piece
{
	public:
		Rook(int x, int y, Alliance alliance);
		~Rook();
		std::set<Location> calculateLegalMoves(Board board) override;
};

