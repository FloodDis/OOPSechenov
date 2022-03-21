#pragma once
#include "PointClass.h"
#include "RectangleClass.h"
#include "TimeClass.h"
#include "FlightClass.h"
#include "SongClass.h"
#include "AlbumClass.h"
#include "BandClass.h"
using namespace std;

// Задание 3.5.2
/// <summary>
///	Функция демонстрации класса RectangleClass
/// </summary>
void DemoRectangleWithPointClass();

/// <summary>
///	Функция вывода класса RectangleClass на экран
/// </summary>
void WriteRectangleWithPointClass(RectangleClass rectangle);

/// <summary>
///	Функция демонстрации класса FlightClass и TimeClass
/// </summary>
void DemoFlightWithTimeClass();

/// <summary>
///	Функция демонстрации вывода класса FlightClass на экран
/// </summary>
void WriteFlightClass(FlightClass& flight);

/// <summary>
///	Функция демонстрации класса BandClass
/// </summary>
void DemoBandClass();