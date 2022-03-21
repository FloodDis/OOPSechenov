#pragma once
#include <iostream>
#include "Rectangle.h"
#include "2.2.5.1.h"
using namespace std;

/// <summary>
/// Функция поиска Rectangle с
/// наибольшей площадью
/// </summary>
/// <param name="rectangles">Массив структур Rectangle</param>
/// <param name="count">Кол-во элементов</param>
void FindMaxRectangle(Rectangle* rectangles, int count);

/// <summary>
/// Функция демонстрации
/// метода DemoFindMaxRectangle
/// </summary>
void DemoFindMaxRectangle();