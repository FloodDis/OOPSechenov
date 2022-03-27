#pragma once
#include <iostream>
#include "../../Header Files/ClosedMethodsOfTheClass/PointClassFix2.h"
using namespace std;

/// <summary>
/// Кольцо
/// </summary>
class RingFix2
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
	PointClassFix2 _center;

	/// <summary>
	/// Кол-во созданных объектов RingFix2
	/// </summary>
	static int _allRingsCount;

	/// <summary>
	/// Функция проверки значения на
	/// неотрицательность
	/// </summary>
	/// <param name="value">Проверяемое значение</param>
	void AssertOnPositiveValue(double value);

	/// <summary>
	/// Функция проверки значений радиусов
	/// (внутренний должен быть меньше внешнего)
	/// </summary>
	/// <param name="innerRadius">Внутренний радиус</param>
	/// <param name="outerRadius">Внешний радиус</param>
	void AssertOnRightRadii(double innerRadius, double outerRadius);

public:

	/// <summary>
	/// Конструктор класса RingFix2
	/// </summary>
	RingFix2();

	/// <summary>
	/// Конструктор класса RingFix2
	/// </summary>
	/// <param name="innerRadius">Внутрений радиус</param>
	/// <param name="outerRadius">Внешний радиус</param>
	/// <param name="xCenter">Координата центра X</param>
	/// <param name="yCenter">Координата центра Y</param>
	RingFix2(double innerRadius, double outerRadius,
		double xCenter, double yCenter);

	/// <summary>
	/// Деструктор класса RingFix2
	/// </summary>
	~RingFix2();

	/// <summary>
	/// Сеттер полей _innerRadius и _outerRadius
	/// </summary>
	/// <param name="innerRadius">Внутренний радиус</param>
	/// <param name="outerRadius">Внешний радиус</param>
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
	PointClassFix2 GetCenter();

	/// <summary>
	/// Функция подсчета площади кольца
	/// </summary>
	/// <returns>Площадь кольца</returns>
	double GetArea();

	/// <summary>
	/// Геттер поля _allRingsCount
	/// </summary>
	/// <returns>Кол-во созданных</returns>
	static int GetAllRingsCount();
};