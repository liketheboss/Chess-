#pragma once
#include "Piece.h"
class Bishop :
	public Piece
{
	public:
		Bishop(int x, int y, Alliance alliance);
		~Bishop();
		std::set<Location> calculateLegalMoves(Board board) override;
};

