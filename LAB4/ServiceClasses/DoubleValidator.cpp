#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(double value)
{
	return value > 0;
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	if (value > min && value < max)
	{
		return true;
	}
	return false;
}

void DoubleValidator::AssertPositiveValue(double value)
{
	if (!IsValuePositive(value))
	{
		throw "Value must be positive\n";
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	if (!IsValueInRange(value, min, max))
	{
		throw "Value must be in range\n";
	}
}