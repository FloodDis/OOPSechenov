#include "2.2.8.4.h"

void DemoEnums4()
{
	cout << "Color array:\n";
	Color* arrayColor = new Color[6];
	for (int i = 0; i < 6; i++)
	{
		arrayColor[i] = Red;
		cout << "array[" << i << "]="
			<< arrayColor[i] << "\n";
	}


	cout << "\nDay array:\n";
	DayOfTheWeek* arrayDay = new DayOfTheWeek[6];
	for (int i = 0; i < 6; i++)
	{
		arrayDay[i] = Monday;
		cout << "array[" << i << "]="
			<< arrayDay[i] << "\n";
	}

	cout << "\nGenre array:\n";
	Genre* arrayGenre = new Genre[6];
	for (int i = 0; i < 6; i++)
	{
		arrayGenre[i] = Horror;
		cout << "array[" << i << "]="
			<< arrayGenre[i] << "\n";
	}

	cout << "\nStudy array:\n";
	FormOfStudy* arrayStudy = new FormOfStudy[6];
	for (int i = 0; i < 6; i++)
	{
		arrayStudy[i] = FullTime;
		cout << "array[" << i << "]="
			<< arrayGenre[i] << "\n";
	}

	cout << "\nManufactures array:\n";
	SmartphoneManufacturers* arrayManufactures =
		new SmartphoneManufacturers[6];
	for (int i = 0; i < 6; i++)
	{
		arrayManufactures[i] = Apple;
		cout << "array[" << i << "]="
			<< arrayManufactures[i] << "\n";
	}

	cout << "\nTime array:\n";
	TimeOfTheYear* arrayTime = new TimeOfTheYear[6];
	for (int i = 0; i < 6; i++)
	{
		arrayTime[i] = Summer;
		cout << "array[" << i << "]="
			<< arrayTime[i] << "\n";
	}
	delete[] arrayColor;
	delete[] arrayDay;
	delete[] arrayGenre;
	delete[] arrayStudy;
	delete[] arrayManufactures;
	delete[] arrayTime;
}