#include "../../Header Files/ServiceClasses/RingFix3.h"

int RingFix3::_allRingsCount = 0;

void RingFix3::AssertOnRightRadii(double innerRadius, double outerRadius)
{
	if (innerRadius > outerRadius)
	{
		throw "Outer radius must be greater than inner radius\n";
	}
}

RingFix3::RingFix3()
{
	_allRingsCount++;
}

RingFix3::RingFix3(double innerRadius, double outerRadius,
	double xCenter, double yCenter)
{
	this->SetRadii(innerRadius, outerRadius);
	this->SetCenter(xCenter, yCenter);
	_allRingsCount++;
}

RingFix3::~RingFix3()
{
	_allRingsCount--;
}

void RingFix3::SetRadii(double innerRadius, double outerRadius)
{
	AssertOnRightRadii(innerRadius, outerRadius);
	DoubleValidator::AssertPositiveValue(innerRadius);
	DoubleValidator::AssertPositiveValue(outerRadius);
	_innerRadius = innerRadius;
	_outerRadius = outerRadius;
}

void RingFix3::SetCenter(double xCenter, double yCenter)
{
	_center = PointClassFix3(xCenter, yCenter);
}

double RingFix3::GetInnerRadius()
{
	return _innerRadius;
}

double RingFix3::GetOuterRadius()
{
	return _outerRadius;
}

PointClassFix3 RingFix3::GetCenter()
{
	return _center;
}

double RingFix3::GetArea()
{
	double outerArea = 3.14 * _outerRadius * _outerRadius;
	double innerArea = 3.14 * _innerRadius * _innerRadius;
	return outerArea - innerArea;
}

int RingFix3::GetAllRingsCount()
{
	return _allRingsCount;
}
