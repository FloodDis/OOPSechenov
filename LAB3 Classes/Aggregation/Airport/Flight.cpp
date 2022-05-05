#include "Flight.h"

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
		throw
			exception("Arrival time must be greater than departure time\n");
	}
	flight.DepartureTime = departureTime;
}

void SetArrivalTime(Flight& flight, Time arrivalTime)
{
	if (!IsArrivalTimeLater(arrivalTime, flight.DepartureTime))
	{
		// TODO: зачем в две строки? +
		throw 
			exception("Arrival time must be greater than departure time\n");
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

long int GetTimeInMinutes(Time& time)
{
	long int timeInMinutes = 0;
	timeInMinutes += time.Year * 12 * 30 * 24 * 60;
	timeInMinutes += time.Month * 30 * 24 * 60;
	timeInMinutes += time.Day * 24 * 60;
	timeInMinutes += time.Hour * 60;
	timeInMinutes += time.Minutes;
	return timeInMinutes;
}

int GetFlightTimeMinutes(Flight& flight)
{
	long int arrivalTimeInMinutes = GetTimeInMinutes(flight.ArrivalTime);
	long int departureTimeInMinutes = GetTimeInMinutes(flight.DepartureTime);
	int flightDuration = arrivalTimeInMinutes - departureTimeInMinutes;
	return flightDuration;
}