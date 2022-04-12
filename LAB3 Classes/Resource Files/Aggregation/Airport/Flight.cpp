#include "../../../Header Files/Agregation/Airport/Flight.h"

Flight* MakeFlight(int number, string& departurePoint,
	string& destinationPoint, Time departureTime, Time arrivalTime)
{
	Flight* newFlight = new Flight;
	newFlight->Number = number;
	newFlight->ArrivalTime = arrivalTime;
	newFlight->DeparturePoint = departurePoint;
	newFlight->DestinationPoint = destinationPoint;
	newFlight->DepartureTime = departureTime;
	return newFlight;
}

void SetNumber(Flight& flight, int number)
{
	flight.Number = number;
}

void SetDeparturePoint(Flight& flight, string& departurePoint)
{
	flight.DeparturePoint = departurePoint;
}

void SetDestinationPoint(Flight& flight, string& destinationPoint)
{
	flight.DestinationPoint = destinationPoint;
}

void SetDepartureTime(Flight& flight, Time departureTime)
{
	if (!IsArrivalTimeLater(flight.ArrivalTime, departureTime))
	{
		// TODO: зачем в две строки? +
		throw exception();
	}
	flight.DepartureTime = departureTime;
}

void SetArrivalTime(Flight& flight, Time arrivalTime)
{
	if (!IsArrivalTimeLater(arrivalTime, flight.DepartureTime))
	{
		// TODO: зачем в две строки? +
		throw exception();
	}
	flight.ArrivalTime;
}

// TODO: по ссылкам +
bool IsArrivalTimeLater(Time& arrivalTime, Time& departureTime)
{
	if (arrivalTime.Year > departureTime.Year)
	{
		return true;
	}
	else if (arrivalTime.Month > departureTime.Month)
	{
		return true;
	}
	else if (arrivalTime.Day > departureTime.Day)
	{
		return true;
	}
	else if (arrivalTime.Hour > departureTime.Hour)
	{
		return true;
	}
	else if (arrivalTime.Minutes > departureTime.Minutes)
	{
		return true;
	}
	return false;
}

int GetFlightTimeMinutes(Flight& flight)
{
	long int arrivalTimeInMinutes = 0;
	arrivalTimeInMinutes += flight.ArrivalTime.Year * 12 * 30 * 24 * 60;
	arrivalTimeInMinutes += flight.ArrivalTime.Month * 30 * 24 * 60;
	arrivalTimeInMinutes += flight.ArrivalTime.Day * 24 * 60;
	arrivalTimeInMinutes += flight.ArrivalTime.Hour * 60;
	arrivalTimeInMinutes += flight.ArrivalTime.Minutes;

	long int departureTimeInMinutes = 0;
	departureTimeInMinutes += flight.DepartureTime.Year * 12 * 30 * 24 * 60;
	departureTimeInMinutes += flight.DepartureTime.Month * 30 * 24 * 60;
	departureTimeInMinutes += flight.DepartureTime.Day * 24 * 60;
	departureTimeInMinutes += flight.DepartureTime.Hour * 60;
	departureTimeInMinutes += flight.DepartureTime.Minutes;

	int flightDuration = arrivalTimeInMinutes - departureTimeInMinutes;
	return flightDuration;
}