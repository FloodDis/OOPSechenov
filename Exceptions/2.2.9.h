#pragma once
#include <iostream>
#include "2.2.8.1.h"
using namespace std;

//Задание 2.2.9.1
/// <summary>
/// Фильм
/// </summary>
struct FilmEnum
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
	Genre Genre;
};

//Задание 2.2.9.2
/// <summary>
/// Функция демонстрации
/// структуры FilmEnum
/// </summary>
void DemoMovieWithGenre();

//Задание 2.2.9.3
/// <summary>
/// Функция создания
/// структуры FilmEnum
/// </summary>
/// <param name="name">Название фильма</param>
/// <param name="duration">Продолжительность в минутах</param>
/// <param name="yearOfRelease">Год выпуска</param>
/// <param name="genre">Жанр</param>
/// <returns>
/// Экземпляр структуры FilmEnum
/// </returns>
FilmEnum* MakeMovieRemastered(string name,int duration,
	int yearOfRelease, Genre genre);

/// <summary>
/// Функция подсчета кол-ва
/// элементов FilmEnum определенного
/// жанра
/// </summary>
int CountMoviesByGenre(FilmEnum* movies, int count, Genre findGenre);