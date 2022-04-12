#include "../../../Header Files/Classes/GeometryClasses/RectangleClass.h"

RectangleClass::RectangleClass()
{

}

RectangleClass::RectangleClass(double width, 
	double length, double x, double y)
{
	SetWidth(width);
	SetLength(length);
	_center->SetX(x);
	_center->SetY(y);
}

void RectangleClass::SetWidth(double width)
{
	if (width < 0)
	{
		throw exception("Width must be positive\n");
	}
	_width = width;
}

void RectangleClass::SetLength(double length)
{
	if (length < 0)
	{
		throw exception("Length must be positive\n");
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