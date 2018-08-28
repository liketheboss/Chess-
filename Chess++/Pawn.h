#pragma once
#include "Piece.h"
class Pawn :
	public Piece
{
	public:
		Pawn(int x, int y, Alliance alliance);
		~Pawn();
		std::set<Location> calculateLegalMoves(Board board) override;
};

