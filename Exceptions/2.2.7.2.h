#pragma once
#include <iostream>
#include "Rectangle.h"
#include "Flight.h"
#include "Film.h"
#include "Time.h"
using namespace std;

/// <summary>
/// Функция создания структуры Rectangle
/// </summary>
/// <param name="length">Длина прямоугольника</param>
/// <param name="width">Ширина прямоугольника</param>
/// <param name="color">Цвет прямоугольника</param>
/// <returns>
/// Указатель на структуру Rectangle
/// </returns>
Rectangle* MakeRectangle(int length, int width, string color);

/// <summary>
/// Функция создания структуры Flight
/// </summary>
/// <param name="departurePoint">Пункт отправления</param>
/// <param name="destination">Пункт прибытия</param>
/// <param name="flightTime">Время полета в минутах</param>
/// <returns>
/// Указатель на структуру Flight
/// </returns>
Flight* MakeFlight(string departurePoint,
	string destination, int flightTime);

/// <summary>
/// Функция создания структуры Film
/// </summary>
/// <param name="name">Название фильма</param>
/// <param name="duration">Длительность в минутах</param>
/// <param name="yearOfRelease">Год выпуска</param>
/// <param name="genre">Жанр фильма</param>
/// <returns>
/// Указатель на структуру Film
/// </returns>
Film* MakeFilm(string name,
	int duration, int yearOfRelease, string genre, double rate);

/// <summary>
/// Функция создания структуры Time
/// </summary>
/// <param name="hours">Часы</param>
/// <param name="minutes">Минуты</param>
/// <param name="seconds">Секунды</param>
/// <returns>
/// Указатель на структуру Time
/// </returns>
Time* MakeTime(int hours, int minutes, int seconds);

/// <summary>
/// Функция демонстрации работы
/// методов создания структур
/// </summary>
void DemoMakeStructures();