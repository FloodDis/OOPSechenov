#include "2.2.8.6.h"

Color ReadColor()
{
	int value;
	cout << "Enter value: ";
	cin >> value;
	do
	{
		switch (value)
		{
			case 1:
			{
				return Red;
			}
			case 2:
			{
				return Orange;
			}
			case 3:
			{
				return Yellow;
			}
			case 4:
			{
				return Green;
			}
			case 5:
			{
				return Blue;
			}
			case 6:
			{
				return DarkBlue;
			}
			case 7:
			{
				return Purple;
			}
			default:
			{
				cout << "Try again\n";
				break;
			}
		}
	} while (value <= 7 || value > 0);
}

void DemoReadColor()
{
	Color color;
	color = ReadColor();
	WriteColor(color);
}