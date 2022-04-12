#include "../../../Header Files/Agregation/Airport/Time.h"

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

void SetYear(Time& time, int year)
{
	if (year < 0)
	{
		// TODO: выкидывать просто строку неправильно! Исправить здесь и везде! +
		throw exception("Year must be positive\n");
	}
	time.Year = year;
}

void SetMonth(Time& time, int month)
{
	if (month < 0 || month>12)
	{
		throw exception("Month must be positive and less than 12\n");
	}
	time.Month = month;
}

void SetDay(Time& time, int day)
{
	if (day < 0 || day>30)
	{
		throw exception("Day must be positive and less than 30\n");
	}
	time.Day = day;
}

void SetHour(Time& time, int hour)
{
	if (hour < 0 || hour>23)
	{
		throw exception("Hour must be positive and less than 23\n");
	}
	time.Hour = hour;
}

void SetMinutes(Time& time, int minutes)
{
	if (minutes < 0 || minutes>60)
	{
		throw exception("Minutes must be positive and less than 60\n");
	}
	time.Minutes = minutes;
}