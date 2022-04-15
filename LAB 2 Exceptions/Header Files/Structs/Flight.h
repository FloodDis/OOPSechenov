#pragma once
#include <iostream>
using namespace std;

// 2.2.2 Создание структур
// Задача:
// Описать структуру рейс самолёта

/// <summary>
/// Рейс
/// </summary>
struct Flight
{
	/// <summary>
	/// Пункт вылета
	/// </summary>
	string Departure;

	/// <summary>
	/// Пункт назначения
	/// </summary>
	string Destination;

	/// <summary>
	/// Время полета в минутах
	/// </summary>
	int MinutesFlightTime;
};

void DemoFlight();

// 2.2.6 Структуры и динамическая память

// Задача 1:
// Написать функцию в который динамически выделяется память под выше описанную структуру

/// <summary>
/// Функция по демонстрации работы со структурой Flight, созданной в статической памяти
/// </summary>
void DemoDynamicFlight();

// Задача 2:
// Написать функцию аналогичную выше, но выделяющую память под массив выше описанной структуры

/// <summary>
/// Функция по демонстрации работы со структурой Flight, созданной в динамической памяти
/// </summary>
void DemoDynamicFlights();

// Задача 3:
// Написать функцию для поиска самого короткого рейса в массиве

/// <summary>
/// Поиск самого короткого рейса по продолжительности
/// </summary>
/// <param name="flights">Указатель на первый объект массива Flight</param>
/// <param name="count">Количество элементов в массиве</param>
void FindShortestFlight(const Flight* flights, int count);