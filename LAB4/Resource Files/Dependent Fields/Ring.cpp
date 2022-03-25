#include "../../Header Files/DependentFields/Ring.h"

Ring::Ring()
{

}

Ring::Ring(double innerRadius, double outerRadius,
	double xCenter, double yCenter)
{
	if (innerRadius > outerRadius)
	{
		throw "Outer radius must be greater than inner radius\n";
	}
	if (innerRadius < 0 || outerRadius < 0)
	{
		throw "Radii should be greater than 0\n";
	}
	_innerRadius = innerRadius;
	_outerRadius = outerRadius;
	_center.SetX(xCenter);
	_center.SetY(yCenter);
}

void Ring::SetRadii(double innerRadius, double outerRadius)
{
	if (innerRadius > outerRadius)
	{
		throw "Outer radius must be greater than inner radius\n";
	}
	if (innerRadius < 0 || outerRadius < 0)
	{
		throw "Radii should be greater than 0\n";
	}
	_innerRadius = innerRadius;
	_outerRadius = outerRadius;
}

void Ring::SetCenter(double xCenter, double yCenter)
{
	_center.SetX(xCenter);
	_center.SetY(yCenter);
}

double Ring::GetInnerRadius()
{
	return _innerRadius;
}

double Ring::GetOuterRadius()
{
	return _outerRadius;
}

PointClassFix1 Ring::GetCenter()
{
	return _center;
}

double Ring::GetArea()
{
	double outerArea = 3.14 * _outerRadius * _outerRadius;
	double innerArea = 3.14 * _innerRadius * _innerRadius;
	return outerArea - innerArea;
}