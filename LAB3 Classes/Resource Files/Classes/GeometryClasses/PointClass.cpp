#include "../../../Header Files/Classes/GeometryClasses/PointClass.h"

PointClass::PointClass(double x, double y)
{
	_x = x;
	_y = y;
}

PointClass::PointClass()
{

}

void PointClass::SetX(double x)
{
	_x = x;
}

void PointClass::SetY(double y)
{
	_y = y;
}

double PointClass::GetX()
{
	return _x;
}

double PointClass::GetY()
{
	return _y;
}