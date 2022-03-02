#include "2.2.1.2.h"

void SortException(double* values, int count)
{
	// TODO: если такая проверка повторяется - вынести в отдельную функцию AssertArrayCount +
	// TODO: дублирование с ранее реализованной сортировкой +
	Sort(values, count);
}

void DemoSortException()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	SortException(values, count);
	for (int i = 0; i < count; i++)
	{
		cout << values[i] << "\n";
	}

	count = -1;
	try
	{
		SortException(values, count);
	}
	catch (exception error)
	{
		cout << "Exception cathed!\n";
	}
	
	for (int i = 0; i < count; i++)
	{
		cout << values[i] << "\n";
	}
	delete values;
}