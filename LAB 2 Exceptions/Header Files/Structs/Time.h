#pragma once
#include <iostream>
using namespace std;

// 2.2.2 Создание структур
// Задача: Описать структуру время

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