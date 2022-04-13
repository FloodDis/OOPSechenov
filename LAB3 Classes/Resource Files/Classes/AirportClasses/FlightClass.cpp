#include "../../../Header Files/Classes/AirportClasses/FlightClass.h"

FlightClass::FlightClass(int number, string& departurePoint,
	string& destinationPoint, TimeClass departureTime,
	TimeClass arrivalTime)
{
	TimeClass();
	if (number < 0)
	{
		// TODO: зачем в две строки? +
		throw exception("Number must be positive\n");
	}
	_number = number;
	_departurePoint = departurePoint;
	_destinationPoint = destinationPoint;
	_departureTime = departureTime;
	_arrivalTime = arrivalTime;
}

FlightClass::FlightClass()
{

}

void FlightClass::SetNumber(int number)
{
	if (number < 0)
	{
		// TODO: зачем в две строки? +
		throw exception("Number must be positive\n");
	}
	_number = number;
}

void FlightClass::SetDeparturePoint(string& departurePoint)
{
	_departurePoint = departurePoint;
}

void FlightClass::SetDestinationPoint(string& destinationPoint)
{
	_destinationPoint = destinationPoint;
}

void FlightClass::SetDepartureTime(TimeClass departureTime)
{
	_departureTime = departureTime;
}

void FlightClass::SetArrivalTime(TimeClass arrivalTime)
{
	_arrivalTime = arrivalTime;
}

int FlightClass::GetNumber()
{
	return _number;
}

string& FlightClass::GetDeparturePoint()
{
	return _departurePoint;
}

string& FlightClass::GetDestinationPoint()
{
	return _destinationPoint;
}

TimeClass FlightClass::GetDepartureTime()
{
	return _departureTime;
}

TimeClass FlightClass::GetArrivalTime()
{
	return _arrivalTime;
}

long int GetTimeInMinutes(TimeClass time)
{
	long int timeInMinutes = 0;
	timeInMinutes += time.GetYear() * 12 * 30 * 24 * 60;
	timeInMinutes += time.GetMonth() * 30 * 24 * 60;
	timeInMinutes += time.GetDay() * 24 * 60;
	timeInMinutes += time.GetHour() * 60;
	timeInMinutes += time.GetMinutes();
	return timeInMinutes;
}

int FlightClass::GetFlightTimeMinutes()
{
	// TODO: избавиться от дублирования +
	long int arrivalTimeInMinutes = GetTimeInMinutes(_arrivalTime);
	long int departureTimeInMinutes = GetTimeInMinutes(_departureTime);
	int flightDuration = arrivalTimeInMinutes - departureTimeInMinutes;
	return flightDuration;
}