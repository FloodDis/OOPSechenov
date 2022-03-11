#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Маршрут общественного
/// транспорта
/// </summary>
struct Route
{
	/// <summary>
	/// Номер маршрута
	/// </summary>
	int Number;

	/// <summary>
	/// Средняя продолжительность
	/// маршрута в минутах
	/// </summary>
	int AverageDuration;

	/// <summary>
	/// Частота следования маршрута
	/// в минутах
	/// </summary>
	int Frequency;

	/// <summary>
	/// Остановки
	/// </summary>
	string* Stops;

	/// <summary>
	/// Кол-во остановок
	/// </summary>
	int StopsCount;
};

