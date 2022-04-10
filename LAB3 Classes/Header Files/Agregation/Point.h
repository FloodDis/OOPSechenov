#pragma once

//Задание 3.3.1
/// <summary>
/// Точка
/// </summary>
struct Point
{
	/// <summary>
	/// Координата X
	/// </summary>
	double X;

	/// <summary>
	/// Координата Y
	/// </summary>
	double Y;
};

// Задание 3.3.2
/// <summary>
/// Конструктор структуры Point
/// </summary>
/// <param name="x">Координата X</param>
/// <param name="y">Координата Y</param>
/// <returns>
/// Указатель на экземпляр инициализированной
/// структуры Point
/// </returns>
Point* MakePoint(double x, double y);

// TODO: почему передается указатель по ссылке? Почему не просто по ссылке?
/// <summary>
/// Сеттер для координаты X
/// </summary>
/// <param name="point">Экземпляр структуры Point</param>
/// <param name="x">Координата X</param>
void SetX(Point*& point, double x);

// TODO: почему передается указатель по ссылке? Почему не просто по ссылке?
/// <summary>
/// Сеттер для координаты Y
/// </summary>
/// <param name="point">Экземпляр структуры Point</param>
/// <param name="y">Координата Y</param>
void SetY(Point*& point, double y);