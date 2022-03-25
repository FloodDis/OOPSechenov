#include "2.2.6.3.h"

void FindShortestFlight(Flight* flights, int count)
{
	int minIndex = 0;
	int minFlightTime = flights[0].FlightTime;
	for (int i = 0; i < count; i++)
	{
		if (flights[i].FlightTime < minFlightTime)
		{
			minFlightTime = flights[i].FlightTime;
			minIndex = i;
		}
	}
	cout << "The shortest flight " << flights[minIndex].DeparturePoint <<
		" - " << flights[minIndex].Destination << " is in flight " <<
		flights[minIndex].FlightTime << " minutes\n";
}

void DemoFindShortest()
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
	FindShortestFlight(array, 4);
	delete[] array;
}