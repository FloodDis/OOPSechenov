#include "2.2.1.1.h"

void Sort(double* values, int count)
{
	if (count < 0)
	{
		exception error;
		throw error;
	}

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

void DemoSort()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	Sort(values, count);
	for (int i = 0; i < count; i++)
	{
		cout << values[i]<<"\n";
	}
}