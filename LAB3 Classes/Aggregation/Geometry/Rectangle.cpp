#include "Rectangle.h"

Rectangle* MakeRectangle(double width, double length, double x, double y)
{
	if (width < 0 || length < 0)
	{
		// TODO: зачем в две строки? Исправить ВЕЗДЕ +
		throw exception("Width and length must be positive\n");
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
		throw exception("Width must be positive\n");
	}
	rectangle.Width = width;
}

void SetLength(Rectangle& rectangle, double length)
{
	if (length < 0)
	{
		throw exception("Length must be positive\n");
	}
	rectangle.Length = length;
}

// TODO: утечка памяти
void SetCenter(Rectangle& rectangle, double x, double y)
{
	rectangle.Center = MakePoint(x, y);
}