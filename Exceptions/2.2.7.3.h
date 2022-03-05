#pragma once
#include <iostream>
#include "Rectangle.h"
#include "Flight.h"
#include "Film.h"
#include "Time.h"
#include "2.2.7.2.h"
using namespace std;

/// <summary>
/// ������� ����������� ��������� Rectangle
/// </summary>
/// <param name="rectangle">
/// ���������� ��������� ��������� Rectangle
/// </param>
/// <returns>��������� �� ������������� ��������� Rectangle</returns>
Rectangle* CopyRectangle(Rectangle* rectangle);

/// <summary>
/// ������� ����������� ��������� Flight
/// </summary>
/// <param name="flight">���������� ��������� ��������� Flight</param>
/// <returns>��������� �� ������������� ��������� Flight</returns>
Flight* CopyFlight(Flight* flight);

/// <summary>
/// ������� ����������� ��������� Film
/// </summary>
/// <param name="flight">���������� ��������� ��������� Film</param>
/// <returns>��������� �� ������������� ��������� Film</returns>
Film* CopyFilm(Film* film);

/// <summary>
/// ������� ����������� ��������� Time
/// </summary>
/// <param name="flight">���������� ��������� ��������� Time</param>
/// <returns>��������� �� ������������� ��������� Time</returns>
Time* CopyTime(Time* time);

/// <summary>
/// ������� ������������ �������
/// ����������� ��������
/// </summary>
void DemoCopyStructures();