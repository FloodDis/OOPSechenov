#pragma once
#include <iostream>
#include "Rectangle.h"
using namespace std;

/// <summary>
/// Функция вывода полей структуры
/// Rectangle на экран
/// </summary>
/// <param name="rectangle">Экземпляр структуры Rectangle</param>
void WriteRectangle(Rectangle& rectangle);

/// <summary>
/// Функция демонстрации работы
/// функции WriteRectangle
/// </summary>
void DemoWriteRectangle();