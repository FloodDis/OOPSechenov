#include "DiscountBase.h"

void DiscountBase::SetCategory(CategoryType category)
{
	_category = category;
}

DiscountBase::DiscountBase(CategoryType category)
{
	this->SetCategory(category);
}

CategoryType DiscountBase::GetCategory()
{
	return _category;
}
