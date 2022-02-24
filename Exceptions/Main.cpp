#include "2.2.1.1.h"
#include "2.2.1.2.h"
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "Результат работы сортировки:\n";
	DemoSort();
	cout << "\n";
	cout << "Результат работы сортировки с обработкой исключений:\n";
	DemoSortException();
}