#include "2.2.5.5.h"

void FindRectangle(Rectangle* rectangles, int count)
{
	int maxLength = rectangles[0].Length;
	int maxIndex;
	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length > maxLength)
		{
			maxLength = rectangles[i].Length;
			maxIndex = i;
		}
	}
	cout << "Rectangle with the biggest length has size: "
		<< rectangles[maxIndex].Length << "x" 
		<< rectangles[maxIndex].Width;
}

void DemoFindRectangle()
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
	FindRectangle(rectangles, count);
	cout << "\n";
}