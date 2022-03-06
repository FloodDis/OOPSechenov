#pragma once
#include "2.2.8.1.h"
using namespace std;

/// <summary>
/// ������� �������� ���-�� ���������
/// ������� ������������� �����
/// </summary>
/// <param name ="colors">������ �������� Color</param>
/// <param name = "count">���-�� ��������� � �������</param>
/// <param name = "findedColor">���� ������� ���������</param>
/// <returns>
/// ���-�� ��������� ������� ������������� ����� 
/// </returns>
int CountColor(Color* colors, int count, Color findedColor);

/// <summary>
/// ������� ������������
/// ������ CountColor
/// </summary>
void DemoCountColor();