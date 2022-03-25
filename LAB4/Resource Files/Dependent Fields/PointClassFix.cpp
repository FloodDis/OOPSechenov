#include "../../Header Files/DependentFields/PointClassFix.h"

PointClassFix::PointClassFix(double x, double y)
{
	_x = x;
	_y = y;
}

PointClassFix::PointClassFix()
{

}

void PointClassFix::SetX(double x)
{
	_x = x;
}

void PointClassFix::SetY(double y)
{
	_y = y;
}

double PointClassFix::GetX()
{
	return _x;
}

double PointClassFix::GetY()
{
	return _y;
}