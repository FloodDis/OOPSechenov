#include "2.2.8.7.h"

int CountRed(Color* colors, int count)
{
	int redCount = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == Red)
		{
			redCount++;
		}
	}
	return redCount;
}

void DemoCountRed()
{
	Color* colors = new Color[6];
	colors[0] = Red;
	colors[1] = Blue;
	colors[2] = Yellow;
	colors[3] = Red;
	colors[4] = Yellow;
	colors[5] = Green;
	int redCount = CountRed(colors, 6);
	cout << "Red count: " << redCount << "\n";
	delete[] colors;
}