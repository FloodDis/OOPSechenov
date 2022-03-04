#pragma once
#include "Flight.h"
#include <iostream>
using namespace std;

/// <summary>
/// �������, ������������ ������ � ������������
/// ������� � ����������� �� ������� ������� ��������
/// Flight
/// </summary>
void DemoDynamicFlight();

/// <summary>
/// ������� ������������ ������ ����
/// ��������� Flght ��������
/// </summary>
/// <param name="departurePoint">����� �����������</param>
/// <param name="destination">����� ��������</param>
/// <param name="flightTime">����� ������ � �������</param>
Flight ReadFlight(string departurePoint, 
	string destination, int flightTime);