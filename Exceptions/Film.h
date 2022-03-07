#pragma once
#include <iostream>
using namespace std;

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
	
	/// <summary>
	/// Рейтинг фильма
	/// </summary>
	double Rate;
};