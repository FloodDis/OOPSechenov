#include "2.2.1.1.h"
#include "2.2.1.2.h"
#include "2.2.2.1.h"
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "Результат работы сортировки(2.2.1.1):\n";
	DemoSort();
	cout << "\n";
	cout << "Результат работы сортировки с обработкой исключений(2.2.1.2):\n";
	DemoSortException();
	cout << "\nЗадание 2.2.2.1:\n\n";
	DemoStructures();
}