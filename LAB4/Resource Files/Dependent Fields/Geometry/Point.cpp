#include "../../../Header Files/DependentFields/Geometry/Point.h"

Point::Point()
{

}

Point::Point(double x, double y)
{
	_x = x;
	_y = y;
}

double Point::GetX()
{
	return _x;
}

double Point::GetY()
{
	return _y;
}
