#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// �����
/// </summary>
class TimeClass
{
private:

	/// <summary>
	/// ���
	/// </summary>
	int _year;

	/// <summary>
	/// ����� (�� 1 �� 12)
	/// </summary>
	int _month;

	/// <summary>
	/// ���� (�� 1 �� 30)
	/// </summary>
	int _day;

	/// <summary>
	/// ��� (�� 0 �� 24)
	/// </summary>
	int _hour;

	/// <summary>
	/// ������ (�� 0 �� 60)
	/// </summary>
	int _minutes;

public:

	/// <summary>
	/// ����������� ������ TimeClass
	/// </summary>
	/// <param name="year">���</param>
	/// <param name="month">�����</param>
	/// <param name="day">����</param>
	/// <param name="hour">���</param>
	/// <param name="minutes">������</param>
	TimeClass(int year, int month, int day, int hour, int minutes);

	/// <summary>
	/// ����������� ������ TimeClass
	/// </summary>
	TimeClass();

	/// <summary>
	/// ������ ���� _year
	/// </summary>
	/// <param name="year">���</param>
	void SetYear(int year);

	/// <summary>
	/// ������ ���� _month
	/// </summary>
	/// <param name="month">�����</param>
	void SetMonth(int month);

	/// <summary>
	/// ������ ���� _day
	/// </summary>
	/// <param name="day">����</param>
	void SetDay(int day);

	/// <summary>
	/// ������ ���� _hour
	/// </summary>
	/// <param name="hour">���</param>
	void SetHour(int hour);

	/// <summary>
	/// ������ ���� _minutes
	/// </summary>
	/// <param name="minutes">������</param>
	void SetMinutes(int minutes);

	/// <summary>
	/// ������ ���� _year
	/// </summary>
	/// <returns>���</returns>
	int GetYear();

	/// <summary>
	/// ������ ���� _month
	/// </summary>
	/// <returns>�����</returns>
	int GetMonth();

	/// <summary>
	/// ������ ���� _day
	/// </summary>
	/// <returns>����</returns>
	int GetDay();

	/// <summary>
	/// ������ ���� _hour
	/// </summary>
	/// <returns>���</returns>
	int GetHour();

	/// <summary>
	/// ������ ���� _minutes
	/// </summary>
	/// <returns>������</returns>
	int GetMinutes();
};