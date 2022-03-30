#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Тип товара
/// </summary>
enum CategoryType
{
	/// <summary>
	/// Продукты питания
	/// </summary>
	FoodProducts = 1,

	/// <summary>
	/// Бытовая химия
	/// </summary>
	HouseholdChemicals,

	/// <summary>
	/// Косметика
	/// </summary>
	Cosmetics,

	/// <summary>
	/// Автомобили
	/// </summary>
	Cars
};

/// <summary>
/// Товар
/// </summary>
class Product
{
private:

	/// <summary>
	/// Название товара
	/// </summary>
	string _name;

	/// <summary>
	/// Категория товара
	/// </summary>
	CategoryType _categoryType;

	/// <summary>
	/// Стоимость товара
	/// </summary>
	double _cost;

public:

	/// <summary>
	/// Конструктор класса Product
	/// </summary>
	Product();

	/// <summary>
	/// Конструктор класса Product
	/// </summary>
	/// <param name="name">Название товара</param>
	/// <param name="categoryType">Категория товара</param>
	/// <param name="cost">Стоимость товара</param>
	Product(string name, CategoryType categoryType, double cost);

	/// <summary>
	/// Сеттер поля _name
	/// </summary>
	/// <param name="name">Название товара</param>
	void SetName(string name);

	/// <summary>
	/// Сеттер поля _categoryType
	/// </summary>
	/// <param name="categoryType">Категория товара</param>
	void SeyCategoryType(CategoryType categoryType);

	/// <summary>
	/// Сеттер поля _cost
	/// </summary>
	/// <param name="cost">Стоимость товара</param>
	void SetCost(double cost);

	/// <summary>
	/// Геттер поля _name
	/// </summary>
	/// <returns>Название товара</returns>
	string GetName();

	/// <summary>
	/// Геттер поля _categoryType
	/// </summary>
	/// <returns>Категория товара</returns>
	CategoryType GetCategoryType();

	/// <summary>
	/// Геттер поля _cost
	/// </summary>
	/// <returns>Стоимость товара</returns>
	double GetCost();
};