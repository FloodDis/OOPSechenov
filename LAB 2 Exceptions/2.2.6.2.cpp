#include "2.2.6.2.h"

void DemoDynamicFlight()
{
	Flight* array = new Flight[4];
	array[0] = ReadFlight("Moscow", "Saint-Petersburg", 45);
	array[1] = ReadFlight("Tomsk", "Moscow", 190);
	array[2] = ReadFlight("Berlin", "London", 105);
	array[3] = ReadFlight("Moscow", "Barcelona", 180);
	for (int i = 0; i < 4; i++)
	{
		cout << "Flight " << i + 1 << " " << 
			array[i].DeparturePoint << " - " <<
			array[i].Destination << " is in flight " <<
			array[i].FlightTime << " minutes\n\n";
	}
	delete[] array;
}

Flight ReadFlight(string departurePoint,
	string destination, int flightTime)
{
	Flight flight;
	flight.DeparturePoint = departurePoint;
	flight.Destination = destination;
	flight.FlightTime = flightTime;
	return flight;
}