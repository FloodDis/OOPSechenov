#pragma once
#include <iostream>
#include <exception>
#include "Geometry/Point.h"
#include "Geometry/Rectangle.h"
#include "Airport/Time.h"
#include "Airport/Flight.h"
using namespace std;

// Задание 3.3.3
/// <summary>
/// Функция демонстрации 
/// структуры Rectangle
/// </summary>
void DemoRectangleWithPoint();

// Задание 3.3.4
/// <summary>
/// Функция вывода полей структуры
/// Rectangle на экран
/// </summary>
/// <param name="rectangle">Экземпляр структуры Rectangle</param>
void WriteRectangleWithPoint(Rectangle& rectangle);

// Задание 3.3.9
/// <summary>
/// Функция демонстрации
/// структуры Flight
/// </summary>
void DemoFlightWithTime();

// Задание 3.3.10
/// <summary>
/// Функция вывода структуры flight
/// на экран
/// </summary>
/// <param name ="flight">Экземпляр структуры Flight</param>
void WriteFlight(Flight& flight);