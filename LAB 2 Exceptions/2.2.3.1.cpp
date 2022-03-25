#include "2.2.3.1.h"

void DemoRectangle()
{
	Rectangle rectangle;
	rectangle.Color = "Blue";
	rectangle.Length = 12;
	rectangle.Width = 10;
	cout << "Color: " << rectangle.Color << "\n";
	cout << "Length: " << rectangle.Length << "\n";
	cout << "Width: " << rectangle.Width << "\n\n";
}

void DemoFlight()
{
	Flight flight;
	flight.DeparturePoint = "Tomsk";
	flight.Destination = "Novokeznetsk";
	flight.FlightTime = 160;
	cout << "DeparturePoint: " << flight.DeparturePoint << "\n";
	cout << "Destination: " << flight.Destination << "\n";
	cout << "FlightTime: " << flight.FlightTime << "\n\n";
}

void DemoMovie()
{
	Film movie;
	movie.Duration = 130;
	movie.Genre = "Horror";
	movie.Name = "Scream";
	movie.YearOfRelease = 1998;
	cout << "Duration: " << movie.Duration << "\n";
	cout << "Genre: " << movie.Genre << "\n";
	cout << "Name: " << movie.Name << "\n";
	cout << "YearOfRelease: " << movie.YearOfRelease << "\n\n";
}

void DemoTime()
{
	Time time;
	time.Hours = 23;
	time.Minutes = 12;
	time.Seconds = 56;
	cout << "Hours: " << time.Hours << "\n";
	cout << "Minutes: " << time.Minutes << "\n";
	cout << "Seconds: " << time.Seconds << "\n\n";
}

void DemoStructures3()
{
	 DemoRectangle();
	 DemoFlight();
	 DemoMovie();
	 DemoTime();
}

