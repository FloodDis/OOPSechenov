#pragma once
#include "DiscountBase.h"

/// <summary>
/// �������� ����� DiscountBase
/// </summary>
class PercentDiscount : public DiscountBase
{
private:

	/// <summary>
	/// ������ � ���������
	/// </summary>
	double _percent;

public:

	/// <summary>
	/// ����������� ������ PercentDiscount
	/// </summary>
	/// <param name="category">
	/// ��������� ������, �� �������
	/// ��������� ������
	/// </param>
	/// <param name="percent">������ � ���������</param>
	PercentDiscount(CategoryType category, double percent);

	/// <summary>
	/// ������ ���� _percent
	/// </summary>
	/// <param name="percent">������ � ���������</param>
	void SetPercent(double percent);

	/// <summary>
	/// ������ ���� _percent
	/// </summary>
	/// <returns>������ � ���������</returns>
	double GetPercent();

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
	double Calculate(Product* product);
};