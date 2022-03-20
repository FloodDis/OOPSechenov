#pragma once
#include <iostream>
#include "PointClass.h"
using namespace std;

/// <summary>
/// �������������
/// </summary>
class RectangleClass
{
private:
	/// <summary>
	/// ������ �������������
	/// </summary>
	double _width;

	/// <summary>
	/// ����� �������������
	/// </summary>
	double _length;

	/// <summary>
	/// ����� ������
	/// ��������������
	/// </summary>
	PointClass* _center;

public:

	/// <summary>
	/// ����������� ������ RectangleClass
	/// </summary>
	RectangleClass();

	/// <summary>
	/// ����������� ������ RectangleClass
	/// </summary>
	/// <param name="width">������</param>
	/// <param name="length">�����</param>
	/// <param name="x">���������� ������ X</param>
	/// <param name="y">���������� ������ Y</param>
	RectangleClass(double width, double length, double x, double y);

	/// <summary>
	/// ������ ���� _width
	/// </summary>
	/// <param name="width">������</param>
	void SetWidth(double width);

	/// <summary>
	/// ������ ���� _length
	/// </summary>
	/// <param name="length">�����</param>
	void SetLength(double length);

	/// <summary>
	/// ������ ���� _center
	/// </summary>
	/// <param name="x">���������� ������ X</param>
	/// <param name="y">���������� ������ Y</param>
	void SetCenter(double x, double y);

	/// <summary>
	/// ������ ���� _width
	/// </summary>
	/// <returns>
	/// ������ ��������������
	/// </returns>
	double GetWidth();

	/// <summary>
	/// ������ ���� _length
	/// </summary>
	/// <returns>
	/// ����� ��������������
	/// </returns>
	double GetLength();

	/// <summary>
	/// ������ ���� _center
	/// </summary>
	/// <returns>
	/// ����� ��������������
	/// </returns>
	PointClass* GetCenter();
};