#pragma once
#include "TimeClass.h"
#include <iostream>
using namespace std;

/// <summary>
/// Рейс
/// </summary>
class FlightClass
{
private:

	/// <summary>
	/// Номер рейса
	/// </summary>
	int _number;

	/// <summary>
	/// Пункт отправления
	/// </summary>
	string _departurePoint;

	/// <summary>
	/// Пункт прибытия
	/// </summary>
	string _destinationPoint;

	/// <summary>
	/// Время отправления
	/// </summary>
	TimeClass _departureTime;

	/// <summary>
	/// Время прибытия
	/// </summary>
	TimeClass _arrivalTime;

public:

	/// <summary>
	/// Конструктор класса FlightClass
	/// </summary>
	/// <param name="number">Идентификационный номер</param>
	/// <param name="departurePoint">Место отправления</param>
	/// <param name="destinationPoint">Место прибытия</param>
	/// <param name="departureTime">Время отправления</param>
	/// <param name="arrivalTime">Время прибытия</param>
	FlightClass(int number, string departurePoint, string destinationPoint,
		TimeClass departureTime, TimeClass arrivalTime);

	/// <summary>
	/// Конструктор класса FlightClass
	/// </summary>
	FlightClass();

	/// <summary>
	/// Сеттер поля _number
	/// </summary>
	/// <param name="number">Идентификационный номер</param>
	void SetNumber(int number);

	/// <summary>
	/// Сеттер поля _departurePoint
	/// </summary>
	/// <param name="departurePoint">Место отправления</param>
	void SetDeparturePoint(string departurePoint);

	/// <summary>
	/// Сеттер поля _destinationPoint
	/// </summary>
	/// <param name="destinationPoint">Место прибытия</param>
	void SetDestinationPoint(string destinationPoint);

	/// <summary>
	/// Сеттер поля _departureTime
	/// </summary>
	/// <param name="departureTime">Время отправления</param>
	void SetDepartureTime(TimeClass departureTime);

	/// <summary>
	/// Сеттер поля _arrivalTime
	/// </summary>
	/// <param name="arrivalTime"></param>
	void SetArrivalTime(TimeClass arrivalTime);

	/// <summary>
	/// Геттер поля _number
	/// </summary>
	/// <returns>Номер рейса</returns>
	int GetNumber();

	/// <summary>
	/// Геттер поля _departurePoint
	/// </summary>
	/// <returns>Пункт отправления</returns>
	string GetDeparturePoint();

	/// <summary>
	/// Геттер поля _destinationPoint
	/// </summary>
	/// <returns>Пункт прибытия</returns>
	string GetDestinationPoint();

	/// <summary>
	/// Геттер поля _departureTime
	/// </summary>
	/// <returns>Время отправления</returns>
	TimeClass GetDepartureTime();

	/// <summary>
	/// Геттер поля _destinationTime
	/// </summary>
	/// <returns>Время прибытия</returns>
	TimeClass GetArrivalTime();

	/// <summary>
	/// Функция подсчета времени
	/// полета
	/// </summary>
	/// <returns>Время полета</returns>
	int GetFlightTimeMinutes();
};