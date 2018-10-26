#include "Piece.h"



Piece::Piece(int x, int y, Alliance alliance)  // NOLINT(cppcoreguidelines-pro-type-member-init)
{
	this->location = {};
	setX(x);
	setY(y);
	setAlliance(alliance);
}


Piece::~Piece()
{
}

void Piece::move(Location* newLocation)
{
	setX(newLocation->x);
	setY(newLocation->y);
}

Alliance Piece::getAlliance()
{
	return alliance;
}

int Piece::getX()
{
	return location.x;
}

int Piece::getY()
{
	return location.y;
}

void Piece::setAlliance(Alliance alliance)
{
	this->alliance = alliance;
}

void Piece::setX(int x)
{
	if (x > COLUMNS - 1 || x < 0)
	{
		throw "Attempted to set invalid x position";
	}
	this->location.x = x;
}

void Piece::setY(int y)
{
	if (y > ROWS - 1 || y < 0)
	{
		throw "Attempted to set invalid y position";
	}
	this->location.y = y;
}
