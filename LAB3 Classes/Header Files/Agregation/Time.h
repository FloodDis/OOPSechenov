#pragma once
#include <iostream>
using namespace std;

// Задание 3.3.7 (1-ая часть)
/// <summary>
/// Время
/// </summary>
struct Time
{
	/// <summary>
	/// Год
	/// </summary>
	int Year;

	/// <summary>
	/// Месяц (не более 12)
	/// </summary>
	int Month;

	/// <summary>
	/// День (не более 30)
	/// </summary>
	int Day;

	/// <summary>
	/// Час (не более 24)
	/// </summary>
	int Hour;

	/// <summary>
	/// Минуты (не более 60)
	/// </summary>
	int Minutes;
};

// Задание 3.3.7 (2-ая часть)
/// <summary>
/// Конструктор структуры Time
/// </summary>
/// <param name="year">Год</param>
/// <param name="month">Месяц</param>
/// <param name="day">День</param>
/// <param name="hour">Час</param>
/// <param name="minutes">Минуты</param>
/// <returns>
/// Указатель на экземпляр инициализированной
/// структуры Time
/// </returns>
Time* MakeTime(int year, int month, int day, int hour, int minutes);

/// <summary>
/// Сеттер поля Year
/// структуры Time
/// </summary>
/// <param name="time">Экземпляр структуры Time</param>
/// <param name="year">Год</param>
void SetYear(Time*& time, int year);

/// <summary>
/// Сеттер поля Month
/// структуры Time
/// </summary>
/// <param name="time">Экземпляр структуры Time</param>
/// <param name="month">Месяц</param>
void SetMonth(Time*& time, int month);

/// <summary>
/// Сеттер поля Day
/// структуры Time
/// </summary>
/// <param name="time">Экземпляр структуры Time</param>
/// <param name="day">День</param>
void SetDay(Time*& time, int day);

/// <summary>
/// Сеттер поля Hour
/// структуры Time
/// </summary>
/// <param name="time">Экземпляр структуры Time</param>
/// <param name="hour">Часы</param>
void SetHour(Time*& time, int hour);

/// <summary>
/// Сеттер поля Minutes
/// структуры Time
/// </summary>
/// <param name="time">Экземпляр структуры Time</param>
/// <param name="minutes">Минуты</param>
void SetMinutes(Time*& time, int minutes);