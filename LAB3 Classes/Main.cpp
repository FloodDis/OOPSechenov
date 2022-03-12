#include "3.2.h"
#include "3.3.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "Задание 3.2.2:\n";
	DemoBook();

	cout << "Задание 3.2.3:\n";
	DemoReadBookFromConsole();

	cout << "Задание 3.2.4:\n";
	DemoWriteBook();

	cout << "Задание 3.2.5:\n";
	DemoFindBookByAuthor();

	cout << "Задание 3.2.6:\n";
	DemoRoute();

	cout << "Задание 3.3.1, 3.3.2, 3.3.3, 3.3.4:\n";
	DemoRectangleWithPoint();
}