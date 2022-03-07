#include "2.2.7.3.h"

Rectangle* CopyRectangle(Rectangle* rectangle)
{
	Rectangle* copiedRectangle = new Rectangle;
	copiedRectangle->Color = rectangle->Color;
	copiedRectangle->Length = rectangle->Length;
	copiedRectangle->Width = rectangle->Width;
	return copiedRectangle;
}

Flight* CopyFlight(Flight* flight)
{
	Flight* copiedFlight = new Flight;
	copiedFlight->DeparturePoint = flight->DeparturePoint;
	copiedFlight->Destination = flight->Destination;
	copiedFlight->FlightTime = flight->FlightTime;
	return copiedFlight;
}

Film* CopyFilm(Film* film)
{
	Film* copiedFilm = new Film;
	copiedFilm->Duration = film->Duration;
	copiedFilm->Genre = film->Genre;
	copiedFilm->Name = film->Name;
	copiedFilm->YearOfRelease = film->YearOfRelease;
	copiedFilm->Rate = film->Rate;
	return copiedFilm;
}

Time* CopyTime(Time* time)
{
	Time* copiedTime = new Time;
	copiedTime->Hours = time->Hours;
	copiedTime->Minutes = time->Minutes;
	copiedTime->Seconds = time->Seconds;
	return copiedTime;
}

void DemoCopyStructures()
{
	Rectangle* rectangle1 = new Rectangle;
	rectangle1 = MakeRectangle(12, 15, "Red");

	Flight* flight1 = new Flight;
	flight1 = MakeFlight("Tomsk", "Moscow", 200);

	Film* film1 = new Film;
	film1 = MakeFilm("Tangled", 120, 2014, "Comedy", 9.0);

	Time* time1 = new Time;
	time1 = MakeTime(23, 56, 12);

	Rectangle* rectangle2 = new Rectangle;
	rectangle2 = CopyRectangle(rectangle1);

	Flight* flight2 = new Flight;
	flight2 = CopyFlight(flight1);

	Film* film2 = new Film;
	film2 = CopyFilm(film1);

	Time* time2 = new Time;
	time2 = CopyTime(time1);

	cout << "rectangle2:\n"
		<< "Length: " << rectangle2->Length << "\n"
		<< "Wigth: " << rectangle2->Width << "\n"
		<< "Color: " << rectangle2->Color << "\n\n";

	cout << "flight2:\n"
		<< "Departure point: " << flight2->DeparturePoint << "\n"
		<< "Destination: " << flight2->Destination << "\n"
		<< "Flight time: " << flight2->FlightTime << "\n\n";

	cout << "film2:\n"
		<< "Name: " << film2->Name << "\n"
		<< "Duration: " << film2->Duration << "\n"
		<< "Year of release: " << film2->YearOfRelease << "\n"
		<< "Genre: " << film2->Genre << "\n"
		<< "Rate: " << film2->Rate;

	cout << "time2:\n"
		<< "Hours: " << time2->Hours << "\n"
		<< "Minutes: " << time2->Minutes << "\n"
		<< "Seconds: " << time2->Seconds << "\n\n";
}