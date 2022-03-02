#include "2.2.1.2.h"

void SortException(double* values, int count)
{
	// TODO: если такая проверка повторяется - вынести в отдельную функцию AssertArrayCount
	if (count < 0)
	{
		exception error;
		throw error;
	}

	// TODO: дублирование с ранее реализованной сортировкой
	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
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