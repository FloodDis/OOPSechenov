#pragma once
#include <iostream>
#include "Rectangle.h"
#include "Flight.h"
#include "Film.h"
#include "Time.h"
#include "2.2.7.2.h"
using namespace std;

/// <summary>
/// Функция копирования структуры Rectangle
/// </summary>
/// <param name="rectangle">
/// Копируемый экземпляр структуры Rectangle
/// </param>
/// <returns>Указатель на скопированную структуру Rectangle</returns>
Rectangle* CopyRectangle(Rectangle* rectangle);

/// <summary>
/// Функция копирования структуры Flight
/// </summary>
/// <param name="flight">Копируемый экземпляр структуры Flight</param>
/// <returns>Указатель на скопированную структуру Flight</returns>
Flight* CopyFlight(Flight* flight);

/// <summary>
/// Функция копирования структуры Film
/// </summary>
/// <param name="flight">Копируемый экземпляр структуры Film</param>
/// <returns>Указатель на скопированную структуру Film</returns>
Film* CopyFilm(Film* film);

/// <summary>
/// Функция копирования структуры Time
/// </summary>
/// <param name="flight">Копируемый экземпляр структуры Time</param>
/// <returns>Указатель на скопированную структуру Time</returns>
Time* CopyTime(Time* time);

/// <summary>
/// Функция демонстрации методов
/// копирования структур
/// </summary>
void DemoCopyStructures();