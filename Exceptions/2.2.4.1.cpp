#include "2.2.4.1.h"

void DemoRectanglePointer()
{
	Rectangle* rectangle = new Rectangle;
	rectangle->Color = "Blue";
	rectangle->Length = 12;
	rectangle->Width = 10;

	Rectangle* newRectangle = rectangle;
	cout << "Color: " << newRectangle->Color << "\n";
	cout << "Length: " << newRectangle->Length << "\n";
	cout << "Width: " << newRectangle->Width << "\n\n";

	newRectangle->Color = "Red";
	newRectangle->Length = 6;
	newRectangle->Width = 7;
	cout << "Color: " << newRectangle->Color << "\n";
	cout << "Length: " << newRectangle->Length << "\n";
	cout << "Width: " << newRectangle->Width << "\n\n";

	delete rectangle;
}