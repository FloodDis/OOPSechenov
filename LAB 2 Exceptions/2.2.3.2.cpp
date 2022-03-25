#include "2.2.3.2.h"

void DemoRectangle(int width, int length)
{
	Rectangle rectangle;
	rectangle.Color = "";
	rectangle.Length = length;
	rectangle.Width = width;
	cout << "Rectangle has size: " <<
		rectangle.Length << "x" << rectangle.Width << "\n";
}

void DemoFlight(string departurePoint, string destination)
{
	Flight flight;
	flight.DeparturePoint = departurePoint;
	flight.Destination = destination;
	flight.FlightTime = 0;
	cout << "Flight from " <<
		flight.DeparturePoint << " to " << flight.Destination << "\n";
}

void DemoMovie(int year, string name)
{
	Film film;
	film.Duration = 0;
	film.Genre = "";
	film.Name = name;
	film.YearOfRelease = year;
	cout << "Film is released in " <<
		film.YearOfRelease << " has name " << film.Name << "\n";
}

void DemoTime(int hours, int minutes, int seconds)
{
	Time time;
	time.Hours = hours;
	time.Minutes = minutes;
	time.Seconds = seconds;
	cout << "Time is " <<
		time.Hours << ":" << time.Minutes << ":" << time.Seconds << "\n";
}

void DemoStructures4()
{
	int width;
	int length;
	cout << "\nEnter width: ";
	cin >> width;
	cout << "\nEnter length:";
	cin >> length;
	DemoRectangle(width, length);

	string departurePoint;
	string destination;
	cout << "\nEnter departure point: ";
	cin >> departurePoint;
	cout << "\nEnter destination: ";
	cin >> destination;
	DemoFlight(departurePoint, destination);

	int year;
	string name;
	cout << "\nEnter year: ";
	cin >> year;
	cout << "\nEnter name: ";
	cin >> name;
	DemoMovie(year, name);

	int hours;
	int minutes;
	int seconds;
	cout << "\nEnter hours: ";
	cin >> hours;
	cout << "\nEnter minutes: ";
	cin >> minutes;
	cout << "\nEnter seconds: ";
	cin >> seconds;
	DemoTime(hours, minutes, seconds);
}