#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Рейс
/// </summary>
struct Flight
{
	/// <summary>
	/// Пункт вылета
	/// </summary>
	string DeparturePoint;

	/// <summary>
	/// Пункт назначения
	/// </summary>
	string Destination;

	/// <summary>
	/// Время полета в минутах
	/// </summary>
	int FlightTime;
};