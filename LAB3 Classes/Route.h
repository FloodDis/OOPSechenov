#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// ������� �������������
/// ����������
/// </summary>
struct Route
{
	/// <summary>
	/// ����� ��������
	/// </summary>
	int Number;

	/// <summary>
	/// ������� �����������������
	/// �������� � �������
	/// </summary>
	int AverageDuration;

	/// <summary>
	/// ������� ���������� ��������
	/// � �������
	/// </summary>
	int Frequency;

	/// <summary>
	/// ���������
	/// </summary>
	string* Stops;

	/// <summary>
	/// ���-�� ���������
	/// </summary>
	int StopsCount;
};

