﻿#include "2.2.1.1.h"
#include "2.2.1.2.h"
#include "2.2.2.1.h"
#include "2.2.2.2.h"
#include "2.2.3.1.h"
#include "2.2.3.2.h"
#include "2.2.3.3.h"
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
	DemoStructures1();

	cout << "\nЗадание 2.2.2.2:\n\n";
	DemoStructures2();

	cout << "\nЗадание 2.2.3.1:\n\n";
	DemoStructures3();

	cout << "\nЗадание 2.2.3.2:\n\n";
	DemoStructures4();

	cout << "\nЗадание 2.2.3.3:\n\n";
	DemoStructures5();


}