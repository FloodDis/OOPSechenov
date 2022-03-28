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
	/// ‘ункци€ демонстрации
	/// работы класса CollisionManager
	/// </summary>
	void DemoCollision();

	/// <summary>
	/// ‘ункци€ демонстрации
	/// работы структуры RingFix3
	/// </summary>
	void DemoRingFix3();

	/// <summary>
	/// ‘ункци€ демонстрации
	/// работы структуры Rectangle
	/// </summary>
	void DemoRectangle();
};

/// <summary>
///	‘ункци€ вывода класса RectangleClass на экран
/// </summary>
/// <param name = "rectangle">Ёкземпл€р класса RectangleClass</param>
void WriteRectangleWithPointClass(Rectangle& rectangle);