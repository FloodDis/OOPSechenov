#include "2.2.4.2.h"

void DemoRectangleDoublePointer()
{
	Rectangle* rectangle = new Rectangle;
	rectangle->Color = "Blue";
	rectangle->Length = 12;
	rectangle->Width = 10;

	Rectangle* newRectangle = new Rectangle;
	newRectangle = rectangle;

	cout << "Old rectangle: " << rectangle << "\n";
	cout << "New rectangle" << newRectangle << "\n";

	delete rectangle;
	delete newRectangle;
}