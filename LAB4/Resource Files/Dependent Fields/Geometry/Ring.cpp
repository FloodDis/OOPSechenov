#include "../../../Header Files/DependentFields/Geometry/Ring.h"

int Ring::_allRingsCount = 0;

void Ring::AssertOnRightRadii(double innerRadius, double outerRadius)
{
	if (innerRadius > outerRadius)
	{
		throw "Outer radius must be greater than inner radius\n";
	}
}

Ring::Ring()
{
	_allRingsCount++;
}

Ring::Ring(double innerRadius, double outerRadius,
	double xCenter, double yCenter)
{
	this->SetRadii(innerRadius, outerRadius);
	this->SetCenter(xCenter, yCenter);
	_allRingsCount++;
}

Ring::~Ring()
{
	_allRingsCount--;
}

void Ring::SetRadii(double innerRadius, double outerRadius)
{
	AssertOnRightRadii(innerRadius, outerRadius);
	DoubleValidator::AssertPositiveValue(innerRadius);
	DoubleValidator::AssertPositiveValue(outerRadius);
	_innerRadius = innerRadius;
	_outerRadius = outerRadius;
}

void Ring::SetCenter(double xCenter, double yCenter)
{
	_center = Point(xCenter, yCenter);
}

double Ring::GetInnerRadius()
{
	return _innerRadius;
}

double Ring::GetOuterRadius()
{
	return _outerRadius;
}

Point Ring::GetCenter()
{
	return _center;
}

double Ring::GetArea()
{
	double outerArea = 3.14 * _outerRadius * _outerRadius;
	double innerArea = 3.14 * _innerRadius * _innerRadius;
	return outerArea - innerArea;
}

int Ring::GetAllRingsCount()
{
	return _allRingsCount;
}
