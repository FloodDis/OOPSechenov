#pragma once
#include <iostream>
using namespace std;

// ������� 3.3.7 (1-�� �����)
/// <summary>
/// �����
/// </summary>
struct Time
{
	/// <summary>
	/// ���
	/// </summary>
	int Year;

	/// <summary>
	/// ����� (�� ����� 12)
	/// </summary>
	int Month;

	/// <summary>
	/// ���� (�� ����� 30)
	/// </summary>
	int Day;

	/// <summary>
	/// ��� (�� ����� 24)
	/// </summary>
	int Hour;

	/// <summary>
	/// ������ (�� ����� 60)
	/// </summary>
	int Minutes;
};