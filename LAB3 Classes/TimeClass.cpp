#include "TimeClass.h"

TimeClass::TimeClass(int year, int month, int day, int hour, int minutes)
{
	if (year < 0)
	{
		exception error;
		throw error;
	}
	if (month < 1 || month>12)
	{
		exception error;
		throw error;
	}
	if (day < 1 || day>30)
	{
		exception error;
		throw error;
	}
	if (hour < 0 || hour>23)
	{
		exception error;
		throw error;
	}
	if (minutes < 0 || minutes>59)
	{
		exception error;
		throw error;
	}
	_year = year;
	_month = month;
	_day = day;
	_hour = hour;
	_minutes = minutes;
}

TimeClass::TimeClass()
{

}

void TimeClass::SetYear(int year)
{
	if (year < 0)
	{
		exception error;
		throw error;
	}
	_year = year;
}

void TimeClass::SetMonth(int month)
{
	if (month < 1 || month>12)
	{
		exception error;
		throw error;
	}
	_month = month;
}

void TimeClass::SetDay(int day)
{
	if (day < 1 || day>30)
	{
		exception error;
		throw error;
	}
	_day = day;
}

void TimeClass::SetHour(int hour)
{
	if (hour < 0 || hour>23)
	{
		exception error;
		throw error;
	}
	_hour = hour;
}

void TimeClass::SetMinutes(int minutes)
{
	if (minutes < 0 || minutes>59)
	{
		exception error;
		throw error;
	}
	_minutes = minutes;
}

int TimeClass::GetYear()
{
	return _year;
}

int TimeClass::GetMonth()
{
	return _month;
}

int TimeClass::GetDay()
{
	return _day;
}

int TimeClass::GetHour()
{
	return _hour;
}

int TimeClass::GetMinutes()
{
	return _minutes;
}