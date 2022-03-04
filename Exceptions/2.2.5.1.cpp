#include "2.2.5.1.h"

void WriteRectangle(Rectangle& rectangle)
{
	cout << "Rectangle:\n";
	cout << "Color: " << rectangle.Color << "\n";
	cout << "Length: " << rectangle.Length << "\n";
	cout << "Width: " << rectangle.Width << "\n";
}

void DemoWriteRectangle()
{
	Rectangle testRectangle;
	testRectangle.Color = "Red";
	testRectangle.Length = 12;
	testRectangle.Width = 15;
	WriteRectangle(testRectangle);
}