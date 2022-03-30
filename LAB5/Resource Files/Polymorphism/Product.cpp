#include "../../Header Files/Polymorphism/Product.h"

Product::Product()
{

}

Product::Product(string name, CategoryType categoryType, double cost)
{
	this->SetName(name);
	this->SeyCategoryType(categoryType);
	this->SetCost(cost);
}

void Product::SetName(string name)
{
	_name = name;
}

void Product::SeyCategoryType(CategoryType categoryType)
{
	_categoryType = categoryType;
}

void Product::SetCost(double cost)
{
	if (cost < 0 || cost > 100000)
	{
		throw "Wrong cost\n";
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
