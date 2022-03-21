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