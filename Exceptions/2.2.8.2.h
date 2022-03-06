#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// ����� �������� ��������
/// </summary>
enum FormOfStudy
{
	/// <summary>
	/// �����
	/// </summary>
	FullTime = 1,

	/// <summary>
	/// �������
	/// </summary>
	PartTime,

	/// <summary>
	/// ��������
	/// </summary>
	Evening,

	/// <summary>
	/// �������������
	/// </summary>
	Distant
};

/// <summary>
/// ������������� ����������
/// </summary>
enum SmartphoneManufacturers
{
	/// <summary>
	/// �������� Apple
	/// </summary>
	Apple=1,

	/// <summary>
	/// �������� Samsung
	/// </summary>
	Samsung,

	/// <summary>
	/// �������� Xiaomi
	/// </summary>
	Xiaomi,

	/// <summary>
	/// �������� Oppo
	/// </summary>
	Oppo
};

/// <summary>
/// ����� ����
/// </summary>
enum TimeOfTheYear
{
	/// <summary>
	/// ����
	/// </summary>
	Winter = 1,

	/// <summary>
	/// �����
	/// </summary>
	Spring,

	/// <summary>
	/// ����
	/// </summary>
	Summer,

	/// <summary>
	/// �����
	/// </summary>
	Autumn
};

/// <summary>
/// ������� ������������
/// ������ ��������������� �����
/// </summary>
void DemoEnums2();