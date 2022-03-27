#include "../../Header Files/StaticFieldsAndMethodsOfTheClass/RingFix2.h"

int RingFix2::_allRingsCount = 0;

void RingFix2::AssertOnPositiveValue(double value)
{
	if (value < 0)
	{
		throw "Radii must be greater than 0\n";
	}
}

void RingFix2::AssertOnRightRadii(double innerRadius, double outerRadius)
{
	if (innerRadius > outerRadius)
	{
		throw "Outer radius must be greater than inner radius\n";
	}
}

RingFix2::RingFix2()
{
	_allRingsCount++;
}

RingFix2::RingFix2(double innerRadius, double outerRadius,
	double xCenter, double yCenter)
{
	AssertOnRightRadii(innerRadius, outerRadius);
	AssertOnPositiveValue(innerRadius);
	AssertOnPositiveValue(outerRadius);
	_innerRadius = innerRadius;
	_outerRadius = outerRadius;
	_center.SetX(xCenter);
	_center.SetY(yCenter);
	_allRingsCount++;
}

RingFix2::~RingFix2()
{
	_allRingsCount--;
}

void RingFix2::SetRadii(double innerRadius, double outerRadius)
{
	AssertOnRightRadii(innerRadius, outerRadius);
	AssertOnPositiveValue(innerRadius);
	AssertOnPositiveValue(outerRadius);
	_innerRadius = innerRadius;
	_outerRadius = outerRadius;
}

void RingFix2::SetCenter(double xCenter, double yCenter)
{
	_center.SetX(xCenter);
	_center.SetY(yCenter);
}

double RingFix2::GetInnerRadius()
{
	return _innerRadius;
}

double RingFix2::GetOuterRadius()
{
	return _outerRadius;
}

PointClassFix2 RingFix2::GetCenter()
{
	return _center;
}

double RingFix2::GetArea()
{
	double outerArea = 3.14 * _outerRadius * _outerRadius;
	double innerArea = 3.14 * _innerRadius * _innerRadius;
	return outerArea - innerArea;
}

int RingFix2::GetAllRingsCount()
{
	return _allRingsCount;
}
