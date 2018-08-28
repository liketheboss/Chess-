#pragma once
#include "Board.h"

struct Location
{
	int x;
	int y;

	bool operator<(const Location& o) const
	{
		return (y * COLUMNS + x) < (o.y * COLUMNS + o.x);
	}
};