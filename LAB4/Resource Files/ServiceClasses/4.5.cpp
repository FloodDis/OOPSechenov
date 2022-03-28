#include "../../Header Files/ServiceClasses/4.5.h"

void DemoGeometricProgram()
{
	enum Functions
	{
		DemoCollision = 1,
		DemoRingFix3,
		DemoRectangle
	};
	GeometricProgram geometricProgram;
	int option;
	cout << "Choose an function:\n"
		<< "1) DemoCollision\n"
		<< "2) DemoRingFix3\n"
		<< "3) DemoRectangle\n";
	cin >> option;
	switch (option)
	{
		case DemoCollision:
		{
			geometricProgram.DemoCollision();
			break;
		}
		case DemoRingFix3:
		{
			geometricProgram.DemoRingFix3();
			break;
		}
		case DemoRectangle:
		{
			geometricProgram.DemoRectangle();
			break;
		}
		default:
		{
			cout << "Try again!\n";
			break;
		}
	}
}