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

void DemoCollision()
{
	Rectangle* rectangle1 = new Rectangle(6.0, 7.0, 2.0, 3.0);
	Rectangle* rectangle2 = new Rectangle(8.0, 4.0, 3.2, 3.9);
	bool result = CollisionManager::IsCollision(*rectangle1, *rectangle2);
	if (result)
	{
		cout << "The rectangles intersect\n";
	}
	else
	{
		cout << "The rectangles don't intersect\n";
	}

	Rectangle* rectangle3 = new Rectangle(6.0, 7.0, 2.0, 3.0);
	Rectangle* rectangle4 = new Rectangle(1.0, 3.0, 100.2, 200.9);
	result = CollisionManager::IsCollision(*rectangle3, *rectangle4);
	if (result)
	{
		cout << "The rectangles intersect\n";
	}
	else
	{
		cout << "The rectangles don't intersect\n";
	}

	delete rectangle1;
	delete rectangle2;
	delete rectangle3;
	delete rectangle4;

	RingFix3* ring1 = new RingFix3(6.0, 8.0, 5.0, -1.0);
	RingFix3* ring2 = new RingFix3(5.0, 7.0, 6.0, 1.0);
	result = CollisionManager::IsCollision(*ring1, *ring2);
	if (result)
	{
		cout << "The rings intersect\n";
	}
	else
	{
		cout << "The rings don't intersect\n";
	}
	RingFix3* ring3 = new RingFix3(6.0, 8.0, 5.0, -1.0);
	RingFix3* ring4 = new RingFix3(2.5, 4.0, 17.0, 12.0);
	result = CollisionManager::IsCollision(*ring3, *ring4);
	if (result)
	{
		cout << "The rings intersect\n";
	}
	else
	{
		cout << "The rings don't intersect\n";
	}

	delete ring1;
	delete ring2;
	delete ring3;
	delete ring4;
}