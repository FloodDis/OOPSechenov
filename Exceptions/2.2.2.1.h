#pragma once
#include <iostream>
using namespace std;

// TODO: каждая структура в своём файле
/// <summary>
/// Прямоугольник
/// </summary>
struct Rectangle
{
	/// <summary>
	/// Длина
	/// </summary>
	double Length;

	/// <summary>
	/// Ширина
	/// </summary>
	double Width;

	/// <summary>
	/// Цвет
	/// </summary>
	string Color;
};

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

/// <summary>
/// Фильм
/// </summary>
struct Film
{
	/// <summary>
	/// Название
	/// </summary>
	string Name;

	/// <summary>
	/// Продолжительность в минутах
	/// </summary>
	int Duration;

	/// <summary>
	/// Год выпуска
	/// </summary>
	int YearOfRelease;

	/// <summary>
	/// Жанр
	/// </summary>
	string Genre;
};

/// <summary>
/// Время
/// </summary>
struct Time
{
	/// <summary>
	/// Часы (от 0 до 23)
	/// </summary>
	int Hours;

	/// <summary>
	/// Минуты (от 0 до 60)
	/// </summary>
	int Minutes;

	/// <summary>
	/// Секунды (от 0 до 60)
	/// </summary>
	int Seconds;
};

///<summary>
///Демонстрация работы структур
///</summary>
void DemoStructures1();