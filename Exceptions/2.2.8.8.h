#pragma once
#include "2.2.8.1.h"
using namespace std;

/// <summary>
/// Функция подсчета кол-ва элементов
/// массива определенного цвета
/// </summary>
/// <param name ="colors">Массив структур Color</param>
/// <param name = "count">Кол-во элементов в массиве</param>
/// <param name = "findedColor">Цвет искомых элементов</param>
/// <returns>
/// Кол-во элементов массива определенного цвета 
/// </returns>
int CountColor(Color* colors, int count, Color findedColor);

/// <summary>
/// Функция демонстрации
/// метода CountColor
/// </summary>
void DemoCountColor();