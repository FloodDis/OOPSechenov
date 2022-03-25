#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Точка
/// </summary>
class PointClassFix1
{
private:
	/// <summary>
	/// Координата X
	/// </summary>
	double _x;

	/// <summary>
	/// Координата Y
	/// </summary>
	double _y;

public:

	/// <summary>
	/// Конструктор класса PointClass
	/// </summary>
	PointClassFix1();

	/// <summary>
	/// Конструктор класса PointClass
	/// </summary>
	/// <param name="x">Координата X</param>
	/// <param name="y">Координата Y</param>
	PointClassFix1(double x, double y);

	/// <summary>
	/// Сеттер поля _x
	/// </summary>
	/// <param name="x">Значение координаты X</param>
	void SetX(double x);

	/// <summary>
	/// Сеттер поля _y
	/// </summary>
	/// <param name="y">Значение координаты Y</param>
	void SetY(double y);

	/// <summary>
	/// Геттер поля _x
	/// </summary>
	/// <returns>
	/// Координата X
	/// </returns>
	double GetX();

	/// <summary>
	/// Геттер поля _y
	/// </summary>
	/// <returns>
	/// Координата Y
	/// </returns>
	double GetY();
};