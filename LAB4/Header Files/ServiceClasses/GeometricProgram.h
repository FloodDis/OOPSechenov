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
	/// ������� ������������
	/// ������ ������ CollisionManager
	/// </summary>
	void DemoCollision();

	/// <summary>
	/// ������� ������������
	/// ������ ��������� RingFix3
	/// </summary>
	void DemoRingFix3();

	/// <summary>
	/// ������� ������������
	/// ������ ��������� Rectangle
	/// </summary>
	void DemoRectangle();
};

/// <summary>
///	������� ������ ������ RectangleClass �� �����
/// </summary>
/// <param name = "rectangle">��������� ������ RectangleClass</param>
void WriteRectangleWithPointClass(Rectangle& rectangle);