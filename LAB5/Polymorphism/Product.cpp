#include "Product.h"

Product::Product()
{

}

Product::Product(string name, CategoryType categoryType, double cost)
{
	this->SetName(name);
	this->SetCategoryType(categoryType);
	this->SetCost(cost);
}

void Product::SetName(string name)
{
	_name = name;
}

void Product::SetCategoryType(CategoryType categoryType)
{
	_categoryType = categoryType;
}

void Product::SetCost(double cost)
{
	if (cost < 0 || cost > 100000)
	{
		throw exception("Cost must be positive and less than 100000\n");
	}
	_cost = cost;
}

string Product::GetName()
{
	return _name;
}

CategoryType Product::GetCategoryType()
{
	return _categoryType;
}

double Product::GetCost()
{
	return _cost;
}
