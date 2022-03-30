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
	int saleCost = product->GetCost() - _amount;
	return saleCost;
}
