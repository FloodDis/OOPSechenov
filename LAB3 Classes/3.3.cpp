#include "3.3.h"

Point* MakePoint(double x, double y)
{
	Point* newPoint = new Point;
	newPoint->X = x;
	newPoint->Y = y;
	return newPoint;
}

void SetX(Point*& point, double x)
{
	point->X = x;
}

void SetY(Point*& point, double y)
{
	point->Y = y;
}

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
	if (x < 0 || y < 0)
	{
		exception error;
		throw error;
	}
	rectangle.Center = MakePoint(x, y);
}

void DemoRectangleWithPoint()
{
	srand(time(nullptr));
	Rectangle* array = new Rectangle[5];
	bool tryAgain = true;
	for (int i = 0; i < 5; i++)
	{
		int width = rand() % 100;
		SetWidth(array[i], width);
		int length = rand() % 100;
		SetLength(array[i], length);
		int x = rand() % 100;
		int y = rand() % 100;
		SetCenter(array[i], x, y);
		tryAgain = false;
	}
	for (int i = 0; i < 5; i++)
	{
		WriteRectangleWithPoint(array[i]);
	}
	delete[] array;
}

void WriteRectangleWithPoint(Rectangle& rectangle)
{
	cout << "X = " << rectangle.Center->X
		<< "; Y = " << rectangle.Center->Y
		<< "; Length = " << rectangle.Length
		<< "; Width = " << rectangle.Width << "\n";
}