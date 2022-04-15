#include "../../Header Files/Structs/Flight.h"

void DemoFlight()
{
	Flight flight1;
	flight1.Departure = "Kemerovo";
	flight1.Destination = "Moscow";
	flight1.MinutesFlightTime = 90;

	Flight flight2;
	cout << "Enter flight departure: ";
	cin >> flight2.Departure;
	cout << "Enter flight destination: ";
	cin >> flight2.Destination;
	cout << "Enter flight flight time in minutes: ";
    cin >> flight2.MinutesFlightTime;

	Flight flight3;
	flight3.Departure = "Novosibirsk";
	flight3.Destination = "Tomsk";
	flight3.MinutesFlightTime = 35;

	const int flightCount = 3;
	Flight flight[flightCount];
	flight[0] = flight1;
	flight[1] = flight2;
	flight[2] = flight3;

	for (int i = 0; i < flightCount; ++i)
	{
		cout << "Flight " << i << '\n';
		cout << "Departure: " << flight[i].Departure << '\n';
		cout << "Destination: " << flight[i].Destination << '\n';
		cout << "Flight time (in minutes): " << 
			flight[i].MinutesFlightTime << '\n';
	}
}

void DemoDynamicFlight()
{
	Flight* flight = new Flight;
	flight->Departure = "Petersburg";
	flight->Destination = "Moscow";
	flight->MinutesFlightTime = 50;

	std::cout << "Flight: " << flight->Departure << " -> " << 
		flight->Destination
		<< " for " << flight->MinutesFlightTime << " minutes.\n";

	delete flight;
}

void DemoDynamicFlights()
{
	const int flightCount = 4;
	Flight* flights = new Flight[flightCount];

	flights[0].Departure = "Petersburg";
	flights[0].Destination = "Moscow";
	flights[0].MinutesFlightTime = 50;
	flights[1].Departure = "London";
	flights[1].Destination = "Moscow";
	flights[1].MinutesFlightTime = 90;
	flights[2].Departure = "Novosibirsk";
	flights[2].Destination = "Tomsk";
	flights[2].MinutesFlightTime = 30;
	flights[3].Departure = "Kemerovo";
	flights[3].Destination = "Kiev";
	flights[3].MinutesFlightTime = 50;

	std::cout << "Flight: " << flights[0].Departure << " -> " << flights[0].Destination
		<< " for " << flights[0].MinutesFlightTime << " minutes.\n";
	std::cout << "Flight: " << flights[1].Departure << " -> " << flights[1].Destination
		<< " for " << flights[1].MinutesFlightTime << " minutes.\n";
	std::cout << "Flight: " << flights[2].Departure << " -> " << flights[2].Destination
		<< " for " << flights[2].MinutesFlightTime << " minutes.\n";
	std::cout << "Flight: " << flights[3].Departure << " -> " << flights[3].Destination
		<< " for " << flights[3].MinutesFlightTime << " minutes.\n";

	FindShortestFlight(flights, flightCount);
	delete[] flights;
}

void FindShortestFlight(const Flight* flights, int count)
{
	if (count < 0)
	{
		throw std::exception("Exception: Negative array length");
	}
	
	if (count <= 0)
	{
		std::cout << "Array has no flights\n";
		return;
	}

	int shorterFlightIndex = 0;
	for (int i = 0; i < count; ++i)
	{
		if (flights[shorterFlightIndex].MinutesFlightTime 
	> flights[i].MinutesFlightTime)
		{
			shorterFlightIndex = i;
		}
	}

	cout << "Flight with the shorter flight time:\n\t";
	cout << "Flight: " << flights[shorterFlightIndex].Departure << " -> "
		<< flights[shorterFlightIndex].Destination << " for "
		<< flights[shorterFlightIndex].MinutesFlightTime << " minutes.\n";
}