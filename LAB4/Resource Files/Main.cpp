#include <iostream>
#include "../Header Files/DependentFields/4.1.h"
#include "../Header Files/ServiceClasses/GeometricProgram.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	cout << "Демонстрация исправленных классов Album и Band:\n";
	DemoBand();

	enum Demo
	{
		RingDemo = 1,
		CollisionDemo,
		RectangleDemo,
		Exit
	};
	GeometricProgram program;

	cout << "Enter 1 to run ring demo.\n";
	cout << "Enter 2 to run collision demo.\n";
	cout << "Enter 3 to run rectangle demo.\n";
	cout << "Enter 4 to close program.\n";

	int prompt = 0;
	while (true)
	{
		cout << "\nEnter command: ";
		cin >> prompt;
		cout << '\n';
		switch (prompt)
		{
			case RingDemo:
			{
				program.DemoRing();
				break;
			}
			case CollisionDemo:
			{
				program.DemoCollision();
				break;
			}
			case RectangleDemo:
			{
				program.DemoRectangle();
				break;
			}
			case Exit:
			{
				return;
			}
			default:
			{
				break;
			}
		}
	}
}