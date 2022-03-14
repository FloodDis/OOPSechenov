#pragma once
#include <iostream>
#include "Time.h"
using namespace std;

// ������� 3.3.8 (1-�� �����)
/// <summary>
/// ��������
/// </summary>
struct Flight
{
	/// <summary>
	/// ����� �����
	/// </summary>
	int Number;

	/// <summary>
	/// ����� �����������
	/// </summary>
	string DeparturePoint;

	/// <summary>
	/// ����� ��������
	/// </summary>
	string DestinationPoint;

	/// <summary>
	/// ����� �����������
	/// </summary>
	Time DepartureTime;

	/// <summary>
	/// ����� ��������
	/// </summary>
	Time ArrivalTime;
};