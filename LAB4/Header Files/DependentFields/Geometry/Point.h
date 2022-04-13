#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Точка
/// </summary>
class Point
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
	Point();

	/// <summary>
	/// Конструктор класса PointClass
	/// </summary>
	/// <param name="x">Координата X</param>
	/// <param name="y">Координата Y</param>
	Point(double x, double y);

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