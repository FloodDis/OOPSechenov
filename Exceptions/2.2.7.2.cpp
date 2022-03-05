#include "2.2.7.2.h"

Rectangle* MakeRectangle(int length, int width, string color)
{
	Rectangle* newRectangle = new Rectangle;
	newRectangle->Color = color;
	newRectangle->Length = length;
	newRectangle->Width = width;
	return newRectangle;
}

Flight* MakeFlight(string departurePoint,
	string destination, int flightTime)
{
	Flight* newFlight = new Flight;
	newFlight->DeparturePoint = departurePoint;
	newFlight->Destination = destination;
	newFlight->FlightTime = flightTime;
	return newFlight;
}

Film* MakeFilm(string name,
	int duration, int yearOfRelease, string genre)
{
	Film* newFilm = new Film;
	newFilm->Duration = duration;
	newFilm->Genre = genre;
	newFilm->Name = name;
	newFilm->YearOfRelease = yearOfRelease;
	return newFilm;
}

Time* MakeTime(int hours, int minutes, int seconds)
{
	Time* newTime = new Time;
	newTime->Hours = hours;
	newTime->Minutes = minutes;
	newTime->Seconds = seconds;
	return newTime;
}

void DemoMakeStructures()
{
	Rectangle* rectangle = new Rectangle;
	rectangle = MakeRectangle(12, 15, "Red");

	Flight* flight = new Flight;
	flight = MakeFlight("Tomsk", "Moscow", 200);

	Film* film = new Film;
	film = MakeFilm("Tangled", 120, 2014, "Comedy");

	Time* time = new Time;
	time = MakeTime(23, 56, 12);

	cout << "Rectangle:\n"
		<< "Length: " << rectangle->Length << "\n"
		<< "Wigth: " << rectangle->Width << "\n"
		<< "Color: " << rectangle->Color << "\n\n";

	cout << "Flight:\n"
		<< "Departure point: " << flight->DeparturePoint << "\n"
		<< "Destination: " << flight->Destination << "\n"
		<< "Flight time: " << flight->FlightTime << "\n\n";

	cout << "Film:\n"
		<< "Name: " << film->Name << "\n"
		<< "Duration: " << film->Duration << "\n"
		<< "Year of release: " << film->YearOfRelease << "\n"
		<< "Genre: " << film->Genre << "\n\n";

	cout << "Time:\n"
		<< "Hours: " << time->Hours << "\n"
		<< "Minutes: " << time->Minutes << "\n"
		<< "Seconds: " << time->Seconds << "\n\n";
}