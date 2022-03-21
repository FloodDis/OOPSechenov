#pragma once
#include <iostream>
#include "Time.h"
using namespace std;

// Задание 3.3.8 (1-ая часть)
/// <summary>
/// Авиарейс
/// </summary>
struct Flight
{
	/// <summary>
	/// Номер рейса
	/// </summary>
	int Number;

	/// <summary>
	/// Пункт отправления
	/// </summary>
	string DeparturePoint;

	/// <summary>
	/// Пункт прибытия
	/// </summary>
	string DestinationPoint;

	/// <summary>
	/// Время отправления
	/// </summary>
	Time DepartureTime;

	/// <summary>
	/// Время прибытия
	/// </summary>
	Time ArrivalTime;
};