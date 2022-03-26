﻿#include "2.2.1.1.h"
#include "2.2.1.2.h"
#include "2.2.2.1.h"
#include "2.2.2.2.h"
#include "2.2.3.1.h"
#include "2.2.3.2.h"
#include "2.2.3.3.h"
#include "2.2.4.1.h"
#include "2.2.4.2.h"
#include "2.2.4.3.h"
#include "2.2.5.1.h"
#include "2.2.5.2.h"
#include "2.2.5.3.h"
#include "2.2.5.4.h"
#include "2.2.5.5.h"
#include "2.2.5.6.h"
#include "2.2.6.1.h"
#include "2.2.6.2.h"
#include "2.2.6.3.h"
#include "2.2.7.1.h"
#include "2.2.7.2.h"
#include "2.2.7.3.h"
#include "2.2.8.1.h"
#include "2.2.8.2.h"
#include "2.2.8.3.h"
#include "2.2.8.4.h"
#include "2.2.8.5.h"
#include "2.2.8.6.h"
#include "2.2.8.7.h"
#include "2.2.8.8.h"
#include "2.2.9.h"
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

	cout << "\nЗадание 2.2.4.1:\n\n";
	DemoRectanglePointer();

	cout << "\nЗадание 2.2.4.2:\n\n";
	DemoRectangleDoublePointer();

	cout << "\nЗадание 2.2.4.3:\n\n";
	DemoDoublePointer();

	cout << "\nЗадание 2.2.5.1\n\n";
	DemoWriteRectangle();

	cout << "\nЗадание 2.2.5.2\n\n";
	DemoReadRectangle();

	cout << "\nЗадание 2.2.5.3\n\n";
	DemoReadAndWriteRectangles();

	cout << "\nЗадание 2.2.5.4\n\n";
	DemoExchange();

	cout << "\nЗадание 2.2.5.5\n\n";
	DemoFindRectangle();

	cout << "\nЗадание 2.2.5.6\n\n";
	DemoFindMaxRectangle();

	cout << "\nЗадание 2.2.6.1\n\n";
	DemoDynamicFlights();

	cout << "\nЗадание 2.2.6.2\n\n";
	DemoDynamicFlight();

	cout << "\nЗадание 2.2.6.3\n\n";
	DemoFindShortest();

	cout << "\nЗадание 2.2.7.1\n\n";
	DemoCircle();

	cout << "\nЗадание 2.2.7.2\n\n";
	DemoMakeStructures();

	cout << "\nЗадание 2.2.7.3\n\n";
	DemoCopyStructures();

	cout << "\nЗадание 2.2.8.1\n\n";
	DemoEnums1();

	cout << "\nЗадание 2.2.8.2\n\n";
	DemoEnums2();

	cout << "\nЗадание 2.2.8.3\n\n";
	DemoEnums3();

	cout << "\nЗадание 2.2.8.4\n\n";
	DemoEnums4();

	cout << "\nЗадание 2.2.8.5\n\n";
	DemoWriteColor();

	cout << "\nЗадание 2.2.8.6\n\n";
	DemoReadColor();

	cout << "\nЗадание 2.2.8.7\n\n";
	DemoCountRed();

	cout << "\nЗадание 2.2.8.8\n\n";
	DemoCountColor();

	cout << "\nЗадание 2.2.9.1, 2.2.9.2, 2.2.9.3, 2.2.9.4, 2.2.9.5\n\n";
	DemoMovieWithGenre();
}