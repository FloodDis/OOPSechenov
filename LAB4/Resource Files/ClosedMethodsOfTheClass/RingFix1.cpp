#include "../../Header Files/ClosedMethodsOfTheClass/RingFix1.h"

RingFix1::RingFix1()
{

}

RingFix1::RingFix1(double innerRadius, double outerRadius,
	double xCenter, double yCenter)
{
	AssertOnRightRadii(innerRadius, outerRadius);
	AssertOnPositiveValue(innerRadius);
	AssertOnPositiveValue(outerRadius);
	_innerRadius = innerRadius;
	_outerRadius = outerRadius;
	_center.SetX(xCenter);
	_center.SetY(yCenter);
}

void RingFix1::SetRadii(double innerRadius, double outerRadius)
{
	AssertOnRightRadii(innerRadius, outerRadius);
	AssertOnPositiveValue(innerRadius);
	AssertOnPositiveValue(outerRadius);
	_innerRadius = innerRadius;
	_outerRadius = outerRadius;
}

void RingFix1::SetCenter(double xCenter, double yCenter)
{
	_center.SetX(xCenter);
	_center.SetY(yCenter);
}

double RingFix1::GetInnerRadius()
{
	return _innerRadius;
}

double RingFix1::GetOuterRadius()
{
	return _outerRadius;
}

PointClassFix2 RingFix1::GetCenter()
{
	return _center;
}

double RingFix1::GetArea()
{
	double outerArea = 3.14 * _outerRadius * _outerRadius;
	double innerArea = 3.14 * _innerRadius * _innerRadius;
	return outerArea - innerArea;
}

void RingFix1::AssertOnPositiveValue(double value)
{
	if (value < 0)
	{
		throw "Radii must be greater than 0\n";
	}
}

void RingFix1::AssertOnRightRadii(double innerRadius, double outerRadius)
{
	if (innerRadius > outerRadius)
	{
		throw "Outer radius must be greater than inner radius\n";
	}
}
