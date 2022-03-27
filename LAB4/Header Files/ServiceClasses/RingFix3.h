#pragma once
#include <iostream>
#include "../../Header Files/ReadOnlyFields/PointClassFix3.h"
#include "DoubleValidator.h"
using namespace std;

/// <summary>
/// ������
/// </summary>
class RingFix3
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
	PointClassFix3 _center;

	/// <summary>
	/// ���-�� ��������� �������� RingFix2
	/// </summary>
	static int _allRingsCount;

	/// <summary>
	/// ������� �������� �������� ��������
	/// (���������� ������ ���� ������ ��������)
	/// </summary>
	/// <param name="innerRadius">���������� ������</param>
	/// <param name="outerRadius">������� ������</param>
	void AssertOnRightRadii(double innerRadius, double outerRadius);

public:

	/// <summary>
	/// ����������� ������ RingFix2
	/// </summary>
	RingFix3();

	/// <summary>
	/// ����������� ������ RingFix2
	/// </summary>
	/// <param name="innerRadius">��������� ������</param>
	/// <param name="outerRadius">������� ������</param>
	/// <param name="xCenter">���������� ������ X</param>
	/// <param name="yCenter">���������� ������ Y</param>
	RingFix3(double innerRadius, double outerRadius,
		double xCenter, double yCenter);

	/// <summary>
	/// ���������� ������ RingFix2
	/// </summary>
	~RingFix3();

	/// <summary>
	/// ������ ����� _innerRadius � _outerRadius
	/// </summary>
	/// <param name="innerRadius">���������� ������</param>
	/// <param name="outerRadius">������� ������</param>
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
	PointClassFix3 GetCenter();

	/// <summary>
	/// ������� �������� ������� ������
	/// </summary>
	/// <returns>������� ������</returns>
	double GetArea();

	/// <summary>
	/// ������ ���� _allRingsCount
	/// </summary>
	/// <returns>���-�� ���������</returns>
	static int GetAllRingsCount();
};