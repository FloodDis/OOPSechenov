#pragma once
#include <iostream>
#include "Rectangle.h"
#include "Flight.h"
#include "Film.h"
#include "Time.h"

/// <summary>
/// ������� ������������
/// ��������� Rectangle
/// � ������� � ������, ���������
/// � ����������
/// </summary>
/// <param name="width">������</param>
/// <param name="length">�����</param>
void DemoRectangle(int width, int length);

/// <summary>
/// ������� ������������
/// ��������� Flight
/// � ������ �����������
/// � ������ �������, ���������� � 
/// ����������
/// </summary>
/// <param name="departurePoint">�������� ������ �����������</param>
/// <param name="destination">�������� ������ ����������</param>
void DemoFlight(string departurePoint,string destination);

/// <summary>
/// ������� ������������
/// ��������� Film
/// � ����� ������� � ���������, ���������
/// � ����������
/// </summary>
/// <param name="year">��� ������� ������</param>
/// <param name="name">�������� ������</param>
void DemoMovie(int year, string name);

/// <summary>
/// ������� ������������ 
/// ��������� Time � ������, ��������
/// � ���������, ���������� � �����������
/// </summary>
/// <param name="hours">����</param>
/// <param name="minutes">������</param>
/// <param name="seconds">�������</param>
void DemoTime(int hours, int minutes, int seconds);

/// <summary>
/// ������� ������������ �������
/// ������������ ��������
/// </summary>
void DemoStructures4();