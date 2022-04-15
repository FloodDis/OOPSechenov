#pragma once

#include <iostream>

// 2.2.8 ������������

// ������ 1: 
// C������ ������������: ����, ����� ��������, ����,
// ������������� ��������, ���� ������, ����� ����.

#include "Color.h"
#include "Education.h"
#include "Genre.h"
#include "SmartphoneManufacturer.h"
#include "WeekDay.h"
#include "Season.h"
using namespace std;

// ������ 2:
// �������� ������� �� ������������ ������ ������������

/// <summary>
/// ������� �� ����������� ������ ������������
/// </summary>
void DemoEnums();

// ������ 3:
// �������� ������� ������ ���� � �������
// TODO: + ����������

/// <summary>
/// ������� ���� ������������ � �������
/// </summary>
/// <param name="color">
/// �������� ������������, ������� ����� �������
/// </param>
void WriteColor(Color color);

// ������ 4:
// �������� ������� ������ ���� � ����������

/// <summary>
/// ������ �� ���� �������� ����� � ����������
/// </summary>
/// <returns>����</returns>
Color ReadColor();

// ������ 5:
// �������� ������� �������� �������� ����� � ������� ������

/// <summary>
/// ������� ���������� �������� ����� � �������� �������
/// </summary>
/// <param name="colors">������ ������</param>
/// <param name="count">���������� ��������� � �������</param>
/// <returns>���������� �������� ����� � �������</returns>
int CountRed(Color* colors, int count);

// ������ 6:
// �������� ������� ����������� ����, �� ��� �������� ������ �����

/// <summary>
/// ������� �� �������� ��������� ����� � ������� ������
/// </summary>
/// <param name="colors">������ ������</param>
/// <param name="count">���������� ��������� � �������</param>
/// <param name="findedColor">
/// ���� ���������� �������� ����� ���������
/// </param>
/// <returns>���������� ��������� ����� � �������</returns>
int CountColor(Color* colors, int count, Color findedColor);