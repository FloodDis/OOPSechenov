#include <iostream>
#include "../Header Files/DependentFields/4.1.h"
#include "../Header Files/ClosedMethodsOfTheClass/4.2.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	cout << "������� 4.1.1 - 4.1.3:\n";
	DemoBandClassFix();

	cout << "������� 4.1.4 - 4.1.6:\n";
	DemoRing();

	cout << "������� 4.2.1 - 4.2.3:\n";
	DemoRingFix();


}