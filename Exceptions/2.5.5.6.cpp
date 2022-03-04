#include "2.5.5.6.h"

void FindMaxRectangle(Rectangle* rectangles, int count)
{
	int maxSquare = rectangles[0].Length * rectangles[0].Width;
	int maxIndex;
	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length * rectangles[i].Width > maxSquare)
		{
			maxSquare = rectangles[i].Length * rectangles[i].Width;
			maxIndex = i;
		}
	}
	cout << "Rectangle with the biggest square has size: "
		<< rectangles[maxIndex].Length << "x"
		<< rectangles[maxIndex].Width;
}

void DemoFindMaxRectangle()
{
	int count = 5;
	Rectangle* rectangles = new Rectangle[count];
	for (int i = 0; i < count; i++)
	{
		int value = rand();
		if (value < 0)
		{
			value = value * (-1);
		}
		rectangles[i].Length = value;
		rectangles[i].Width = value + 5;
	}
	for (int i = 0; i < count; i++)
	{
		WriteRectangle(rectangles[i]);
		cout << "\n";
	}
	FindMaxRectangle(rectangles, count);
	cout << "\n";
}