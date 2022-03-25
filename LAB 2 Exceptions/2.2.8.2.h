#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Форма обучения студента
/// </summary>
enum FormOfStudy
{
	/// <summary>
	/// Очное
	/// </summary>
	FullTime = 1,

	/// <summary>
	/// Заочное
	/// </summary>
	PartTime,

	/// <summary>
	/// Вечернее
	/// </summary>
	Evening,

	/// <summary>
	/// Дистанционное
	/// </summary>
	Distant
};

/// <summary>
/// Производители смартфонов
/// </summary>
enum SmartphoneManufacturers
{
	/// <summary>
	/// Компания Apple
	/// </summary>
	Apple=1,

	/// <summary>
	/// Компания Samsung
	/// </summary>
	Samsung,

	/// <summary>
	/// Компания Xiaomi
	/// </summary>
	Xiaomi,

	/// <summary>
	/// Компания Oppo
	/// </summary>
	Oppo
};

/// <summary>
/// Время года
/// </summary>
enum TimeOfTheYear
{
	/// <summary>
	/// Зима
	/// </summary>
	Winter = 1,

	/// <summary>
	/// Весна
	/// </summary>
	Spring,

	/// <summary>
	/// Лето
	/// </summary>
	Summer,

	/// <summary>
	/// Осень
	/// </summary>
	Autumn
};

/// <summary>
/// Функция демонстрации
/// работы пречеслительных типов
/// </summary>
void DemoEnums2();