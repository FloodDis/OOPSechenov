#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Цвет
/// </summary>
enum Color
{
	/// <summary>
	/// Красный
	/// </summary>
	Red = 1,

	/// <summary>
	/// Оранжевый
	/// </summary>
	Orange,

	/// <summary>
	/// Желтый
	/// </summary>
	Yellow,

	/// <summary>
	/// Зеленый
	/// </summary>
	Green,

	/// <summary>
	/// Голубой
	/// </summary>
	Blue,

	/// <summary>
	/// Синий
	/// </summary>
	DarkBlue,

	/// <summary>
	/// Фиолетовый
	/// </summary>
	Purple
};

/// <summary>
/// День недели
/// </summary>
enum DayOfTheWeek
{
	/// <summary>
	/// Понедельник
	/// </summary>
	Monday = 1,

	/// <summary>
	/// Вторник
	/// </summary>
	Tuesday,

	/// <summary>
	/// Среда
	/// </summary>
	Wednesday,

	/// <summary>
	/// Четверг
	/// </summary>
	Thursday,

	/// <summary>
	/// Пятница
	/// </summary>
	Friday,

	/// <summary>
	/// Суббота
	/// </summary>
	Saturday,

	/// <summary>
	/// Воскресенье
	/// </summary>
	Sunday
};

/// <summary>
/// Жанр
/// </summary>
enum Genre
{
	/// <summary>
	/// Комедия
	/// </summary>
	Comedy = 1,

	/// <summary>
	/// Драма
	/// </summary>
	Drama,

	/// <summary>
	/// Триллер
	/// </summary>
	Triller,

	/// <summary>
	/// Боевик
	/// </summary>
	Action,

	/// <summary>
	/// Ужасы
	/// </summary>
	Horror,

	/// <summary>
	/// Блокбастер
	/// </summary>
	Blockbuster,
};

/// <summary>
/// Функция демонстрации перечислительных
/// типов
/// </summary>
void DemoEnums1();