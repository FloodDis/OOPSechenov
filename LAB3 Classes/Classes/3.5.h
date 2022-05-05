#pragma once
#include "../Classes/GeometryClasses/PointClass.h"
#include "../Classes/GeometryClasses/RectangleClass.h"
#include "../Classes/AirportClasses/TimeClass.h"
#include "../Classes/AirportClasses/FlightClass.h"
#include "../Classes/MusicClasses/SongClass.h"
#include "../Classes/MusicClasses/AlbumClass.h"
#include "../Classes/MusicClasses/BandClass.h"
using namespace std;

// Задание 3.5.2
/// <summary>
///	Функция демонстрации класса RectangleClass
/// </summary>
void DemoRectangleWithPointClass();

/// <summary>
///	Функция вывода класса RectangleClass на экран
/// </summary>
/// <param name = "rectangle">Экземпляр класса RectangleClass</param>
void WriteRectangleWithPointClass(RectangleClass rectangle);

/// <summary>
///	Функция демонстрации класса FlightClass и TimeClass
/// </summary>
void DemoFlightWithTimeClass();

/// <summary>
///	Функция демонстрации вывода класса FlightClass на экран
/// </summary>
/// <param name = "flight">Экземпляр класса FlightClass</param>
void WriteFlightClass(FlightClass& flight);

/// <summary>
/// Функция вывода времени 
/// </summary>
/// <param name="time">Время отправления</param>
void WriteTime(TimeClass time);

/// <summary>
///	Функция демонстрации класса BandClass
/// </summary>
void DemoBandClass();