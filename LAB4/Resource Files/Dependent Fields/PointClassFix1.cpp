#include "../../Header Files/DependentFields/PointClassFix1.h"

PointClassFix1::PointClassFix1(double x, double y)
{
	_x = x;
	_y = y;
}

PointClassFix1::PointClassFix1()
{

}

void PointClassFix1::SetX(double x)
{
	_x = x;
}

void PointClassFix1::SetY(double y)
{
	_y = y;
}

double PointClassFix1::GetX()
{
	return _x;
}

double PointClassFix1::GetY()
{
	return _y;
}