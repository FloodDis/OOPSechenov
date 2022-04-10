#include "../../Header Files/Agregation/Time.h"

Time* MakeTime(int year, int month, int day, int hour, int minutes)
{
	Time* newTime = new Time;
	newTime->Year = year;
	newTime->Day = day;
	newTime->Hour = hour;
	newTime->Minutes = minutes;
	newTime->Month = month;
	return newTime;
}

void SetYear(Time*& time, int year)
{
	if (year < 0)
	{
		// TODO: выкидывать просто строку неправильно! Исправить здесь и везде!
		throw "Wrong data\n";
	}
	time->Year = year;
}

void SetMonth(Time*& time, int month)
{
	if (month < 0 || month>12)
	{
		throw "Wrong data\n";
	}
	time->Month = month;
}

void SetDay(Time*& time, int day)
{
	if (day < 0 || day>30)
	{
		throw "Wrong data\n";
	}
	time->Day = day;
}

void SetHour(Time*& time, int hour)
{
	if (hour < 0 || hour>23)
	{
		throw "Wrong data\n";
	}
	time->Hour = hour;
}

void SetMinutes(Time*& time, int minutes)
{
	if (minutes < 0 || minutes>60)
	{
		throw "Wrong data\n";
	}
	time->Minutes = minutes;
}