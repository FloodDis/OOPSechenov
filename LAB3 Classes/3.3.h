#pragma once
#include <iostream>
#include <exception>
#include "Point.h"
#include "Rectangle.h"
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