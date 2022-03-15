#pragma once
#include <iostream>
using namespace std;

//Задание 3.4.1
/// <summary>
/// Жанр песни
/// </summary>
enum Genre
{
	/// <summary>
	/// Поп
	/// </summary>
	Pop=1,

	/// <summary>
	/// Рэп
	/// </summary>
	Rap,

	/// <summary>
	/// Рок
	/// </summary>
	Rock,

	/// <summary>
	/// Современный ритм-н-блюз
	/// </summary>
	RnB,

	/// <summary>
	/// Фолк
	/// </summary>
	Folk
};

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