#include "../../Header Files/Structs/Circle.h"

Circle* MakeCircle(double x, double y, double radius, string color)
{
	Circle* newCircle = new Circle;
	newCircle->X = x;
	newCircle->Y = y;
	newCircle->Radius = radius;
	newCircle->Color = color;
	return newCircle;
}

Circle* CopyCircle(Circle& circle)
{
	Circle* copiedCircle = new Circle;
	copiedCircle->Color = circle.Color;
	copiedCircle->Radius = circle.Radius;
	copiedCircle->X = circle.X;
	copiedCircle->Y = circle.Y;
	return copiedCircle;
}

void WriteCircle(Circle* circle)
{
	cout << "Color: " << circle->Color << "\n";
	cout << "Radius: " << circle->Radius << "\n";
	cout << "X: " << circle->X << "\n";
	cout << "Y: " << circle->Y << "\n\n";
}

void DemoCircle()
{
	Circle* circle1 = MakeCircle(5.0, 7.0, 7.5, "Red");
	Circle* circle2 = MakeCircle(2.0, -12.0, 12.75, "Green");
	Circle* circle3 = MakeCircle(-10.0, 10.0, 1.45, "Blue");

	Circle* copiedCircle1 = CopyCircle(*circle1);
	Circle* copiedCircle2 = CopyCircle(*circle2);
	Circle* copiedCircle3 = CopyCircle(*circle3);

	cout << "circle1:\n";
	WriteCircle(circle1);
	cout << "circle2:\n";
	WriteCircle(circle2);
	cout << "circle3:\n";
	WriteCircle(circle3);

	cout << "copiedCircle1:\n";
	WriteCircle(copiedCircle1);
	cout << "copiedCircle2:\n";
	WriteCircle(copiedCircle2);
	cout << "copiedCircle3:\n";
	WriteCircle(copiedCircle3);

	delete circle1;
	delete circle2;
	delete circle3;
}