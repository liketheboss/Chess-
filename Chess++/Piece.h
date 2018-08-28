#pragma once
#include "Board.h"
#include "Piece.h"
#include "Location.h"
#include <set>

enum Alliance {
	WHITE = 0,
	BLACK = 1
};

class Piece
{
	protected:
		Alliance alliance;

		Location location;

	public:
		Piece(int x, int y, Alliance alliance);
		virtual ~Piece();

		virtual std::set<Location> calculateLegalMoves(Board board) = 0;
		void move(Location* newLocation);

		Alliance getAlliance();
		int getX();
		int getY();

	private:
		void setAlliance(Alliance alliance);
		void setX(int x);
		void setY(int y);
};

