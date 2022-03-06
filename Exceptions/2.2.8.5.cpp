#include "2.2.8.5.h"

void WriteColor(Color color)
{
	switch (color)
	{
		case Red:
		{
			cout << "Red color\n";
			break;
		}
		case Orange:
		{
			cout << "Orange color\n";
			break;
		}
		case Yellow:
		{
			cout << "Yellow color\n";
			break;
		}
		case Green:
		{
			cout << "Green color\n";
			break;
		}
		case Blue:
		{
			cout << "Blue color\n";
			break;
		}
		case DarkBlue:
		{
			cout << "Dark blue color\n";
			break;
		}
		case Purple:
		{
			cout << "Purple color\n";
			break;
		}
		default:
		{
			cout << "Try again\n";
		}
	}
}

void DemoWriteColor()
{
	WriteColor(Red);
	WriteColor(DarkBlue);
	WriteColor(Yellow);
}