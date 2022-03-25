#include "2.2.4.2.h"

void DemoRectangleDoublePointer()
{
	Rectangle* doublePointerRectangle = new Rectangle;
	doublePointerRectangle->Color = "Blue";
	doublePointerRectangle->Length = 12;
	doublePointerRectangle->Width = 10;

	Rectangle* newdoublePointerRectangle = doublePointerRectangle;
	
	cout << "Old rectangle: " << doublePointerRectangle << "\n";
	cout << "New rectangle: " << newdoublePointerRectangle << "\n";

	delete doublePointerRectangle;
}