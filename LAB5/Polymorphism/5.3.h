#pragma once
#include "CertificateDiscount.h"
#include "PercentDiscount.h"

/// <summary>
/// Функция вывода названия товара, цены товара
/// до расчета со скидкой и цены товара после
/// расчета со скидкой
/// </summary>
/// <param name="discount">Указатель на базовый класс</param>
/// <param name="products">Массив продуктов</param>
/// <param name="productsCount">Кол-во продуктов</param>
void ShowCheckWithDiscount(DiscountBase* discount, 
	Product* products, int productsCount);

/// <summary>
/// Функция демонстрации
/// классов Discount
/// </summary>
void DemoDiscount();