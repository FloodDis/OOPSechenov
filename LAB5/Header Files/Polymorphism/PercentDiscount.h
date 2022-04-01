#pragma once
#include "DiscountBase.h"

/// <summary>
/// Скидка в процентах
/// </summary>
class PercentDiscount : public DiscountBase
{
private:

	/// <summary>
	/// Скидка в процентах
	/// </summary>
	double _percent;

public:

	/// <summary>
	/// Конструктор класса PercentDiscount
	/// </summary>
	/// <param name="category">
	/// Категория товара, на который
	/// действует скидка
	/// </param>
	/// <param name="percent">Скидка в процентах</param>
	PercentDiscount(CategoryType category, double percent);

	/// <summary>
	/// Сеттер поля _percent
	/// </summary>
	/// <param name="percent">Скидка в процентах</param>
	void SetPercent(double percent);

	/// <summary>
	/// Геттер поля _percent
	/// </summary>
	/// <returns>Скидка в процентах</returns>
	double GetPercent();

	/// <summary>
	/// Функция, рассчитывающая
	/// цену товара с учетом
	/// действующей скидки
	/// </summary>
	/// <param name="product">Объект товара Product</param>
	/// <returns>
	/// Цена товара с учетом
	/// действующей скидки
	/// </returns>
	double Calculate(Product* product);
};