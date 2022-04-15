#include "../../Header Files/Enumeration/DemoEnums.h"

void DemoEnums()
{
	Color color = Blue;
	Genre genre = Drama;
	WeekDay weekDay = Thursday;
	Season yearTime = Spring;

	const int arraySize = 6;
	Color colorArray[arraySize];
	colorArray[0] = Blue;
	colorArray[1] = Orange;
	colorArray[2] = Green;
	colorArray[3] = Red;
	colorArray[4] = Yellow;
	colorArray[5] = ReadColor();

	cout << "Count of Red color in the array: "
		<< CountRed(colorArray, arraySize) << '\n';
	cout << "Count of Purple color in the array: "
		<< CountColor(colorArray, arraySize, Color::Purple) << '\n';
}

void WriteColor(Color color)
{
	switch (color)
	{
		case Blue:
		{
			cout << "It's blue color.\n";
			break;
		}
		case Green:
		{
			cout << "It's green color.\n";
			break;
		}
		case Orange:
		{
			cout << "It's orange color.\n";
			break;
		}
		case Purple:
		{
			cout << "It's purple color.\n";
			break;
		}
		case Red:
		{
			cout << "It's red color.\n";
			break;
		}
		case Yellow:
		{
			cout << "It's yellow color.\n";
			break;
		}
		default:
		{
			throw exception("Color with that name didn't exist.");
		}
	}
}

Color ReadColor()
{
	cout << "Enter color: ";

	string colorName;
	cin >> colorName;

	if (colorName == "Blue")
	{
		return Blue;
	}
	else if (colorName == "Green")
	{
		return Green;
	}
	else if (colorName == "Orange")
	{
		return Orange;
	}
	else if (colorName == "Purple")
	{
		return Purple;
	}
	else if (colorName == "Red")
	{
		return Red;
	}
	else if (colorName == "Yellow")
	{
		return Yellow;
	}
	else
	{
		throw exception("Color with that name didn't exist.");
	}
}

int CountRed(Color* colors, int count)
{
	int redCount = 0;
	for (int i = 0; i < count; ++i)
	{
		if (colors[i] == Color::Red)
		{
			redCount += 1;
		}
	}
	return redCount;
}

int CountColor(Color* colors, int count, Color findedColor)
{
	int colorCount = 0;
	for (int i = 0; i < count; ++i)
	{
		if (colors[i] == findedColor)
		{
			colorCount += 1;
		}
	}
	return colorCount;
}