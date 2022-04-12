#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Время
/// </summary>
class TimeClass
{
private:

	/// <summary>
	/// Год
	/// </summary>
	int _year;

	/// <summary>
	/// Месяц (от 1 до 12)
	/// </summary>
	int _month;

	/// <summary>
	/// День (от 1 до 30)
	/// </summary>
	int _day;

	/// <summary>
	/// Час (от 0 до 24)
	/// </summary>
	int _hour;

	/// <summary>
	/// Минуты (от 0 до 60)
	/// </summary>
	int _minutes;

public:

	/// <summary>
	/// Конструктор класса TimeClass
	/// </summary>
	/// <param name="year">Год</param>
	/// <param name="month">Месяц</param>
	/// <param name="day">День</param>
	/// <param name="hour">Час</param>
	/// <param name="minutes">Минуты</param>
	TimeClass(int year, int month, int day, int hour, int minutes);

	/// <summary>
	/// Конструктор класса TimeClass
	/// </summary>
	TimeClass();

	/// <summary>
	/// Сеттер поля _year
	/// </summary>
	/// <param name="year">Год</param>
	void SetYear(int year);

	/// <summary>
	/// Сеттер поля _month
	/// </summary>
	/// <param name="month">Месяц</param>
	void SetMonth(int month);

	/// <summary>
	/// Сеттер поля _day
	/// </summary>
	/// <param name="day">День</param>
	void SetDay(int day);

	/// <summary>
	/// Сеттер поля _hour
	/// </summary>
	/// <param name="hour">Час</param>
	void SetHour(int hour);

	/// <summary>
	/// Сеттер поля _minutes
	/// </summary>
	/// <param name="minutes">Минуты</param>
	void SetMinutes(int minutes);

	/// <summary>
	/// Геттер поля _year
	/// </summary>
	/// <returns>Год</returns>
	int GetYear();

	/// <summary>
	/// Геттер поля _month
	/// </summary>
	/// <returns>Месяц</returns>
	int GetMonth();

	/// <summary>
	/// Геттер поля _day
	/// </summary>
	/// <returns>День</returns>
	int GetDay();

	/// <summary>
	/// Геттер поля _hour
	/// </summary>
	/// <returns>Час</returns>
	int GetHour();

	/// <summary>
	/// Геттер поля _minutes
	/// </summary>
	/// <returns>Минуты</returns>
	int GetMinutes();
};