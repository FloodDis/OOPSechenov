#include "3.2.h"
#include "3.3.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "������� 3.2.2:\n";
	DemoBook();

	cout << "������� 3.2.3:\n";
	DemoReadBookFromConsole();

	cout << "������� 3.2.4:\n";
	DemoWriteBook();

	cout << "������� 3.2.5:\n";
	DemoFindBookByAuthor();

	cout << "������� 3.2.6:\n";
	DemoRoute();

	cout << "������� 3.3.1, 3.3.2, 3.3.3, 3.3.4, 3.3.5:\n";
	DemoRectangleWithPoint();

	cout << "������� 3.3.7, 3.3.8:\n";
	DemoFlightWithTime();
}