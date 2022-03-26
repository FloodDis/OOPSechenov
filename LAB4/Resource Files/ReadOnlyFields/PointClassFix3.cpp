#include "../../Header Files/ReadOnlyFields/PointClassFix3.h"

PointClassFix3::PointClassFix3()
{

}

PointClassFix3::PointClassFix3(double x, double y)
{
	_x = x;
	_y = y;
}

double PointClassFix3::GetX()
{
	return _x;
}

double PointClassFix3::GetY()
{
	return _y;
}
