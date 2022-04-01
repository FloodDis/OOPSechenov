#pragma once
#include <iostream>
#include "DiscountBase.h"
using namespace std;

/// <summary>
/// Скидка с сертификатом
/// </summary>
class CertificateDiscount : public DiscountBase
{
private:

	/// <summary>
	/// Размер сертификата в рублях
	/// </summary>
	int _amount;

public:

	/// <summary>
	/// Сеттер поля _amount
	/// </summary>
	/// <param name="amount">Размер сертификата в рублях</param>
	void SetAmount(int amount);

	/// <summary>
	/// Геттер поля _amount
	/// </summary>
	/// <returns>Размер сертификата в рублях</returns>
	int GetAmount();

	/// <summary>
	/// Конструктор класса CertificateDiscount
	/// </summary>
	/// <param name="category">
	/// Категория товара, на который
	/// действует скидка
	/// </param>
	/// <param name="amount">Размер сертификата в рублях</param>
	CertificateDiscount(CategoryType category, int amount);

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