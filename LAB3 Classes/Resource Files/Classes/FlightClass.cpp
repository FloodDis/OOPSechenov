#include "../../Header Files/Classes/FlightClass.h"

FlightClass::FlightClass(int number, string departurePoint,
	string destinationPoint, TimeClass departureTime,
	TimeClass arrivalTime)
{
	TimeClass();
	if (number < 0)
	{
		exception error;
		throw error;
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
		exception error;
		throw error;
	}
	_number = number;
}

void FlightClass::SetDeparturePoint(string departurePoint)
{
	_departurePoint = departurePoint;
}

void FlightClass::SetDestinationPoint(string destinationPoint)
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

string FlightClass::GetDeparturePoint()
{
	return _departurePoint;
}

string FlightClass::GetDestinationPoint()
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

int FlightClass::GetFlightTimeMinutes()
{
	long int arrivalTimeInMinutes = 0;
	arrivalTimeInMinutes += _arrivalTime.GetYear() * 12 * 30 * 24 * 60;
	arrivalTimeInMinutes += _arrivalTime.GetMonth() * 30 * 24 * 60;
	arrivalTimeInMinutes += _arrivalTime.GetDay() * 24 * 60;
	arrivalTimeInMinutes += _arrivalTime.GetHour() * 60;
	arrivalTimeInMinutes += _arrivalTime.GetMinutes();

	long int departureTimeInMinutes = 0;
	departureTimeInMinutes += _departureTime.GetYear() * 12 * 30 * 24 * 60;
	departureTimeInMinutes += _departureTime.GetMonth() * 30 * 24 * 60;
	departureTimeInMinutes += _departureTime.GetDay() * 24 * 60;
	departureTimeInMinutes += _departureTime.GetHour() * 60;
	departureTimeInMinutes += _departureTime.GetMinutes();

	int flightDuration = arrivalTimeInMinutes - departureTimeInMinutes;
	return flightDuration;
}