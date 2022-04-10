#include "../../Header Files/Agregation/3.3.h"

// TODO: утечка памяти
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

// TODO: утечка памяти в функции
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