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
	/// ������� �������� ��������
	/// ���� ���������������
	/// </summary>
	/// <param name="rectangle1">������������� 1</param>
	/// <param name="rectangle2">������������� 2</param>
	/// <returns>
	/// true - �������� ����,
	/// false - �������� ���
	/// </returns>
	static bool IsCollision(Rectangle& rectangle1, Rectangle& rectangle2);

	/// <summary>
	/// ������� �������� ��������
	/// ���� �����
	/// </summary>
	/// <param name="ring1">������ 1</param>
	/// <param name="ring2">������ 2</param>
	/// <returns>
	/// ture - �������� ����,
	/// false - �������� ���
	/// </returns>
	static bool IsCollision(RingFix3& ring1, RingFix3& ring2);

};