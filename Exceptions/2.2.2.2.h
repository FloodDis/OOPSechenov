#pragma once
#include <iostream>
using namespace std;

// TODO: каждая структура в своём файле
/// <summary>
/// Контакт в телефонной книге
/// </summary>
struct PhoneContact
{
	/// <summary>
	/// Имя
	/// </summary>
	string Name;

	/// <summary>
	/// Номер телефона
	/// </summary>
	string Number;

	/// <summary>
	/// Статус контакта(работа, семья)
	/// </summary>
	string Status;
};

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
	/// Название плейлиста, в котором
	/// находится песня
	/// </summary>
	string PlaylistName;
};

/// <summary>
/// Дисциплина в зачетной книжке
/// </summary>
struct Subject
{
	/// <summary>
	/// Название дисциплины
	/// </summary>
	string Name;

	/// <summary>
	/// Кол-во часов, отведенное
	/// на изучение дисциплины
	/// </summary>
	int Hours;

	/// <summary>
	/// Оценка по дисциплине
	/// </summary>
	int Score;
};

/// <summary>
/// Функция демонстрации
/// работы структур
/// </summary>
void DemoStructures2();