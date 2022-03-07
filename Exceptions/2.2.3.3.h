#pragma once
#include <iostream>
#include "Rectangle.h"
#include "Flight.h"
#include "Film.h"
#include "Time.h"
using namespace std;

/// <summary>
/// ������� ������������
/// ������� �������� Rectangle
/// </summary>
/// <param name="width">������</param>
/// <param name="length">�����</param>
/// <param name="size">������ �������</param>
void DemoRectangle(int width, int length, int size);

/// <summary>
/// ������� ������������
/// ������� �������� Flight
/// </summary>
/// <param name="departurePoint">�������� ������ �����������</param>
/// <param name="destination">�������� ������ ����������</param>
/// <param name="size">������ �������</param>
void DemoFlight(string departurePoint, string destination, int size);

/// <summary>
/// ������� ������������
/// ������� �������� Film
/// </summary>
/// <param name="year">��� �������</param>
/// <param name="name">�������� ������</param>
/// <param name="size">������ �������</param>
void DemoMovie(int year, string name, int size);

/// <summary>
/// ������� ������������
/// ������� �������� Time
/// </summary>
/// <param name="hours">����</param>
/// <param name="minutes">������</param>
/// <param name="seconds">�������</param>
/// <param name="size">������ �������</param>
void DemoTime(int hours, int minutes, int seconds, int size);

/// <summary>
/// ������� ������������ �������
/// ������������ �������� ��������
/// </summary>
void DemoStructures5();