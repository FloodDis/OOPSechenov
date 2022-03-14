#include "3.3.h"

Point* MakePoint(double x, double y)
{
	Point* newPoint = new Point;
	newPoint->X = x;
	newPoint->Y = y;
	return newPoint;
}

void SetX(Point*& point, double x)
{
	point->X = x;
}

void SetY(Point*& point, double y)
{
	point->Y = y;
}

Rectangle* MakeRectangle(double width, double length, double x, double y)
{
	if (width < 0 || length < 0)
	{
		exception error;
		throw error;
	}
	Rectangle* rectangle = new Rectangle;
	rectangle->Length = length;
	rectangle->Width = width;
	rectangle->Center = MakePoint(x, y);
	return rectangle;
}

void SetWidth(Rectangle& rectangle, double width)
{
	if (width < 0)
	{
		exception error;
		throw error;
	}
	rectangle.Width = width;
}

void SetLength(Rectangle& rectangle, double length)
{
	if (length < 0)
	{
		exception error;
		throw error;
	}
	rectangle.Length = length;
}

void SetCenter(Rectangle& rectangle, double x, double y)
{
	rectangle.Center = MakePoint(x, y);
}

void DemoRectangleWithPoint()
{
	srand(time(nullptr));
	Rectangle* array = new Rectangle[5];
	for (int i = 0; i < 5; i++)
	{
		int width = rand() % 100;
		SetWidth(array[i], width);
		int length = rand() % 100;
		SetLength(array[i], length);
		int x = rand() % 100 - 50;
		int y = rand() % 100 - 50;
		SetCenter(array[i], x, y);
	}
	for (int i = 0; i < 5; i++)
	{
		WriteRectangleWithPoint(array[i]);
	}
	int xCenter = 0;
	int yCenter = 0;
	for (int i = 0; i < 5; i++)
	{
		xCenter += array[i].Center->X;
		yCenter += array[i].Center->Y;
	}
	cout << "Xcenter = " << xCenter / 5
		<< "; Ycenter = " << yCenter / 5 << "\n";
	delete[] array;
}

void WriteRectangleWithPoint(Rectangle& rectangle)
{
	cout << "X = " << rectangle.Center->X
		<< "; Y = " << rectangle.Center->Y
		<< "; Length = " << rectangle.Length
		<< "; Width = " << rectangle.Width << "\n";
}

Time* MakeTime(int year, int month, int day, int hour, int minutes)
{
	Time* newTime = new Time;
	newTime->Year = year;
	newTime->Day = day;
	newTime->Hour = hour;
	newTime->Minutes = minutes;
	newTime->Month = month;
	return newTime;
}

void SetYear(Time*& time, int year)
{
	if (year < 0)
	{
		throw "Wrong data\n";
	}
	time->Year = year;
}

void SetMonth(Time*& time, int month)
{
	if (month < 0 || month>12)
	{
		throw "Wrong data\n";
	}
	time->Month = month;
}

void SetDay(Time*& time, int day)
{
	if (day < 0 || day>30)
	{
		throw "Wrong data\n";
	}
	time->Day = day;
}

void SetHour(Time*& time, int hour)
{
	if (hour < 0 || hour>23)
	{
		throw "Wrong data\n";
	}
	time->Hour = hour;
}

void SetMinutes(Time*& time, int minutes)
{
	if (minutes < 0 || minutes>60)
	{
		throw "Wrong data\n";
	}
	time->Minutes = minutes;
}

Flight* MakeFlight(int number, string departurePoint,
	string destinationPoint, Time departureTime, Time arrivalTime)
{
	Flight* newFlight = new Flight;
	newFlight->Number = number;
	newFlight->ArrivalTime = arrivalTime;
	newFlight->DeparturePoint = departurePoint;
	newFlight->DestinationPoint = destinationPoint;
	newFlight->DepartureTime = departureTime;
	return newFlight;
}

void SetNumber(Flight*& flight, int number)
{
	flight->Number = number;
}

void SetDeparturePoint(Flight*& flight, string departurePoint)
{
	flight->DeparturePoint = departurePoint;
}

void SetDestinationPoint(Flight*& flight, string destinationPoint)
{
	flight->DestinationPoint = destinationPoint;
}

void SetDepartureTime(Flight*& flight, Time departureTime)
{
	if (!IsArrivalTimeLater(flight->ArrivalTime, departureTime))
	{
		exception error;
		throw error;
	}
	flight->DepartureTime = departureTime;
}

void SetArrivalTime(Flight*& flight, Time arrivalTime)
{
	if (!IsArrivalTimeLater(arrivalTime, flight->DepartureTime))
	{
		exception error;
		throw error;
	}
	flight->ArrivalTime;
}

void DemoFlightWithTime()
{
	srand(time(nullptr));
	Flight* array = new Flight[5];
	for (int i = 0; i < 5; i++)
	{
		Time arrivalTime = *MakeTime(1998, 10, 25, 10, 15);
		Time departureTime = *MakeTime(1998, 10, 24, 15, 23);
		array[i] = *MakeFlight
		(rand() % 1000, "Tomsk", "Moscow", departureTime, arrivalTime);
	}
	for (int i = 0; i < 5; i++)
	{
		WriteFlight(array[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "Flight duration of " << i + 1 << " flight is "
			<< GetFlightTimeMinutes(array[i])
			<< " minutes\n";
	}
}

bool IsArrivalTimeLater(Time arrivalTime, Time departureTime)
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

void WriteFlight(Flight& flight)
{
	cout << "S" << flight.Number << " " << flight.DeparturePoint
		<< "-" << flight.DestinationPoint << " Departure "
		<< flight.DepartureTime.Month << "."
		<< flight.DepartureTime.Day << " " << flight.DepartureTime.Hour
		<< ":" << flight.DepartureTime.Minutes << " Arrival "
		<< flight.ArrivalTime.Month << "."
		<< flight.ArrivalTime.Day << " " << flight.ArrivalTime.Hour
		<< ":" << flight.ArrivalTime.Minutes << "\n";
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