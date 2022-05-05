#pragma once
#include <iostream>
using namespace std;

// 2.2.2 Создание структур
// Задача: Описать структуру учебная дисциплина

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
