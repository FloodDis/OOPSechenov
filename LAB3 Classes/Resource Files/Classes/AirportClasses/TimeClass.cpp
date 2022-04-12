#include "../../../Header Files/Classes/AirportClasses/TimeClass.h"

TimeClass::TimeClass(int year, int month, int day, int hour, int minutes)
{
	// TODO: избавиться от дублирования с проверками в сеттерах +
	SetYear(year);
	SetMonth(month);
	SetDay(day);
	SetHour(hour);
	SetMinutes(minutes);
}

TimeClass::TimeClass()
{

}

void TimeClass::SetYear(int year)
{
	if (year < 0)
	{
		throw exception("Year must be positive\n");
	}
	_year = year;
}

void TimeClass::SetMonth(int month)
{
	if (month < 1 || month>12)
	{
		throw exception("Month must be positive and less than 12\n");
	}
	_month = month;
}

void TimeClass::SetDay(int day)
{
	if (day < 1 || day>30)
	{
		throw exception("Day must be greater than 1 and less than 30\n");
	}
	_day = day;
}

void TimeClass::SetHour(int hour)
{
	if (hour < 0 || hour>23)
	{
		throw exception("Hour must be positive and less than 23\n");
	}
	_hour = hour;
}

void TimeClass::SetMinutes(int minutes)
{
	if (minutes < 0 || minutes>59)
	{
		throw exception("Minutes must be positive\n");
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