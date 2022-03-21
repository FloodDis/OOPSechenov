#pragma once
#include <iostream>
#include "Rectangle.h"
#include "Flight.h"
#include "Film.h"
#include "Time.h"

/// <summary>
/// Функция демонстрации
/// структуры Rectangle
/// с шириной и длиной, вводимыми
/// с клавиатуры
/// </summary>
/// <param name="width">Ширина</param>
/// <param name="length">Длина</param>
void DemoRectangle(int width, int length);

/// <summary>
/// Функция демонстрации
/// структуры Flight
/// с местом отправления
/// и местом прилета, введенными с 
/// клавиатуры
/// </summary>
/// <param name="departurePoint">Название пункта отправления</param>
/// <param name="destination">Название пункта назначения</param>
void DemoFlight(string departurePoint,string destination);

/// <summary>
/// Функция демонстрации
/// структуры Film
/// с годом выпуска и названием, вводимыми
/// с клавиатуры
/// </summary>
/// <param name="year">Год выпуска фильма</param>
/// <param name="name">Название фильма</param>
void DemoMovie(int year, string name);

/// <summary>
/// Функция демонстрации 
/// структуры Time с часами, минутами
/// и секундами, введенными с клавиватуры
/// </summary>
/// <param name="hours">Часы</param>
/// <param name="minutes">Минуты</param>
/// <param name="seconds">Секунды</param>
void DemoTime(int hours, int minutes, int seconds);

/// <summary>
/// Функция демонстрации методов
/// демонстрации структур
/// </summary>
void DemoStructures4();