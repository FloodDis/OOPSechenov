#pragma once
#include <iostream>
#include "Rectangle.h"
#include "Flight.h"
#include "Film.h"
#include "Time.h"
using namespace std;

/// <summary>
/// ������� �������� ��������� Rectangle
/// </summary>
/// <param name="length">����� ��������������</param>
/// <param name="width">������ ��������������</param>
/// <param name="color">���� ��������������</param>
/// <returns>
/// ��������� �� ��������� Rectangle
/// </returns>
Rectangle* MakeRectangle(int length, int width, string color);

/// <summary>
/// ������� �������� ��������� Flight
/// </summary>
/// <param name="departurePoint">����� �����������</param>
/// <param name="destination">����� ��������</param>
/// <param name="flightTime">����� ������ � �������</param>
/// <returns>
/// ��������� �� ��������� Flight
/// </returns>
Flight* MakeFlight(string departurePoint,
	string destination, int flightTime);

/// <summary>
/// ������� �������� ��������� Film
/// </summary>
/// <param name="name">�������� ������</param>
/// <param name="duration">������������ � �������</param>
/// <param name="yearOfRelease">��� �������</param>
/// <param name="genre">���� ������</param>
/// <returns>
/// ��������� �� ��������� Film
/// </returns>
Film* MakeFilm(string name,
	int duration, int yearOfRelease, string genre, double rate);

/// <summary>
/// ������� �������� ��������� Time
/// </summary>
/// <param name="hours">����</param>
/// <param name="minutes">������</param>
/// <param name="seconds">�������</param>
/// <returns>
/// ��������� �� ��������� Time
/// </returns>
Time* MakeTime(int hours, int minutes, int seconds);

/// <summary>
/// ������� ������������ ������
/// ������� �������� ��������
/// </summary>
void DemoMakeStructures();