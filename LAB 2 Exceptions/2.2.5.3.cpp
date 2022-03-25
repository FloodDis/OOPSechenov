#include "2.2.5.3.h"

void DemoReadAndWriteRectangles()
{
	Rectangle* arrayRectangle = new Rectangle[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "array[" << i << "]:\n\n";
		ReadRectangle(arrayRectangle[i]);
		cout << "\n";
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "array[" << i << "]:\n";
		WriteRectangle(arrayRectangle[i]);
		cout << "\n";
	}
	delete[] arrayRectangle;
}