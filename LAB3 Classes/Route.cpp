#include "Route.h"

void ReadRouteFromConsole(Route& route)
{
	int number;
	int averageDuration;
	int frequency;
	int stopsCount;

	cout << "Enter number of route: ";
	cin >> number;
	if (number < 0)
	{
		throw exception("Wrong data!");
	}
	route.Number = number;

	cout << "Enter average duration: ";
	cin >> averageDuration;
	if (averageDuration < 0)
	{
		throw exception("Wrong data!");
	}
	route.AverageDuration = averageDuration;

	cout << "Enter frequency of route: ";
	cin >> frequency;
	if (frequency < 0)
	{
		throw exception("Wrong data!");
	}
	route.Frequency = frequency;

	cout << "Enter stops count: ";
	cin >> stopsCount;
	if (stopsCount < 0)
	{
		throw exception("Wrong data!");
	}
	route.StopsCount = stopsCount;
	route.Stops = new string[stopsCount];

	for (int i = 0; i < route.StopsCount; i++)
	{
		cout << "Enter stop ¹" << i + 1 << ": ";
		cin >> route.Stops[i];
	}
}

int FindRouteTo(Route* routes, int routeCount, string stop)
{
	for (int i = 0; i < routeCount; i++)
	{
		for (int j = 0; j < routes[i].StopsCount; j++)
		{
			if (routes[i].Stops[j] == stop)
			{
				return i;
			}
		}
	}
	return -1;
}

void WriteRouteFromConsole(Route& route)
{
	cout << "Route " << route.Number << " has average duration "
		<< route.AverageDuration << ", frequency " << route.Frequency
		<< " and " << route.StopsCount << " stops:\n";
	for (int i = 0; i < route.StopsCount; i++)
	{
		cout << " Stop " << i + 1 << ": " << route.Stops[i] << "\n";
	}
}
