#include "../../Header Files/Classes/RectangleClass.h"

RectangleClass::RectangleClass()
{

}

RectangleClass::RectangleClass(double width, 
	double length, double x, double y)
{
	_width = width;
	_length = length;
	_center->SetX(x);
	_center->SetY(y);
}

void RectangleClass::SetWidth(double width)
{
	if (width < 0)
	{
		exception error;
		throw error;
	}
	_width = width;
}

void RectangleClass::SetLength(double length)
{
	if (length < 0)
	{
		exception error;
		throw error;
	}
	_length = length;
}

void RectangleClass::SetCenter(double x, double y)
{
	_center->SetX(x);
	_center->SetY(y);
}

double RectangleClass::GetWidth()
{
	return _width;
}

double RectangleClass::GetLength()
{
	return _length;
}

PointClass* RectangleClass::GetCenter()
{
	return _center;
}