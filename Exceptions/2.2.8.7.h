#pragma once
#include "2.2.8.1.h"
using namespace std;

/// <summary>
/// Функция подсчета кол-ва
/// Red в массиве
/// </summary>
/// <param name ="colors">Массив структур Color</param>
/// <param name = "count">Кол-во элементов в массиве</param>
/// <returns>
/// Кол-во Red в массиве
/// </returns>
int CountRed(Color* colors, int count);

/// <summary>
/// Функция демонстрации
/// метода CountRed
/// </summary>
void DemoCountRed();