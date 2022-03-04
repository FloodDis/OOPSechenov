#pragma once
#include "Flight.h"
#include "2.2.6.2.h"

/// <summary>
/// Функция присваивания кажому полю
/// структуры Flght значения
/// </summary>
/// <param name="flights">Массив структур Flight</param>
/// <param name="count">Кол-во элементов в массиве</param>
void FindShortestFlight(Flight* flights, int count);

/// <summary>
/// Функция демонстрации работы
/// метода FindShortestFlight
/// </summary>
void DemoFindShortest();