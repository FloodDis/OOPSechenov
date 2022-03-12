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