#include <iostream>
#include "../Header Files/DependentFields/4.1.h"
#include "../Header Files/ClosedMethodsOfTheClass/4.2.h"
#include "../Header Files/StaticFieldsAndMethodsOfTheClass/4.4.h"
#include "../Header Files/ServiceClasses/4.5.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	cout << "������� 4.1.1 - 4.1.3:\n";
	DemoBandClassFix();

	cout << "������� 4.1.4 - 4.1.6:\n";
	DemoRing();

	cout << "������� 4.2.1 - 4.2.3:\n";
	DemoRingFix1();

	cout << "������� 4.4.1 - 4.4.7:\n";
	DemoRingFix2();

	cout << "������� 4.5.1 - 4.5.3:\n";
	DemoRingFix3();
}