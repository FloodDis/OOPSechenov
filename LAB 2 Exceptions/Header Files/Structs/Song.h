#pragma once
#include <iostream>
using namespace std;

// 2.2.2 Создание структур
// Задача: Описать структуру песня

/// <summary>
/// Песня в плеере
/// </summary>
struct Song
{
	/// <summary>
	/// Название песни
	/// </summary>
	string SongName;

	/// <summary>
	/// Длительность в минутах
	/// </summary>
	int Duration;

	/// <summary>
	/// Продолжительность песни в минутах
	/// </summary>
	int DurationInMinutes;
};