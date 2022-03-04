#pragma once
#include "Film.h"
#include "Flight.h"
#include "Time.h"
#include <iostream>
using namespace std;

/// <summary>
/// Функция присваивания двум указателям
/// на структуру Film одинакового адреса 
/// </summary>
void DemoFilmDoublePointer();

/// <summary>
/// Функция присваивания двум указателям
/// на структуру Flight одинакового адреса 
/// </summary>
void DemoFlightDoublePointer();

/// <summary>
/// Функция присваивания двум указателям
/// на структуру Time одинакового адреса 
/// </summary>
void DemoTimeDoublePointer();

/// <summary>
/// Функция демонстрации работы 
/// методов DemoFilmDoublePointer,
/// DemoFlightDoublePointer,
/// DemoTimeDoublePointer
/// </summary>
void DemoDoublePointer();