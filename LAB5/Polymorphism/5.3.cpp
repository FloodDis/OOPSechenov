#include "5.3.h"

void ShowCheckWithDiscount(DiscountBase* discount,
	Product* products, int productsCount)
{
	for (int i = 0; i < productsCount; i++)
	{
		switch (products[i].GetCategoryType())
		{
			case HP:
			{
				cout << "HP";
				break;
			}
			case Micromax:
			{
				cout << "Micromax";
				break;
			}
			case Pantum:
			{
				cout << "Pantum";
				break;
			}
			case TV:
			{
				cout << "TV";
				break;
			}
			default:
			{
				cout << "Unknown category";
				break;
			}
		}


		cout << " "
			<< products[i].GetName() << "\tOld cost: "
			<< products[i].GetCost() << "\tNew cost: ";
		if (discount->Calculate(&products[i]) == -1)
		{
			cout << products[i].GetCost() << "\n";
		}
		else
		{
			cout << discount->Calculate(&products[i]) << "\n";
		}
	}
}

void DemoDiscount()
{
	Product* products = new Product[4];
	products[0] = Product("LG49N000", TV, 40'000);
	products[1] = Product("Q1", Micromax, 2'000);
	products[2] = Product("M650", Pantum, 8'000);
	products[3] = Product("LasetJet", HP, 11'000);

	DiscountBase* discount = new PercentDiscount(TV, 25.0);
	ShowCheckWithDiscount(discount, products, 4);
	delete[] products;
	delete discount;
}