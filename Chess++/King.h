#pragma once
#include "Piece.h"
class King :
	public Piece
{
public:
	King(int x, int y, Alliance alliance);
	~King();
	std::set<Location> calculateLegalMoves(Board board) override;
};

