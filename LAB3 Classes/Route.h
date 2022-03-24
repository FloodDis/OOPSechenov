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

// Задание 3.2.6
/// <summary>
/// Функция чтения значений
/// структуры Route с клавиатуры
/// </summary>
/// <param name="route">Экземпляр структуры Route</param>
void ReadRouteFromConsole(Route& route);

/// <summary>
/// Функция поиска маршрута по
/// названию остановки
/// </summary>
/// <param name="routes">Массив структур Route</param>
/// <param name="routeCount">Кол-во элементов массива</param>
/// <param name="stop">Название остановки</param>
/// <returns>
/// Индекс найденного элемента, либо -1, если элемент
/// не найден
/// </returns>
int FindRouteTo(Route* routes, int routeCount, string stop);

/// <summary>
/// Функция вывода
/// структуры Route на экран
/// </summary>
/// <param name="route">Экземпляр структуры Route</param>
void WriteRouteFromConsole(Route& route);
