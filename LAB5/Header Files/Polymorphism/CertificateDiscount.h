#pragma once
#include <iostream>
#include "DiscountBase.h"
using namespace std;

/// <summary>
/// ������ � ������������
/// </summary>
class CertificateDiscount : public DiscountBase
{
private:

	/// <summary>
	/// ������ ����������� � ������
	/// </summary>
	int _amount;

public:

	/// <summary>
	/// ������ ���� _amount
	/// </summary>
	/// <param name="amount">������ ����������� � ������</param>
	void SetAmount(int amount);

	/// <summary>
	/// ������ ���� _amount
	/// </summary>
	/// <returns>������ ����������� � ������</returns>
	int GetAmount();

	/// <summary>
	/// ����������� ������ CertificateDiscount
	/// </summary>
	/// <param name="category">
	/// ��������� ������, �� �������
	/// ��������� ������
	/// </param>
	/// <param name="amount">������ ����������� � ������</param>
	CertificateDiscount(CategoryType category, int amount);

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