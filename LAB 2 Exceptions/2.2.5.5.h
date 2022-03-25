#pragma once
#include "Rectangle.h"
#include "2.2.5.1.h"

/// <summary>
/// Функция поиска Rectangle с
/// наибольшей длиной
/// </summary>
/// <param name="rectangles">Массив структур Rectangle</param>
/// <param name="count">Кол-во элементов</param>
void FindRectangle(Rectangle* rectangles, int count);

/// <summary>
/// Функция демонстрации метода
/// FindRectangle
/// </summary>
void DemoFindRectangle();