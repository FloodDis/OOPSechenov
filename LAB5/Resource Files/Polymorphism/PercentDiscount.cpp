#include "../../Header Files/Polymorphism/PercentDiscount.h"

PercentDiscount::PercentDiscount(CategoryType category, double percent) :
	DiscountBase(category)
{
	this->SetPercent(percent);
}

void PercentDiscount::SetPercent(double percent)
{
	if (percent < 0)
	{
		throw "Percent must be positive\n";
	}
	if (percent > 100)
	{
		throw "Percent must be less than 100";
	}
	_percent = percent;
}

double PercentDiscount::GetPercent()
{
	return _percent;
}

double PercentDiscount::Calculate(Product* product)
{
	double saleCost = product->GetCost() * (100.0 - _percent) / 100.0;
	return saleCost;
}
