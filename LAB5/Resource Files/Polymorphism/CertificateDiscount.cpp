#include "../../Header Files/Polymorphism/CertificateDiscount.h"

void CertificateDiscount::SetAmount(int amount)
{
	if (amount < 0)
	{
		throw "Amount must be positive\n";
	}
	if (amount > 10000)
	{
		throw "Amount must be less than 10000\n";
	}
	_amount = amount;
}

int CertificateDiscount::GetAmount()
{
	return _amount;
}

CertificateDiscount::CertificateDiscount(CategoryType category, int amount)
	:DiscountBase(category)
{
	this->SetAmount(amount);
}

double CertificateDiscount::Calculate(Product* product)
{
	double saleCost;
	if (_amount > product->GetCost())
	{
		saleCost = 0;
		_amount -= product->GetCost();
	}
	else if (_amount < product->GetCost())
	{
		saleCost = product->GetCost() - _amount;
		this->SetAmount(0);
	}
	else if (_amount == product->GetCost())
	{
		saleCost = 0;
		this->SetAmount(0);
	}
	return saleCost;
}
