#include "Location.h"

inline bool operator<(const Location& left, const Location& right)
{
	return (left.y * COLUMNS + left.x) < (right.y * COLUMNS + right.x);
}