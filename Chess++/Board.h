#pragma once
#include <cstdint>
#include "PieceType.h"

const int ROWS = 8;
const int COLUMNS = 8;

class Board
{
	private:
		uint64_t pieceBoard[PieceCount]{};

	public:
		Board();
		Board(const uint64_t pieceBoard[PieceCount]);
		~Board();
		uint64_t getPieces(PieceType pt);
};

