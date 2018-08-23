#pragma once
#include <stdlib.h>
#include "Board.h"
#include "Piece.h"

enum Alliance {
	WHITE = 0,
	BLACK = 1
};

class Piece
{
	Alliance pieceAlliance;
	int x;
	int y;

	public:
		Piece();
		~Piece();

		virtual bool** calculateLegalMoves(Board board, int x, int y, Alliance alliance) = 0;
};

