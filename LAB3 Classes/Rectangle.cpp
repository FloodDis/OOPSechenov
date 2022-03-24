#include "Rectangle.h"

Rectangle* MakeRectangle(double width, double length, double x, double y)
{
	if (width < 0 || length < 0)
	{
		exception error;
		throw error;
	}
	Rectangle* rectangle = new Rectangle;
	rectangle->Length = length;
	rectangle->Width = width;
	rectangle->Center = MakePoint(x, y);
	return rectangle;
}

void SetWidth(Rectangle& rectangle, double width)
{
	if (width < 0)
	{
		exception error;
		throw error;
	}
	rectangle.Width = width;
}

void SetLength(Rectangle& rectangle, double length)
{
	if (length < 0)
	{
		exception error;
		throw error;
	}
	rectangle.Length = length;
}

void SetCenter(Rectangle& rectangle, double x, double y)
{
	rectangle.Center = MakePoint(x, y);
}