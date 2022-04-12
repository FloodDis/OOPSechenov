#pragma once
#include <iostream>
#include "../../Classes/MusicClasses/GenreEnum.h"
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

// TODO: строки передавать по ссылке +
/// <summary>
/// Функция создания структуры
/// Song
/// </summary>
/// <param name = "name">Название песни</param>
/// <param name = "duration">Длительность в минутах</param>
/// <param name = "genre">Жанр песни</param>
/// <returns>
/// Указатель на инициализированную структуру Song
/// </returns>
Song* MakeSong(string& name, int duration, Genre genre);

// TODO: строки передавать по ссылке +
/// <summary>
/// Сеттер поля Name
/// структуры Song
/// </summary>
/// <param name = "song">Экземпляр структуры Song</param>
/// <param name = "name">Название</param>
void SetNameSong(Song& song, string& name);

/// <summary>
/// Сеттер поля Duration
/// структуры Song
/// </summary>
/// <param name = "song">Экземпляр структуры Song</param>
/// <param name = "duration">Длительность песни в минутах</param>
void SetDuration(Song& song, int duration);

/// <summary>
/// Сеттер поля Genre
/// структуры Song
/// </summary>
/// <param name = "song">Экземпляр структуры Song</param>
/// <param name = "genre">Жанр песни</param>
void SetGenre(Song& song, Genre genre);