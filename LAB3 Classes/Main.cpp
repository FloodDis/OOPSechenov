#include "3.2.h"
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

}