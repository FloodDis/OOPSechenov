#include "2.2.2.1.h"

void DemoStructures()
{
	Rectangle testRectangle;
	Flight testFlight;
	Film testFilm;
	Time testTime;

	testRectangle.Color = "green";
	testRectangle.Length = 12;
	testRectangle.Width = 4;

	testFlight.DeparturePoint = "Tomsk";
	testFlight.Destination = "Novoluznetsk";
	testFlight.FlightTime = 60;

	testFilm.Duration = 120;
	testFilm.Genre = "Comedy";
	testFilm.Name = "Scream";
	testFilm.YearOfRelease = 2001;

	testTime.Hours = 16;
	testTime.Minutes = 54;
	testTime.Seconds = 23;

	cout << "Rectangle:\n"
		<< "Color: " << testRectangle.Color << "\n"
		<< "Length: " << testRectangle.Length << "\n"
		<< "Width: " << testRectangle.Width << "\n\n";
	cout << "Flight:\n"
		<< "Departure point: " << testFlight.DeparturePoint << "\n"
		<< "Destination: " << testFlight.Destination << "\n"
		<< "Flight time: " << testFlight.FlightTime << "\n\n";
	cout << "Film:\n"
		<< "Duration: " << testFilm.Duration << "\n"
		<< "Genre: " << testFilm.Genre << "\n"
		<< "Name: " << testFilm.Name << "\n"
		<< "Year of release: " << testFilm.YearOfRelease << "\n\n";
	cout << "Time:\n"
		<< "Hours: " << testTime.Hours << "\n"
		<< "Minutes: " << testTime.Minutes << "\n"
		<< "Seconds: " << testTime.Seconds << "\n\n";
}