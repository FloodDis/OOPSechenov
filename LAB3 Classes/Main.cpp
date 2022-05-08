#include "Aggregation/3.3.h"
#include "Classes/3.5.h"
#include "OneToManyAggregation/3.4.h"
#include "StructureArrayFields/3.2.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "������� 3.2:\n";
	DemoBook();
	DemoReadBookFromConsole();
	DemoWriteBook();
	DemoFindBookByAuthor();
	DemoRoute();
	cout << "\n";

	cout << "������� 3.3:\n";
	DemoRectangleWithPoint();
	cout << "\n";
	DemoFlightWithTime();
	cout << "\n";

	cout << "������� 3.4:\n";
	DemoBand();
	cout << "\n";

	cout << "������� 3.5:\n";
	DemoRectangleWithPointClass();
	cout << "\n";
	DemoFlightWithTimeClass();
	cout << "\n";
	DemoBandClass();
}