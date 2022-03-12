#pragma once
#include <iostream>
#include <exception>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

// ������� 3.3.2
/// <summary>
/// ����������� ��������� Point
/// </summary>
/// <param name="x">���������� X</param>
/// <param name="y">���������� Y</param>
/// <returns>
/// ��������� �� ��������� ������������������
/// ��������� Point
/// </returns>
Point* MakePoint(double x, double y);

/// <summary>
/// ������ ��� ���������� X
/// </summary>
/// <param name="point">��������� ��������� Point</param>
/// <param name="x">���������� X</param>
void SetX(Point*& point, double x);

/// <summary>
/// ������ ��� ���������� Y
/// </summary>
/// <param name="point">��������� ��������� Point</param>
/// <param name="y">���������� Y</param>
void SetY(Point*& point, double y);

/// <summary>
/// ����������� ��������� Rectangle
/// </summary>
/// <param name="width">������ ��������������</param>
/// <param name="length">����� ��������������</param>
/// <param name="x">���������� ������ X</param>
/// <param name="y">���������� ������ Y</param>
/// <returns>
/// ��������� �� ��������� ������������������
/// ��������� Rectangle
/// </returns>
Rectangle* MakeRectangle(double width, double length, double x, double y);

/// <summary>
/// ������ ���� width
/// ��������� Rectangle
/// </summary>
/// <param name="width">������ ��������������</param>
void SetWidth(Rectangle& rectangle, double width);

/// <summary>
/// ������ ���� Length
/// ��������� Rectangle
/// </summary>
/// <param name="length">����� ��������������</param>
void SetLength(Rectangle& rectangle, double length);

/// <summary>
/// ������ ���� Center
/// ��������� Rectangle
/// </summary>
/// <param name="rectangle">��������� ��������� Rectangle</param>
/// <param name="x">���������� ������ X</param>
/// <param name="y">���������� ������ Y</param>
void SetCenter(Rectangle& rectangle, double x, double y);

// ������� 3.3.3
/// <summary>
/// ������� ������������ 
/// ��������� Rectangle
/// </summary>
void DemoRectangleWithPoint();

// ������� 3.3.4
/// <summary>
/// ������� ������ ����� ���������
/// Rectangle �� �����
/// </summary>
/// <param name="rectangle">��������� ��������� Rectangle</param>
void WriteRectangleWithPoint(Rectangle& rectangle);