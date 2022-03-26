#pragma once
#include "PointClassFix2.h"
#include <iostream>
using namespace std;

/// <summary>
/// ������
/// </summary>
class RingFix
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
	PointClassFix2 _center;

	/// <summary>
	/// ������� �������� �������� ��
	/// �����������������
	/// </summary>
	/// <param name="value">����������� ��������</param>
	void AssertOnPositiveValue(double value);

	/// <summary>
	/// ������� �������� �������� ��������
	/// (���������� ������ ���� ������ ��������)
	/// </summary>
	/// <param name="innerRadius">���������� ������</param>
	/// <param name="outerRadius">������� ������</param>
	void AssertOnRightRadii(double innerRadius, double outerRadius);

public:

	/// <summary>
	/// ����������� ������ Ring
	/// </summary>
	RingFix();

	/// <summary>
	/// ����������� ������ Ring
	/// </summary>
	/// <param name="innerRadius">��������� ������</param>
	/// <param name="outerRadius">������� ������</param>
	/// <param name="xCenter">���������� ������ X</param>
	/// <param name="yCenter">���������� ������ Y</param>
	RingFix(double innerRadius, double outerRadius,
		double xCenter, double yCenter);

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
	PointClassFix2 GetCenter();

	/// <summary>
	/// ������� �������� ������� ������
	/// </summary>
	/// <returns>������� ������</returns>
	double GetArea();

};