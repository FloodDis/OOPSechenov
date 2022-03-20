#pragma once
#include <iostream>
#include "PointClass.h"
using namespace std;

/// <summary>
/// Прямоугольник
/// </summary>
class RectangleClass
{
private:
	/// <summary>
	/// Ширина прямоуголника
	/// </summary>
	double _width;

	/// <summary>
	/// Длина прямоуголника
	/// </summary>
	double _length;

	/// <summary>
	/// Точка центра
	/// прямоугольника
	/// </summary>
	PointClass* _center;

public:

	/// <summary>
	/// Конструктор класса RectangleClass
	/// </summary>
	RectangleClass();

	/// <summary>
	/// Конструктор класса RectangleClass
	/// </summary>
	/// <param name="width">Ширина</param>
	/// <param name="length">Длина</param>
	/// <param name="x">Координата центра X</param>
	/// <param name="y">Координата центра Y</param>
	RectangleClass(double width, double length, double x, double y);

	/// <summary>
	/// Сеттер поля _width
	/// </summary>
	/// <param name="width">Ширина</param>
	void SetWidth(double width);

	/// <summary>
	/// Сеттер поля _length
	/// </summary>
	/// <param name="length">Длина</param>
	void SetLength(double length);

	/// <summary>
	/// Сеттер поля _center
	/// </summary>
	/// <param name="x">Координата центра X</param>
	/// <param name="y">Координата центра Y</param>
	void SetCenter(double x, double y);

	/// <summary>
	/// Геттер поля _width
	/// </summary>
	/// <returns>
	/// Ширина прямоугольника
	/// </returns>
	double GetWidth();

	/// <summary>
	/// Геттер поля _length
	/// </summary>
	/// <returns>
	/// Длина прямоугольника
	/// </returns>
	double GetLength();

	/// <summary>
	/// Геттер поля _center
	/// </summary>
	/// <returns>
	/// Центр прямоугольника
	/// </returns>
	PointClass* GetCenter();
};