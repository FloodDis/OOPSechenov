#include "../../Header Files/ClosedMethodsOfTheClass/RingFix.h"

RingFix::RingFix()
{

}

RingFix::RingFix(double innerRadius, double outerRadius,
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

void RingFix::SetRadii(double innerRadius, double outerRadius)
{
	AssertOnRightRadii(innerRadius, outerRadius);
	AssertOnPositiveValue(innerRadius);
	AssertOnPositiveValue(outerRadius);
	_innerRadius = innerRadius;
	_outerRadius = outerRadius;
}

void RingFix::SetCenter(double xCenter, double yCenter)
{
	_center.SetX(xCenter);
	_center.SetY(yCenter);
}

double RingFix::GetInnerRadius()
{
	return _innerRadius;
}

double RingFix::GetOuterRadius()
{
	return _outerRadius;
}

PointClassFix2 RingFix::GetCenter()
{
	return _center;
}

double RingFix::GetArea()
{
	double outerArea = 3.14 * _outerRadius * _outerRadius;
	double innerArea = 3.14 * _innerRadius * _innerRadius;
	return outerArea - innerArea;
}

void RingFix::AssertOnPositiveValue(double value)
{
	if (value < 0)
	{
		throw "Radii must be greater than 0\n";
	}
}

void RingFix::AssertOnRightRadii(double innerRadius, double outerRadius)
{
	if (innerRadius > outerRadius)
	{
		throw "Outer radius must be greater than inner radius\n";
	}
}
