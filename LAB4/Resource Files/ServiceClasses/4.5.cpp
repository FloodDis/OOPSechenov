#include "../../Header Files/ServiceClasses/4.5.h"

void DemoRingFix3()
{
	RingFix3 ring1(5.0, 13.0, 2.0, -1.0);
	cout << "Rings count: " << ring1.GetAllRingsCount() << "\n";
	RingFix3 ring2(3.0, 8.0, 1.0, 4.5);
	cout << "Rings count: " << ring2.GetAllRingsCount() << "\n";
	RingFix3 ring3(4.0, 16.5, 3.75, 9.0);
	cout << "Rings count: " << ring3.GetAllRingsCount() << "\n";

	cout << "Ring 1 area: " << ring1.GetArea() << "\n";
	cout << "Ring 2 area: " << ring2.GetArea() << "\n";
	cout << "Ring 3 area: " << ring3.GetArea() << "\n";

	try
	{
		RingFix3 ring4(14.0, 9.0, 3.24, 1.26);
	}
	catch (const char* error)
	{
		cout << error;
	}

	try
	{
		RingFix3 ring5(-2.8, -1.3, 2.5, 3.47);
	}
	catch (const char* error)
	{
		cout << error;
	}

	cout << "Number of rings before calling the constructor: " <<
		RingFix3::GetAllRingsCount() << "\n";
	RingFix3* ring = new RingFix3(5.0, 10.0, 25.0, 25.0);
	cout << "Number of rings after calling the constructor: " <<
		RingFix3::GetAllRingsCount() << "\n";
	delete ring;
	cout << "Number of rings after calling the destructor: " <<
		RingFix3::GetAllRingsCount() << "\n";
}