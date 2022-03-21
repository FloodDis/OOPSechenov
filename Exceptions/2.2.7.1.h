#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Круг
/// </summary>
struct Circle 
{
	/// <summary>
	/// X-координата центра круга
	/// </summary>
	double X; 

	/// <summary>
	/// Y-координата центра круга
	/// </summary>
	double Y;

	/// <summary>
	/// Радиус
	/// </summary>
	double Radius; 

	/// <summary>
	/// Цвет
	/// </summary>
	string Color; 
};

/// <summary>
/// Функция создания структуры Circle
/// </summary>
/// <param name="x">X-координата центра круга</param>
/// <param name="y">Y-координата центра круга</param>
/// <param name="radius">Радиус круга</param>
/// <param name="color">Цвет круга</param>
/// <returns>
/// Указатель на структуру Circle
/// </returns>
Circle* MakeCircle(double x, double y, double radius, string color);

/// <summary>
/// Функция копирования структуры Circle
/// </summary>
/// <param name="circle">Копируемый экземпляр структуры Circle</param>
/// <returns>Указатель на скопированную структуру Circle</returns>
Circle* CopyCircle(Circle& circle);

/// <summary>
/// Функция демонстрации работы структуры Circle
/// </summary>
void DemoCircle();

/// <summary>
/// Функция вывода структуры Circle на экран
/// </summary>
/// <param name="circle">Выводимый экземпляр структуры Circle</param>
void WriteCircle(Circle* circle);
