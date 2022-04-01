#pragma once
#include "Rectangle.h"
#include "CollisionManager.h"
#include "RingFix3.h"
#include <iostream>
using namespace std;

class GeometricProgram
{
public:

	/// <summary>
	/// Функция демонстрации
	/// работы класса CollisionManager
	/// </summary>
	void DemoCollision();

	/// <summary>
	/// Функция демонстрации
	/// работы структуры RingFix3
	/// </summary>
	void DemoRingFix3();

	/// <summary>
	/// Функция демонстрации
	/// работы структуры Rectangle
	/// </summary>
	void DemoRectangle();
};

/// <summary>
///	Функция вывода класса RectangleClass на экран
/// </summary>
/// <param name = "rectangle">Экземпляр класса RectangleClass</param>
void WriteRectangleWithPointClass(Rectangle& rectangle);