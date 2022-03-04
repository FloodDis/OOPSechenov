#pragma once
#include "Flight.h"
#include <iostream>
using namespace std;

/// <summary>
/// Функция, показывающая работу с динамической
/// памятью и указателями на примере массива структур
/// Flight
/// </summary>
void DemoDynamicFlight();

/// <summary>
/// Функция присваивания кажому полю
/// структуры Flght значения
/// </summary>
/// <param name="departurePoint">Место отправления</param>
/// <param name="destination">Место прибытия</param>
/// <param name="flightTime">Время полета в минутах</param>
Flight ReadFlight(string departurePoint, 
	string destination, int flightTime);