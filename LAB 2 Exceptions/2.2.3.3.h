#pragma once
#include <iostream>
#include "Rectangle.h"
#include "Flight.h"
#include "Film.h"
#include "Time.h"
using namespace std;

/// <summary>
/// Функция демонстрации
/// массива структур Rectangle
/// </summary>
/// <param name="width">Ширина</param>
/// <param name="length">Длина</param>
/// <param name="size">Размер массива</param>
void DemoRectangle(int width, int length, int size);

/// <summary>
/// Функция демонстрации
/// массива структур Flight
/// </summary>
/// <param name="departurePoint">Название пункта отправления</param>
/// <param name="destination">Название пункта назначения</param>
/// <param name="size">Размер массива</param>
void DemoFlight(string departurePoint, string destination, int size);

/// <summary>
/// Функция демонстрации
/// массива структур Film
/// </summary>
/// <param name="year">Год выпуска</param>
/// <param name="name">Название фильма</param>
/// <param name="size">Размер массива</param>
void DemoMovie(int year, string name, int size);

/// <summary>
/// Функция демонстрации
/// массива структур Time
/// </summary>
/// <param name="hours">Часы</param>
/// <param name="minutes">Минуты</param>
/// <param name="seconds">Секунды</param>
/// <param name="size">Размер массива</param>
void DemoTime(int hours, int minutes, int seconds, int size);

/// <summary>
/// Функция демонстрации методов
/// демонстрации массивов структур
/// </summary>
void DemoStructures5();