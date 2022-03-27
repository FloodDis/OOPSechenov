#pragma once
#include <iostream>
#include <math.h>
#include "Rectangle.h"
#include "RingFix3.h"
using namespace std;

static class CollisionManager
{
public:

	/// <summary>
	/// Функция проверки коллизии
	/// двух прямоугольников
	/// </summary>
	/// <param name="rectangle1">Прямоугольник 1</param>
	/// <param name="rectangle2">Прямоугольник 2</param>
	/// <returns>
	/// true - коллизия есть,
	/// false - коллизии нет
	/// </returns>
	static bool IsCollision(Rectangle& rectangle1, Rectangle& rectangle2);

	/// <summary>
	/// Функция проверки коллизии
	/// двух колец
	/// </summary>
	/// <param name="ring1">Кольцо 1</param>
	/// <param name="ring2">Кольцо 2</param>
	/// <returns>
	/// ture - коллизия есть,
	/// false - коллизии нет
	/// </returns>
	static bool IsCollision(RingFix3& ring1, RingFix3& ring2);

};