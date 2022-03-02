#include "2.2.4.1.h"

void DemoRectanglePointer()
{
	Rectangle* rectangle = new Rectangle;
	rectangle->Color = "Blue";
	rectangle->Length = 12;
	rectangle->Width = 10;
	cout << "Color: " << rectangle->Color << "\n";
	cout << "Length: " << rectangle->Length << "\n";
	cout << "Width: " << rectangle->Width << "\n\n";
	delete rectangle;
}