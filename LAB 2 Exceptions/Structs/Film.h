#pragma once
#include <iostream>
using namespace std;

// 2.2.2 Создание структур
// Задача: Описать структуру фильм

/// <summary>
/// Фильм
/// </summary>
struct Film
{
	/// <summary>
	/// Название
	/// </summary>
	string Title;

	/// <summary>
	/// Год выпуска
	/// </summary>
	int ReleaseYear;

	/// <summary>
	/// Жанр
	/// </summary>
	string Genre;
	
	/// <summary>
	/// Рейтинг фильма
	/// </summary>
	double Rating;
};

// 2.2.7 Функции-конструкторы

// Задание 1:
// Создать функцию-конструктор для выше описанной структуры

/// <summary>
/// Конструктор структуры Film
/// </summary>
/// <param name="title">Название</param>
/// <param name="genre">Жанр фильма</param>
/// <param name="year">Год выхода фильма</param>
/// <param name="rate">Оценка фильма</param>
/// <returns>Указатель на объект Movie</returns>
Film* MakeFilm(string& title, string& genre, int year, double rate);

// Задание 2:
// Написать функцию копирования

/// <summary>
/// Функция по копированию фильма
/// </summary>
/// <param name="film">Фильм описание которого надо скопировать</param>
/// <returns>Указатель на созданный объект по подобию заданного</returns>
Film* CopyFilm(Film& film);

// Задание 2:
// Создать функцию вызывающую выше описанные функции

/// <summary>
/// Демонстрация работы структуры Film
/// </summary>
void DemoFilm();

/// <summary>
/// Вывод описания фильма в консоль
/// </summary>
/// <param name="film">Фильм описание которого нужно вывести</param>
void WriteFilm(Film& film);