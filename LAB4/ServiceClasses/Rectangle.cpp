#include "Rectangle.h"

Rectangle::Rectangle()
{

}
Rectangle::Rectangle(double width, double length, double x, double y)
{
	this->SetWidth(width);
	this->SetLength(length);
	this->SetCenter(x, y);
}

void Rectangle::SetWidth(double width)
{
	DoubleValidator::AssertPositiveValue(width);
	_width = width;
}

void Rectangle::SetLength(double length)
{
	DoubleValidator::AssertPositiveValue(length);
	_length = length;
}

void Rectangle::SetCenter(double x, double y)
{
	_center = Point(x, y);
}

double Rectangle::GetWidth()
{
	return _width;
}

double Rectangle::GetLength()
{
	return _length;
}

Point Rectangle::GetCenter()
{
	return _center;
}