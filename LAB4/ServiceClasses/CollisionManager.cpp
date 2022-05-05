#include "CollisionManager.h"

bool CollisionManager::IsCollision(Rectangle& rectangle1,
	Rectangle& rectangle2)
{
	double dX =
		rectangle2.GetCenter().GetX() - rectangle1.GetCenter().GetX();
	double dY =
		rectangle2.GetCenter().GetY() - rectangle1.GetCenter().GetY();
	double minimalWidth =
		(rectangle1.GetWidth() + rectangle2.GetWidth()) / 2.0;
	double minimalLength =
		(rectangle1.GetLength() + rectangle2.GetLength()) / 2.0;
	if (dX < minimalWidth && dY < minimalLength)
	{
		return true;
	}
	return false;
}

bool CollisionManager::IsCollision(Ring& ring1, Ring& ring2)
{
	double dX = ring1.GetCenter().GetX() - ring2.GetCenter().GetX();
	double dY = ring1.GetCenter().GetY() - ring2.GetCenter().GetY();
	double C = sqrt(dX * dX + dY * dY);
	return C < ring1.GetOuterRadius() + ring2.GetOuterRadius();
}