#include "2.2.3.3.h"

void DemoRectangle(int width, int length, int size)
{
	Rectangle* arrayRectangle = new Rectangle[size];
	for (int i = 0; i < size; i++)
	{
		arrayRectangle[i].Length = length;
		arrayRectangle[i].Width = width;
		cout << "Rectangle has size: " <<
			arrayRectangle[i].Length << "x" << arrayRectangle[i].Width
			<< "\n";
	}
	delete[] arrayRectangle;
}

void DemoFlight(string departurePoint, string destination, int size)
{
	Flight* arrayFlight = new Flight[size];
	for (int i = 0; i < size; i++)
	{
		arrayFlight[i].DeparturePoint = departurePoint;
		arrayFlight[i].Destination = destination;
		cout << "Flight from " <<
			arrayFlight[i].DeparturePoint << " to "
			<< arrayFlight[i].Destination << "\n";
	}
	delete[] arrayFlight;
}

void DemoMovie(int year, string name, int size)
{
	Film* arrayFilm = new Film[size];
	for (int i = 0; i < size; i++)
	{
		arrayFilm[i].YearOfRelease = year;
		arrayFilm[i].Name = name;
		cout << "Film is released in " <<
			arrayFilm[i].YearOfRelease << " has name "
			<< arrayFilm[i].Name << "\n";
	}
	delete[] arrayFilm;
}

void DemoTime(int hours, int minutes, int seconds, int size)
{
	Time* arrayTime = new Time[size];
	for (int i = 0; i < size; i++)
	{
		arrayTime[i].Hours = hours;
		arrayTime[i].Minutes = minutes;
		arrayTime[i].Seconds = seconds;
		cout << "Time is " <<
			arrayTime[i].Hours << ":" <<
			arrayTime[i].Minutes << ":" << arrayTime[i].Seconds << "\n";
	}
	delete[] arrayTime;
}

void DemoStructures5()
{
	int width;
	int length;
	int size;
	cout << "\nEnter width: ";
	cin >> width;
	cout << "\nEnter length:";
	cin >> length;
	cout << "\nEnter size: ";
	cin >> size;
	DemoRectangle(width, length, size);

	string departurePoint;
	string destination;
	cout << "\nEnter departure point: ";
	cin >> departurePoint;
	cout << "\nEnter destination: ";
	cin >> destination;
	cout << "\nEnter size: ";
	DemoFlight(departurePoint, destination, size);

	int year;
	string name;
	cout << "\nEnter year: ";
	cin >> year;
	cout << "\nEnter name: ";
	cin >> name;
	cout << "\nEnter size: ";
	cin >> size;
	DemoMovie(year, name, size);

	int hours;
	int minutes;
	int seconds;
	cout << "\nEnter hours: ";
	cin >> hours;
	cout << "\nEnter minutes: ";
	cin >> minutes;
	cout << "\nEnter seconds: ";
	cin >> seconds;
	cout << "\nEnter size: ";
	cin >> size;
	DemoTime(hours, minutes, seconds, size);
}