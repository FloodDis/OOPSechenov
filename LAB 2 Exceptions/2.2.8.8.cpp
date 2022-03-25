#include "2.2.8.8.h"

int CountColor(Color* colors, int count, Color findedColor)
{
	int colorCount = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == findedColor)
		{
			colorCount++;
		}
	}
	return colorCount;
}

void DemoCountColor()
{
	Color* colors = new Color[6];
	colors[0] = Red;
	colors[1] = Blue;
	colors[2] = Yellow;
	colors[3] = Red;
	colors[4] = Yellow;
	colors[5] = Green;
	int redCount = CountColor(colors, 6, Yellow);
	cout << "Red count: " << redCount << "\n";
	delete[] colors;
}