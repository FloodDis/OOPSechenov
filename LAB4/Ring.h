#pragma once
#include <iostream>
#include "../LAB3 Classes/PointClass.h"
using namespace std;

/// <summary>
/// Кольцо
/// </summary>
class Ring
{
private:
	/// <summary>
	/// Внутренний радиус
	/// </summary>
	double _innerRadius;

	/// <summary>
	/// Внешний радиус
	/// </summary>
	double _outerRadius;

	/// <summary>
	/// Центр кольца
	/// </summary>
	PointClass _center;
public:
	/// <summary>
	/// Конструктор класса Ring
	/// </summary>
	Ring();

	/// <summary>
	/// Конструктор класса Ring
	/// </summary>
	/// <param name="innerRadius">Внутрений радиус</param>
	/// <param name="outerRadius">Внешний радиус</param>
	/// <param name="xCenter">Координата центра X</param>
	/// <param name="yCenter">Координата центра Y</param>
	Ring(double innerRadius, double outerRadius, 
		double xCenter, double yCenter);

	/// <summary>
	/// Сеттер полей _innerRadius и _outerRadius
	/// </summary>
	/// <param name="innerRadius"></param>
	/// <param name="outerRadius"></param>
	void SetRadii(double innerRadius, double outerRadius);

	/// <summary>
	/// Сеттер поля Point
	/// </summary>
	/// <param name="xCenter">Координата центра X</param>
	/// <param name="yCenter">Координата центра Y</param>
	void SetCenter(double xCenter, double yCenter);

	/// <summary>
	/// Геттер поля _innerRadius
	/// </summary>
	/// <returns>Внутренний радиус</returns>
	double GetInnerRadius();

	/// <summary>
	/// Геттер поля _outerRadius
	/// </summary>
	/// <returns>Внешний радиус</returns>
	double GetOuterRadius();

	/// <summary>
	/// Геттер поля _center
	/// </summary>
	/// <returns>Центр кольца</returns>
	PointClass GetCenter();

	/// <summary>
	/// Функция подсчета площади кольца
	/// </summary>
	/// <returns>Площадь кольца</returns>
	double GetArea();
};