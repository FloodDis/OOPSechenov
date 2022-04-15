#include "../../Header Files/Structs/Rectangle.h"

void DemoRectangle()
{
	Rectangle rectangle1;
	rectangle1.Color = "Black";
	rectangle1.Length = 14;
	rectangle1.Width = 24;

	Rectangle rectangle2;
	cout << "Enter rectangle color: ";
	cin >> rectangle2.Color;
	cout << "Enter rectangle length: ";
	cin >> rectangle2.Length;
	cout << "Enter rectangle width: ";
	cin >> rectangle2.Width;
	
	WriteRectangle(rectangle2);

	cout << "Arrays of rectangles:\n";
	Rectangle rectangles[2];
	rectangles[0] = rectangle1;
	rectangles[1] = rectangle2;
	for (int i = 0; i < 2; ++i)
	{
		WriteRectangle(rectangles[i]);
	}
	cout << "\n";

	Rectangle* pointerToFirstRectangle = &rectangle1;
	pointerToFirstRectangle->Color = "White";
	pointerToFirstRectangle->Length = 127;
	pointerToFirstRectangle->Width = 31;
	WriteRectangle(*pointerToFirstRectangle);

	Rectangle* pointerToSecondRectangle = pointerToFirstRectangle;
	cout << "Adress of first pointer: " << pointerToFirstRectangle << '\n';
	cout << "Adress of second pointer: " << pointerToFirstRectangle << '\n';
}

void WriteRectangle(const Rectangle& rectangle)
{
	cout << "Rectangle has the size: " << rectangle.Length
		<< "x" << rectangle.Width << " and "
		<< rectangle.Color << " color.\n";
}

void ReadRectangle(Rectangle& rectangle)
{
	cout << "Enter the color of rectangle: ";
	cin >> rectangle.Color;
	cout << "Enter the length of rectangle: ";
	cin >> rectangle.Length;
	cout << "Enter the width of rectangle: ";
	cin >> rectangle.Width;
}

void DemoWriteAndReadRectangle()
{
	const int rectangleCount = 5;
	Rectangle rectangles[5];

	for (int i = 0; i < rectangleCount; ++i)
	{
		ReadRectangle(rectangles[i]);
	}
	for (int i = 0; i < rectangleCount; ++i)
	{
		WriteRectangle(rectangles[i]);
	}
}

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
{
	Rectangle exchangeBuffer;
	exchangeBuffer = rectangle1;
	rectangle1 = rectangle2;
	rectangle2 = exchangeBuffer;
}

int FindRectangleWithMaxLength(const Rectangle* rectangles, int count)
{
	AssertArray(count);

	int greaterLength = 0;
	for (int i = 0; i < count; ++i)
	{
		if (rectangles[greaterLength].Length < rectangles[i].Length)
		{
			greaterLength = i;
		}
	}

	return greaterLength;
}

int FindRectangleWithMaxArea(const Rectangle* rectangles, int count)
{
	AssertArray(count);

	int greaterArea = 0;
	for (int i = 0; i < count; ++i)
	{
		if (rectangles[greaterArea].Length * rectangles[greaterArea].Width
			< rectangles[i].Length * rectangles[i].Width)
		{
			greaterArea = i;
		}
	}

	return greaterArea;
}

void AssertArray(int count)
{
	if (count <= 0)
	{
		throw exception("Exception: Negative or zero array length");
	}
}