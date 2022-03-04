#include "2.2.5.2.h"

void ReadRectangle(Rectangle& rectangle)
{
	cout << "Enter length of rectangle: ";
	cin >> rectangle.Length;
	cout << "\nEnter width of rectangle: ";
	cin >> rectangle.Width;
	cout << "\n";
	cout << "Length: " << rectangle.Length << "\n";
	cout << "Width: " << rectangle.Width << "\n";
}

void DemoReadRectangle()
{
	Rectangle rectangle;
	ReadRectangle(rectangle);
}