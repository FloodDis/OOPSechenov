#include "../../Header Files/ClosedMethodsOfTheClass/PointClassFix2.h"

PointClassFix2::PointClassFix2(double x, double y)
{
	_x = x;
	_y = y;
}

PointClassFix2::PointClassFix2()
{

}

void PointClassFix2::SetX(double x)
{
	_x = x;
}

void PointClassFix2::SetY(double y)
{
	_y = y;
}

double PointClassFix2::GetX()
{
	return _x;
}

double PointClassFix2::GetY()
{
	return _y;
}