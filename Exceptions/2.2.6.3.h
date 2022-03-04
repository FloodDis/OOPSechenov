#pragma once
#include "Flight.h"
#include "2.2.6.2.h"

/// <summary>
/// ������� ������������ ������ ����
/// ��������� Flght ��������
/// </summary>
/// <param name="flights">������ �������� Flight</param>
/// <param name="count">���-�� ��������� � �������</param>
void FindShortestFlight(Flight* flights, int count);

/// <summary>
/// ������� ������������ ������
/// ������ FindShortestFlight
/// </summary>
void DemoFindShortest();