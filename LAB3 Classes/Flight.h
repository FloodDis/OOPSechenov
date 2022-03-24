﻿#pragma once
#include <iostream>
#include "Time.h"
using namespace std;

// Задание 3.3.8 (1-ая часть)
/// <summary>
/// Авиарейс
/// </summary>
struct Flight
{
	/// <summary>
	/// Номер рейса
	/// </summary>
	int Number;

	/// <summary>
	/// Пункт отправления
	/// </summary>
	string DeparturePoint;

	/// <summary>
	/// Пункт прибытия
	/// </summary>
	string DestinationPoint;

	/// <summary>
	/// Время отправления
	/// </summary>
	Time DepartureTime;

	/// <summary>
	/// Время прибытия
	/// </summary>
	Time ArrivalTime;
};

// Задание 3.3.8 (2-ая часть)
/// <summary>
/// Конструктор структуры Flight
/// </summary>
/// <param name="number">Номер рейса</param>
/// <param name="departurePoint">Пункт отправления</param>
/// <param name="destinationPoint">Пункт прибытия</param>
/// <param name="departureTime">Время отправки</param>
/// <param name="arrivalTime">Время прибытия</param>
/// <returns>
/// Указатель на экземпляр инициализированной
/// структуры Flight
/// </returns>
Flight* MakeFlight(int number, string departurePoint,
	string destinationPoint, Time departureTime, Time arrivalTime);

/// <summary>
/// Сеттер поля Number
/// структуры Flight
/// </summary>
/// <param name="flight">Экземпляр структуры Flight</param>
/// <param name="number">Номер рейса</param>
void SetNumber(Flight*& flight, int number);

/// <summary>
/// Сеттер поля DeparturePoint
/// структуры Flight
/// </summary>
/// <param name="flight">Экземпляр структуры Flight</param>
/// <param name="departurePoint">Пункт отправления</param>
void SetDeparturePoint(Flight*& flight, string departurePoint);

/// <summary>
/// Сеттер поля DestinationPoint
/// структуры Flight
/// </summary>
/// <param name="flight">Экземпляр структуры Flight</param>
/// <param name="destinationPoint">Пункт прибытия</param>
void SetDestinationPoint(Flight*& flight, string destinationPoint);

/// <summary>
/// Сеттер поля DepartureTime
/// структуры Flight
/// </summary>
/// <param name="flight">Экземпляр структуры Flight</param>
/// <param name="departureTime">Время отправления</param>
void SetDepartureTime(Flight*& flight, Time departureTime);

/// <summary>
/// Сеттер поля ArrivalTime
/// структуры Flight
/// </summary>
/// <param name="flight">Экземпляр структуры Flight</param>
/// <param name="arrivalTime">Время прибытия</param>
void SetArrivalTime(Flight*& flight, Time arrivalTime);

/// <summary>
/// Функция проверки правильности
/// введенных времени прибытия и отправления
/// </summary>
/// <param name ="arrivalTime">Время прибытия</param>
/// <param name ="departureTime">Время отправления</param>
/// <returns>
/// true - время прибытия больше времени отправления,
/// false - время прибытия меньше времени отправления
/// </returns>
bool IsArrivalTimeLater(Time arrivalTime, Time departureTime);

// Задание 3.3.11
/// <summary>
/// Функция получения время полета
/// в минутах
/// </summary>
/// <param name ="flight">Экземпляр структуры Flight</param>
/// <returns>
/// Длительность полета в минутах
/// </returns>
int GetFlightTimeMinutes(Flight& flight);