#include "BoardUtils.h"
#include "Location.h"
#include "Board.h"

Location calculateLocation(int fullLocation)
{
	Location calculatedLocation{};
	calculatedLocation.x = fullLocation % COLUMNS;
	calculatedLocation.y = fullLocation / COLUMNS;

	return calculatedLocation;
}
