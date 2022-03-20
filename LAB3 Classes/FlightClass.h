#pragma once
#include "TimeClass.h"
#include <iostream>
using namespace std;

/// <summary>
/// ����
/// </summary>
class FlightClass
{
private:

	/// <summary>
	/// ����� �����
	/// </summary>
	int _number;

	/// <summary>
	/// ����� �����������
	/// </summary>
	string _departurePoint;

	/// <summary>
	/// ����� ��������
	/// </summary>
	string _destinationPoint;

	/// <summary>
	/// ����� �����������
	/// </summary>
	TimeClass _departureTime;

	/// <summary>
	/// ����� ��������
	/// </summary>
	TimeClass _arrivalTime;

public:

	/// <summary>
	/// ����������� ������ FlightClass
	/// </summary>
	/// <param name="number">����������������� �����</param>
	/// <param name="departurePoint">����� �����������</param>
	/// <param name="destinationPoint">����� ��������</param>
	/// <param name="departureTime">����� �����������</param>
	/// <param name="arrivalTime">����� ��������</param>
	FlightClass(int number, string departurePoint, string destinationPoint,
		TimeClass departureTime, TimeClass arrivalTime);

	/// <summary>
	/// ����������� ������ FlightClass
	/// </summary>
	FlightClass();

	/// <summary>
	/// ������ ���� _number
	/// </summary>
	/// <param name="number">����������������� �����</param>
	void SetNumber(int number);

	/// <summary>
	/// ������ ���� _departurePoint
	/// </summary>
	/// <param name="departurePoint">����� �����������</param>
	void SetDeparturePoint(string departurePoint);

	/// <summary>
	/// ������ ���� _destinationPoint
	/// </summary>
	/// <param name="destinationPoint">����� ��������</param>
	void SetDestinationPoint(string destinationPoint);

	/// <summary>
	/// ������ ���� _departureTime
	/// </summary>
	/// <param name="departureTime">����� �����������</param>
	void SetDepartureTime(TimeClass departureTime);

	/// <summary>
	/// ������ ���� _arrivalTime
	/// </summary>
	/// <param name="arrivalTime"></param>
	void SetArrivalTime(TimeClass arrivalTime);

	/// <summary>
	/// ������ ���� _number
	/// </summary>
	/// <returns>����� �����</returns>
	int GetNumber();

	/// <summary>
	/// ������ ���� _departurePoint
	/// </summary>
	/// <returns>����� �����������</returns>
	string GetDeparturePoint();

	/// <summary>
	/// ������ ���� _destinationPoint
	/// </summary>
	/// <returns>����� ��������</returns>
	string GetDestinationPoint();

	/// <summary>
	/// ������ ���� _departureTime
	/// </summary>
	/// <returns>����� �����������</returns>
	TimeClass GetDepartureTime();

	/// <summary>
	/// ������ ���� _destinationTime
	/// </summary>
	/// <returns>����� ��������</returns>
	TimeClass GetArrivalTime();

	/// <summary>
	/// ������� �������� �������
	/// ������
	/// </summary>
	/// <returns>����� ������</returns>
	int GetFlightTimeMinutes();
};