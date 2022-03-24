#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

// Задание 3.3.2
/// <summary>
/// Прямоугольник
/// </summary>
struct Rectangle
{
	/// <summary>
	/// Ширина прямоуголника
	/// </summary>
	double Width;

	/// <summary>
	/// Длина прямоуголника
	/// </summary>
	double Length;

	/// <summary>
	/// Точка центра
	/// прямоугольника
	/// </summary>
	Point* Center;
};

/// <summary>
/// Конструктор структуры Rectangle
/// </summary>
/// <param name="width">Ширина прямоугольника</param>
/// <param name="length">Длина прямоугольника</param>
/// <param name="x">Координата центра X</param>
/// <param name="y">Координата центра Y</param>
/// <returns>
/// Указатель на экземпляр инициализированной
/// структуры Rectangle
/// </returns>
Rectangle* MakeRectangle(double width, double length, double x, double y);

/// <summary>
/// Сеттер поля width
/// структуры Rectangle
/// </summary>
/// <param name="width">Ширина прямоугольника</param>
void SetWidth(Rectangle& rectangle, double width);

/// <summary>
/// Сеттер поля Length
/// структуры Rectangle
/// </summary>
/// <param name="length">Длина прямоугольника</param>
void SetLength(Rectangle& rectangle, double length);

/// <summary>
/// Сеттер поля Center
/// структуры Rectangle
/// </summary>
/// <param name="rectangle">Экземпляр структуры Rectangle</param>
/// <param name="x">Координата центра X</param>
/// <param name="y">Координата центра Y</param>
void SetCenter(Rectangle& rectangle, double x, double y);