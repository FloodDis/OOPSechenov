#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

// ������� 3.3.2
/// <summary>
/// �������������
/// </summary>
struct Rectangle
{
	/// <summary>
	/// ������ �������������
	/// </summary>
	double Width;

	/// <summary>
	/// ����� �������������
	/// </summary>
	double Length;

	/// <summary>
	/// ����� ������
	/// ��������������
	/// </summary>
	Point* Center;
};