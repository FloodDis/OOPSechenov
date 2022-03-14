#pragma once
#include <iostream>
#include <exception>
#include "Point.h"
#include "Rectangle.h"
#include "Time.h"
#include "Flight.h"
using namespace std;

// ������� 3.3.2
/// <summary>
/// ����������� ��������� Point
/// </summary>
/// <param name="x">���������� X</param>
/// <param name="y">���������� Y</param>
/// <returns>
/// ��������� �� ��������� ������������������
/// ��������� Point
/// </returns>
Point* MakePoint(double x, double y);

/// <summary>
/// ������ ��� ���������� X
/// </summary>
/// <param name="point">��������� ��������� Point</param>
/// <param name="x">���������� X</param>
void SetX(Point*& point, double x);

/// <summary>
/// ������ ��� ���������� Y
/// </summary>
/// <param name="point">��������� ��������� Point</param>
/// <param name="y">���������� Y</param>
void SetY(Point*& point, double y);

/// <summary>
/// ����������� ��������� Rectangle
/// </summary>
/// <param name="width">������ ��������������</param>
/// <param name="length">����� ��������������</param>
/// <param name="x">���������� ������ X</param>
/// <param name="y">���������� ������ Y</param>
/// <returns>
/// ��������� �� ��������� ������������������
/// ��������� Rectangle
/// </returns>
Rectangle* MakeRectangle(double width, double length, double x, double y);

/// <summary>
/// ������ ���� width
/// ��������� Rectangle
/// </summary>
/// <param name="width">������ ��������������</param>
void SetWidth(Rectangle& rectangle, double width);

/// <summary>
/// ������ ���� Length
/// ��������� Rectangle
/// </summary>
/// <param name="length">����� ��������������</param>
void SetLength(Rectangle& rectangle, double length);

/// <summary>
/// ������ ���� Center
/// ��������� Rectangle
/// </summary>
/// <param name="rectangle">��������� ��������� Rectangle</param>
/// <param name="x">���������� ������ X</param>
/// <param name="y">���������� ������ Y</param>
void SetCenter(Rectangle& rectangle, double x, double y);

// ������� 3.3.3
/// <summary>
/// ������� ������������ 
/// ��������� Rectangle
/// </summary>
void DemoRectangleWithPoint();

// ������� 3.3.4
/// <summary>
/// ������� ������ ����� ���������
/// Rectangle �� �����
/// </summary>
/// <param name="rectangle">��������� ��������� Rectangle</param>
void WriteRectangleWithPoint(Rectangle& rectangle);

// ������� 3.3.7 (2-�� �����)
/// <summary>
/// ����������� ��������� Time
/// </summary>
/// <param name="year">���</param>
/// <param name="month">�����</param>
/// <param name="day">����</param>
/// <param name="hour">���</param>
/// <param name="minutes">������</param>
/// <returns>
/// ��������� �� ��������� ������������������
/// ��������� Time
/// </returns>
Time* MakeTime(int year, int month, int day, int hour, int minutes);

/// <summary>
/// ������ ���� Year
/// ��������� Time
/// </summary>
/// <param name="time">��������� ��������� Time</param>
/// <param name="year">���</param>
void SetYear(Time*& time, int year);

/// <summary>
/// ������ ���� Month
/// ��������� Time
/// </summary>
/// <param name="time">��������� ��������� Time</param>
/// <param name="month">�����</param>
void SetMonth(Time*& time, int month);

/// <summary>
/// ������ ���� Day
/// ��������� Time
/// </summary>
/// <param name="time">��������� ��������� Time</param>
/// <param name="day">����</param>
void SetDay(Time*& time, int day);

/// <summary>
/// ������ ���� Hour
/// ��������� Time
/// </summary>
/// <param name="time">��������� ��������� Time</param>
/// <param name="hour">����</param>
void SetHour(Time*& time, int hour);

/// <summary>
/// ������ ���� Minutes
/// ��������� Time
/// </summary>
/// <param name="time">��������� ��������� Time</param>
/// <param name="minutes">������</param>
void SetMinutes(Time*& time, int minutes);

// ������� 3.3.8 (2-�� �����)
/// <summary>
/// ����������� ��������� Flight
/// </summary>
/// <param name="number">����� �����</param>
/// <param name="departurePoint">����� �����������</param>
/// <param name="destinationPoint">����� ��������</param>
/// <param name="departureTime">����� ��������</param>
/// <param name="arrivalTime">����� ��������</param>
/// <returns>
/// ��������� �� ��������� ������������������
/// ��������� Flight
/// </returns>
Flight* MakeFlight(int number, string departurePoint,
	string destinationPoint, Time departureTime, Time arrivalTime);

/// <summary>
/// ������ ���� Number
/// ��������� Flight
/// </summary>
/// <param name="flight">��������� ��������� Flight</param>
/// <param name="number">����� �����</param>
void SetNumber(Flight*& flight, int number);

/// <summary>
/// ������ ���� DeparturePoint
/// ��������� Flight
/// </summary>
/// <param name="flight">��������� ��������� Flight</param>
/// <param name="departurePoint">����� �����������</param>
void SetDeparturePoint(Flight*& flight, string departurePoint);

/// <summary>
/// ������ ���� DestinationPoint
/// ��������� Flight
/// </summary>
/// <param name="flight">��������� ��������� Flight</param>
/// <param name="destinationPoint">����� ��������</param>
void SetDestinationPoint(Flight*& flight, string destinationPoint);

/// <summary>
/// ������ ���� DepartureTime
/// ��������� Flight
/// </summary>
/// <param name="flight">��������� ��������� Flight</param>
/// <param name="departureTime">����� �����������</param>
void SetDepartureTime(Flight*& flight, Time departureTime);

/// <summary>
/// ������ ���� ArrivalTime
/// ��������� Flight
/// </summary>
/// <param name="flight">��������� ��������� Flight</param>
/// <param name="arrivalTime">����� ��������</param>
void SetArrivalTime(Flight*& flight, Time arrivalTime);

/// <summary>
/// ������� ������������
/// ��������� Flight
/// </summary>
void DemoFlightWithTime();

/// <summary>
/// ������� �������� ������������
/// ��������� ������� �������� � �����������
/// </summary>
/// <param name ="arrivalTime">����� ��������</param>
/// <param name ="departureTime">����� �����������</param>
/// <returns>
/// true - ����� �������� ������ ������� �����������,
/// false - ����� �������� ������ ������� �����������
/// </returns>
bool IsArrivalTimeLater(Time arrivalTime, Time departureTime);

/// <summary>
/// ������� ������ ��������� flight
/// �� �����
/// </summary>
/// <param name ="flight">��������� ��������� Flight</param>
void WriteFlight(Flight& flight);