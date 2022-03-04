#include "2.2.4.4.h"

void WrongPointers()
{
	Film film;
	Flight flight;
	Film* pointerFilm = &film;
	Flight* pointerFlight = &flight;
	cout << "Pointer on film:\n" << pointerFilm << "\n";
	cout << "Pointer on flight:\n" << pointerFlight << "\n";
	/*pointerFlight = &film;
	pointerFilm = &flight;*/
}