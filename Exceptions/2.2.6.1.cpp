#include "2.2.6.1.h"

void DemoDynamicFlight()
{
	Flight* pointer;
	Flight* flight = new Flight;
	pointer = flight;
	pointer->DeparturePoint = "Moscow";
	pointer->Destination = "Washington";
	pointer->FlightTime = 300;
	cout << "Flight " << pointer->DeparturePoint
		<< " - " << pointer->Destination << " is in flight "
		<< pointer->FlightTime << " minutes\n";
}