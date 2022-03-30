#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// ��� ������
/// </summary>
enum CategoryType
{
	/// <summary>
	/// �������� �������
	/// </summary>
	FoodProducts = 1,

	/// <summary>
	/// ������� �����
	/// </summary>
	HouseholdChemicals,

	/// <summary>
	/// ���������
	/// </summary>
	Cosmetics,

	/// <summary>
	/// ����������
	/// </summary>
	Cars
};

/// <summary>
/// �����
/// </summary>
class Product
{
private:

	/// <summary>
	/// �������� ������
	/// </summary>
	string _name;

	/// <summary>
	/// ��������� ������
	/// </summary>
	CategoryType _categoryType;

	/// <summary>
	/// ��������� ������
	/// </summary>
	double _cost;

public:

	/// <summary>
	/// ����������� ������ Product
	/// </summary>
	Product();

	/// <summary>
	/// ����������� ������ Product
	/// </summary>
	/// <param name="name">�������� ������</param>
	/// <param name="categoryType">��������� ������</param>
	/// <param name="cost">��������� ������</param>
	Product(string name, CategoryType categoryType, double cost);

	/// <summary>
	/// ������ ���� _name
	/// </summary>
	/// <param name="name">�������� ������</param>
	void SetName(string name);

	/// <summary>
	/// ������ ���� _categoryType
	/// </summary>
	/// <param name="categoryType">��������� ������</param>
	void SeyCategoryType(CategoryType categoryType);

	/// <summary>
	/// ������ ���� _cost
	/// </summary>
	/// <param name="cost">��������� ������</param>
	void SetCost(double cost);

	/// <summary>
	/// ������ ���� _name
	/// </summary>
	/// <returns>�������� ������</returns>
	string GetName();

	/// <summary>
	/// ������ ���� _categoryType
	/// </summary>
	/// <returns>��������� ������</returns>
	CategoryType GetCategoryType();

	/// <summary>
	/// ������ ���� _cost
	/// </summary>
	/// <returns>��������� ������</returns>
	double GetCost();
};