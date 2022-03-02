#pragma once
#include <iostream>
using namespace std;

// TODO: ������ ��������� � ���� �����
/// <summary>
/// �������������
/// </summary>
struct Rectangle
{
	/// <summary>
	/// �����
	/// </summary>
	double Length;

	/// <summary>
	/// ������
	/// </summary>
	double Width;

	/// <summary>
	/// ����
	/// </summary>
	string Color;
};

/// <summary>
/// ����
/// </summary>
struct Flight
{
	/// <summary>
	/// ����� ������
	/// </summary>
	string DeparturePoint;

	/// <summary>
	/// ����� ����������
	/// </summary>
	string Destination;

	/// <summary>
	/// ����� ������ � �������
	/// </summary>
	int FlightTime;
};

/// <summary>
/// �����
/// </summary>
struct Film
{
	/// <summary>
	/// ��������
	/// </summary>
	string Name;

	/// <summary>
	/// ����������������� � �������
	/// </summary>
	int Duration;

	/// <summary>
	/// ��� �������
	/// </summary>
	int YearOfRelease;

	/// <summary>
	/// ����
	/// </summary>
	string Genre;
};

/// <summary>
/// �����
/// </summary>
struct Time
{
	/// <summary>
	/// ���� (�� 0 �� 23)
	/// </summary>
	int Hours;

	/// <summary>
	/// ������ (�� 0 �� 60)
	/// </summary>
	int Minutes;

	/// <summary>
	/// ������� (�� 0 �� 60)
	/// </summary>
	int Seconds;
};

///<summary>
///������������ ������ ��������
///</summary>
void DemoStructures1();