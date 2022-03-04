#include "2.2.4.3.h"

void DemoFilmDoublePointer()
{
	Film* doublePointerFilm = new Film;
	Film* newdoublePointerFilm = doublePointerFilm;
	cout << "Old film: " << doublePointerFilm << "\n";
	cout << "New film: " << newdoublePointerFilm << "\n";
	cout << "\n";
	delete doublePointerFilm;
}

void DemoFlightDoublePointer()
{
	Flight* doublePointerFlight = new Flight;
	Flight* newdoublePointerFlight = doublePointerFlight;
	cout << "Old flight: " << doublePointerFlight << "\n";
	cout << "New flight: " << newdoublePointerFlight << "\n";
	cout << "\n";
	delete doublePointerFlight;
}

void DemoTimeDoublePointer()
{
	Time* doublePointerTime = new Time;
	Time* newdoublePointerTime = doublePointerTime;
	cout << "Old time: " << doublePointerTime << "\n";
	cout << "New time: " << newdoublePointerTime << "\n";
	cout << "\n";
	delete doublePointerTime;
}

void DemoDoublePointer()
{
	DemoFilmDoublePointer();
	DemoFlightDoublePointer();
	DemoTimeDoublePointer();
}