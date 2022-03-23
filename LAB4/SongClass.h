#pragma once
#include <iostream>
#include "GenreEnum.h"
using namespace std;

/// <summary>
/// Песня
/// </summary>
class SongClassFix
{
private:

	/// <summary>
	/// Название песни
	/// </summary>
	string _name;

	/// <summary>
	/// Длительность в минутах
	/// </summary>
	int _duration;

	/// <summary>
	/// Жанр песни
	/// </summary>
	Genre _genre;

public:

	/// <summary>
	/// Конструктор класса SongClassFix
	/// </summary>
	SongClassFix();

	/// <summary>
	/// Конструктор класса SongClassFix
	/// </summary>
	/// <param name="name">Название песни</param>
	/// <param name="duration">Длительность в минутах</param>
	/// <param name="genre">Жанр песни</param>
	SongClassFix(string name, int duration, Genre genre);

	/// <summary>
	/// Сеттер поля _name
	/// </summary>
	/// <param name="name">Название песни</param>
	void SetName(string name);

	/// <summary>
	/// Сеттер поля _duration
	/// </summary>
	/// <param name="duration">Длительность в минутах</param>
	void SetDuration(int duration);

	/// <summary>
	/// Сеттер поля _genre
	/// </summary>
	/// <param name="genre">Жанр песни</param>
	void SetGenre(Genre genre);

	/// <summary>
	/// Геттер поля _name
	/// </summary>
	/// <returns>Название песни</returns>
	string GetName();

	/// <summary>
	/// Геттер поля _duration
	/// </summary>
	/// <returns>Длительность в минутах</returns>
	int GetDuration();

	/// <summary>
	/// Геттер поля _genre
	/// </summary>
	/// <returns>Жанр песни</returns>
	Genre GetGenre();
};