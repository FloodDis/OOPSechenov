#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Валидатор перемнной типа double
/// </summary>
static class DoubleValidator
{
public:

	/// <summary>
	/// Функция проверки значения
	/// переменной на неотрицательность
	/// </summary>
	/// <param name="value">Проверяемая переменная</param>
	/// <returns>
	/// true - величина положительная,
	/// false - величина отрицательная
	/// </returns>
	static bool IsValuePositive(double value);

	/// <summary>
	/// Функция проверки попадания значения
	/// переменной в диапазон
	/// </summary>
	/// <param name="value">Проверяемая переменная</param>
	/// <param name="min">Минимальное значение диапазона</param>
	/// <param name="max">Максимальное значение диапазона</param>
	/// <returns>
	/// ture - значение в диапазоне,
	/// false - значение не в диапазоне
	/// </returns>
	static bool IsValueInRange(double value, double min, double max);

	/// <summary>
	/// Функция генерации исключения,
	/// если значение отрицательное
	/// </summary>
	/// <param name="value">Проверяемая переменная</param>
	static void AssertPositiveValue(double value);

	/// <summary>
	/// Функция генерации исключения,
	/// если значение не входит в
	/// диапазон
	/// </summary>
	/// <param name="value">Проверяемая переменная</param>
	/// <param name="min">Минимальное значение диапазона</param>
	/// <param name="max">Максимальное значение диапазона</param>
	static void AssertValueInRange(double value, double min, double max);

};