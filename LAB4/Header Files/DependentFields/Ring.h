#pragma once
#include <iostream>
#include "PointClassFix1.h"
using namespace std;

/// <summary>
/// ������
/// </summary>
class Ring
{
private:

	/// <summary>
	/// ���������� ������
	/// </summary>
	double _innerRadius;

	/// <summary>
	/// ������� ������
	/// </summary>
	double _outerRadius;

	/// <summary>
	/// ����� ������
	/// </summary>
	PointClassFix1 _center;

public:

	/// <summary>
	/// ����������� ������ Ring
	/// </summary>
	Ring();

	/// <summary>
	/// ����������� ������ Ring
	/// </summary>
	/// <param name="innerRadius">��������� ������</param>
	/// <param name="outerRadius">������� ������</param>
	/// <param name="xCenter">���������� ������ X</param>
	/// <param name="yCenter">���������� ������ Y</param>
	Ring(double innerRadius, double outerRadius, 
		double xCenter, double yCenter);

	/// <summary>
	/// ������ ����� _innerRadius � _outerRadius
	/// </summary>
	/// <param name="innerRadius"></param>
	/// <param name="outerRadius"></param>
	void SetRadii(double innerRadius, double outerRadius);

	/// <summary>
	/// ������ ���� Point
	/// </summary>
	/// <param name="xCenter">���������� ������ X</param>
	/// <param name="yCenter">���������� ������ Y</param>
	void SetCenter(double xCenter, double yCenter);

	/// <summary>
	/// ������ ���� _innerRadius
	/// </summary>
	/// <returns>���������� ������</returns>
	double GetInnerRadius();

	/// <summary>
	/// ������ ���� _outerRadius
	/// </summary>
	/// <returns>������� ������</returns>
	double GetOuterRadius();

	/// <summary>
	/// ������ ���� _center
	/// </summary>
	/// <returns>����� ������</returns>
	PointClassFix1 GetCenter();

	/// <summary>
	/// ������� �������� ������� ������
	/// </summary>
	/// <returns>������� ������</returns>
	double GetArea();

};