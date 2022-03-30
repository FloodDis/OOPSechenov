#pragma once
#include <iostream>
#include "Product.h"
using namespace std;

/// <summary>
/// ������� ����� ������
/// </summary>
class DiscountBase
{
private:

	/// <summary>
	/// ��������� ������, �� �������
	/// ��������� ������
	/// </summary>
	CategoryType _category;

	/// <summary>
	/// ������ ���� _category
	/// </summary>
	/// <param name="category">
	/// ��������� ������, �� �������
	/// ��������� ������
	/// </param>
	void SetCategory(CategoryType category);

protected:

	/// <summary>
	/// ����������� ������ DiscountBase
	/// </summary>
	/// <param name="category">
	/// ��������� ������, �� �������
	/// ��������� ������
	/// </param>
	DiscountBase(CategoryType category);

public:

	/// <summary>
	/// ������ ���� _category
	/// </summary>
	/// <returns>
	/// ��������� ������, �� �������
	/// ��������� ������
	/// </returns>
	CategoryType GetCategory();

	/// <summary>
	/// �������, ��������������
	/// ���� ������ � ������
	/// ����������� ������
	/// </summary>
	/// <param name="product">������ ������ Product</param>
	/// <returns>
	/// ���� ������ � ������
	/// ����������� ������
	/// </returns>
	double virtual Calculate(Product* product) = 0;
};