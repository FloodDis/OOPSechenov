#pragma once
#include "CertificateDiscount.h"
#include "PercentDiscount.h"

/// <summary>
/// ������� ������ �������� ������, ���� ������
/// �� ������� �� ������� � ���� ������ �����
/// ������� �� �������
/// </summary>
/// <param name="discount">��������� �� ������� �����</param>
/// <param name="products">������ ���������</param>
/// <param name="productsCount">���-�� ���������</param>
void ShowCheckWithDiscount(DiscountBase* discount, 
	Product* products, int productsCount);