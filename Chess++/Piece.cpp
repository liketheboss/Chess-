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
	location = *newLocation;
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
	this->location.x = x;
}

void Piece::setY(int y)
{
	this->location.y = y;
}
