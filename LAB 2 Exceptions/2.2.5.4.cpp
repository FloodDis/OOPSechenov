#include "2.2.5.4.h"

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
{
	Rectangle temp = rectangle1;
	rectangle1.Color = rectangle2.Color;
	rectangle1.Length = rectangle2.Length;
	rectangle1.Width = rectangle2.Width;

	rectangle2.Color = temp.Color;
	rectangle2.Length = temp.Length;
	rectangle2.Width = temp.Width;
}

void DemoExchange()
{
	Rectangle rectangle1;
	Rectangle rectangle2;

	rectangle1.Color = "Red";
	rectangle1.Length = 12;
	rectangle1.Width = 5;

	rectangle2.Color = "Blue";
	rectangle2.Length = 6;
	rectangle2.Width = 3;

	cout << "rectangle1:\n";
	WriteRectangle(rectangle1);
	cout << "\nrectangle2:\n";
	WriteRectangle(rectangle2);
	Exchange(rectangle1, rectangle2);
	cout << "\nrectangle1:\n";
	WriteRectangle(rectangle1);
	cout << "\nrectangle2:\n";
	WriteRectangle(rectangle2);
}