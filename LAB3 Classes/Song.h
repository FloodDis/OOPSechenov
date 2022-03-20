#pragma once
#include <iostream>
#include "GenreEnum.h"
using namespace std;

//Задание 3.4.1

/// <summary>
/// Песня
/// </summary>
struct Song
{
	/// <summary>
	/// Название
	/// </summary>
	string Name;

	/// <summary>
	/// Длительность в минутах
	/// </summary>
	int Duration;

	/// <summary>
	/// Жанр
	/// </summary>
	Genre Genre;
};