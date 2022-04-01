#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Точка
/// </summary>
class PointClassFix3
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
	PointClassFix3();

	/// <summary>
	/// Конструктор класса PointClass
	/// </summary>
	/// <param name="x">Координата X</param>
	/// <param name="y">Координата Y</param>
	PointClassFix3(double x, double y);

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