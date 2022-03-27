#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// ��������� ��������� ���� double
/// </summary>
static class DoubleValidator
{
public:

	/// <summary>
	/// ������� �������� ��������
	/// ���������� �� �����������������
	/// </summary>
	/// <param name="value">����������� ����������</param>
	/// <returns>
	/// true - �������� �������������,
	/// false - �������� �������������
	/// </returns>
	static bool IsValuePositive(double value);

	/// <summary>
	/// ������� �������� ��������� ��������
	/// ���������� � ��������
	/// </summary>
	/// <param name="value">����������� ����������</param>
	/// <param name="min">����������� �������� ���������</param>
	/// <param name="max">������������ �������� ���������</param>
	/// <returns>
	/// ture - �������� � ���������,
	/// false - �������� �� � ���������
	/// </returns>
	static bool IsValueInRange(double value, double min, double max);

	/// <summary>
	/// ������� ��������� ����������,
	/// ���� �������� �������������
	/// </summary>
	/// <param name="value">����������� ����������</param>
	static void AssertPositiveValue(double value);

	/// <summary>
	/// ������� ��������� ����������,
	/// ���� �������� �� ������ �
	/// ��������
	/// </summary>
	/// <param name="value">����������� ����������</param>
	/// <param name="min">����������� �������� ���������</param>
	/// <param name="max">������������ �������� ���������</param>
	static void AssertValueInRange(double value, double min, double max);

};