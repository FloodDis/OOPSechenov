#pragma once
#include <iostream>
#include <exception>
#include "Point.h"
#include "Rectangle.h"
#include "Time.h"
#include "Flight.h"
using namespace std;

// Задание 3.3.2
/// <summary>
/// Конструктор структуры Point
/// </summary>
/// <param name="x">Координата X</param>
/// <param name="y">Координата Y</param>
/// <returns>
/// Указатель на экземпляр инициализированной
/// структуры Point
/// </returns>
Point* MakePoint(double x, double y);

/// <summary>
/// Сеттер для координаты X
/// </summary>
/// <param name="point">Экземпляр структуры Point</param>
/// <param name="x">Координата X</param>
void SetX(Point*& point, double x);

/// <summary>
/// Сеттер для координаты Y
/// </summary>
/// <param name="point">Экземпляр структуры Point</param>
/// <param name="y">Координата Y</param>
void SetY(Point*& point, double y);

/// <summary>
/// Конструктор структуры Rectangle
/// </summary>
/// <param name="width">Ширина прямоугольника</param>
/// <param name="length">Длина прямоугольника</param>
/// <param name="x">Координата центра X</param>
/// <param name="y">Координата центра Y</param>
/// <returns>
/// Указатель на экземпляр инициализированной
/// структуры Rectangle
/// </returns>
Rectangle* MakeRectangle(double width, double length, double x, double y);

/// <summary>
/// Сеттер поля width
/// структуры Rectangle
/// </summary>
/// <param name="width">Ширина прямоугольника</param>
void SetWidth(Rectangle& rectangle, double width);

/// <summary>
/// Сеттер поля Length
/// структуры Rectangle
/// </summary>
/// <param name="length">Длина прямоугольника</param>
void SetLength(Rectangle& rectangle, double length);

/// <summary>
/// Сеттер поля Center
/// структуры Rectangle
/// </summary>
/// <param name="rectangle">Экземпляр структуры Rectangle</param>
/// <param name="x">Координата центра X</param>
/// <param name="y">Координата центра Y</param>
void SetCenter(Rectangle& rectangle, double x, double y);

// Задание 3.3.3
/// <summary>
/// Функция демонстрации 
/// структуры Rectangle
/// </summary>
void DemoRectangleWithPoint();

// Задание 3.3.4
/// <summary>
/// Функция вывода полей структуры
/// Rectangle на экран
/// </summary>
/// <param name="rectangle">Экземпляр структуры Rectangle</param>
void WriteRectangleWithPoint(Rectangle& rectangle);

// Задание 3.3.7 (2-ая часть)
/// <summary>
/// Конструктор структуры Time
/// </summary>
/// <param name="year">Год</param>
/// <param name="month">Месяц</param>
/// <param name="day">День</param>
/// <param name="hour">Час</param>
/// <param name="minutes">Минуты</param>
/// <returns>
/// Указатель на экземпляр инициализированной
/// структуры Time
/// </returns>
Time* MakeTime(int year, int month, int day, int hour, int minutes);

/// <summary>
/// Сеттер поля Year
/// структуры Time
/// </summary>
/// <param name="time">Экземпляр структуры Time</param>
/// <param name="year">Год</param>
void SetYear(Time*& time, int year);

/// <summary>
/// Сеттер поля Month
/// структуры Time
/// </summary>
/// <param name="time">Экземпляр структуры Time</param>
/// <param name="month">Месяц</param>
void SetMonth(Time*& time, int month);

/// <summary>
/// Сеттер поля Day
/// структуры Time
/// </summary>
/// <param name="time">Экземпляр структуры Time</param>
/// <param name="day">День</param>
void SetDay(Time*& time, int day);

/// <summary>
/// Сеттер поля Hour
/// структуры Time
/// </summary>
/// <param name="time">Экземпляр структуры Time</param>
/// <param name="hour">Часы</param>
void SetHour(Time*& time, int hour);

/// <summary>
/// Сеттер поля Minutes
/// структуры Time
/// </summary>
/// <param name="time">Экземпляр структуры Time</param>
/// <param name="minutes">Минуты</param>
void SetMinutes(Time*& time, int minutes);

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
/// Функция демонстрации
/// структуры Flight
/// </summary>
void DemoFlightWithTime();

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

/// <summary>
/// Функция вывода структуры flight
/// на экран
/// </summary>
/// <param name ="flight">Экземпляр структуры Flight</param>
void WriteFlight(Flight& flight);