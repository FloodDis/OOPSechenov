#pragma once
#include <iostream>
#include "Product.h"
using namespace std;

/// <summary>
/// Базовый класс скидки
/// </summary>
class DiscountBase
{
private:

	/// <summary>
	/// Категория товара, на который
	/// действует скидка
	/// </summary>
	CategoryType _category;

	/// <summary>
	/// Сеттер поля _category
	/// </summary>
	/// <param name="category">
	/// Категория товара, на который
	/// действует скидка
	/// </param>
	void SetCategory(CategoryType category);

protected:

	/// <summary>
	/// Конструктор класса DiscountBase
	/// </summary>
	/// <param name="category">
	/// Категория товара, на который
	/// действует скидка
	/// </param>
	DiscountBase(CategoryType category);

public:

	/// <summary>
	/// Геттер поля _category
	/// </summary>
	/// <returns>
	/// Категория товара, на который
	/// действует скидка
	/// </returns>
	CategoryType GetCategory();

	/// <summary>
	/// Функция, рассчитывающая
	/// цену товара с учетом
	/// действующей скидки
	/// </summary>
	/// <param name="product">Объект товара Product</param>
	/// <returns>
	/// Цену товара с учетом
	/// действующей скидки
	/// </returns>
	double virtual Calculate(Product* product) = 0;
};