#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// ����
/// </summary>
enum Color
{
	/// <summary>
	/// �������
	/// </summary>
	Red = 1,

	/// <summary>
	/// ���������
	/// </summary>
	Orange,

	/// <summary>
	/// ������
	/// </summary>
	Yellow,

	/// <summary>
	/// �������
	/// </summary>
	Green,

	/// <summary>
	/// �������
	/// </summary>
	Blue,

	/// <summary>
	/// �����
	/// </summary>
	DarkBlue,

	/// <summary>
	/// ����������
	/// </summary>
	Purple
};

/// <summary>
/// ���� ������
/// </summary>
enum DayOfTheWeek
{
	/// <summary>
	/// �����������
	/// </summary>
	Monday = 1,

	/// <summary>
	/// �������
	/// </summary>
	Tuesday,

	/// <summary>
	/// �����
	/// </summary>
	Wednesday,

	/// <summary>
	/// �������
	/// </summary>
	Thursday,

	/// <summary>
	/// �������
	/// </summary>
	Friday,

	/// <summary>
	/// �������
	/// </summary>
	Saturday,

	/// <summary>
	/// �����������
	/// </summary>
	Sunday
};

/// <summary>
/// ����
/// </summary>
enum Genre
{
	/// <summary>
	/// �������
	/// </summary>
	Comedy = 1,

	/// <summary>
	/// �����
	/// </summary>
	Drama,

	/// <summary>
	/// �������
	/// </summary>
	Triller,

	/// <summary>
	/// ������
	/// </summary>
	Action,

	/// <summary>
	/// �����
	/// </summary>
	Horror,

	/// <summary>
	/// ����������
	/// </summary>
	Blockbuster,
};

/// <summary>
/// ������� ������������ ����������������
/// �����
/// </summary>
void DemoEnums1();