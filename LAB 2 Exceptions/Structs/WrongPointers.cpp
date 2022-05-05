#include "WrongPointers.h"

void WrongPointers()
{
	Flight flight;
	flight.Departure = "London";
	flight.Destination = "Moscow";
	flight.MinutesFlightTime = 100;

	Film film;
	film.Title = "Home alone";
	film.Genre = "Comedy";
	film.Rating = 7.649;
	film.ReleaseYear = 1990;

	Flight* flight2 = &flight;
	Film* film2 = &film;

	//pointerToFlight = pointerToMovie;
	//pointerToFlight = &pointerToMovie;
}