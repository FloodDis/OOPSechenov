#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// �����
/// </summary>
class PointClass
{
private:
	/// <summary>
	/// ���������� X
	/// </summary>
	double _x;

	/// <summary>
	/// ���������� Y
	/// </summary>
	double _y;

public:
	/// <summary>
	/// ����������� ������ PointClass
	/// </summary>
	/// <param name="x">���������� X</param>
	/// <param name="y">���������� Y</param>
	PointClass(double x, double y);

	/// <summary>
	/// ������ ���� _x
	/// </summary>
	/// <param name="x">�������� ���������� X</param>
	void SetX(double x);

	/// <summary>
	/// ������ ���� _y
	/// </summary>
	/// <param name="y">�������� ���������� Y</param>
	void SetY(double y);

	/// <summary>
	/// ������ ���� _x
	/// </summary>
	double GetX();

	/// <summary>
	/// ������ ���� _y
	/// </summary>
	double GetY();
};