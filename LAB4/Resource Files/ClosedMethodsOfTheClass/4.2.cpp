#include "../../Header Files/ClosedMethodsOfTheClass/4.2.h"

void DemoRingFix()
{
	RingFix ring1(5.0, 13.0, 2.0, -1.0);
	RingFix ring2(3.0, 8.0, 1.0, 4.5);
	RingFix ring3(4.0, 16.5, 3.75, 9.0);

	cout << "Ring 1 area: " << ring1.GetArea() << "\n";
	cout << "Ring 2 area: " << ring2.GetArea() << "\n";
	cout << "Ring 3 area: " << ring3.GetArea() << "\n";

	try
	{
		RingFix ring4(14.0, 9.0, 3.24, 1.26);
	}
	catch (const char* error)
	{
		cout << error;
	}
	
	try
	{
		RingFix ring5(-2.8, -1.3, 2.5, 3.47);
	}
	catch (const char* error)
	{
		cout << error;
	}
}