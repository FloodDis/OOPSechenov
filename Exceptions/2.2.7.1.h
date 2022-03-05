#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// ����
/// </summary>
struct Circle 
{
	/// <summary>
	/// X-���������� ������ �����
	/// </summary>
	double X; 

	/// <summary>
	/// Y-���������� ������ �����
	/// </summary>
	double Y;

	/// <summary>
	/// ������
	/// </summary>
	double Radius; 

	/// <summary>
	/// ����
	/// </summary>
	string Color; 
};

/// <summary>
/// ������� �������� ��������� Circle
/// </summary>
/// <param name="x">X-���������� ������ �����</param>
/// <param name="y">Y-���������� ������ �����</param>
/// <param name="radius">������ �����</param>
/// <param name="color">���� �����</param>
/// <returns>
/// ��������� �� ��������� Circle
/// </returns>
Circle* MakeCircle(double x, double y, double radius, string color);

/// <summary>
/// ������� ����������� ��������� Circle
/// </summary>
/// <param name="circle">���������� ��������� ��������� Circle</param>
/// <returns>��������� �� ������������� ��������� Circle</returns>
Circle* CopyCircle(Circle& circle);

/// <summary>
/// ������� ������������ ������ ��������� Circle
/// </summary>
void DemoCircle();

/// <summary>
/// ������� ������ ��������� Circle �� �����
/// </summary>
/// <param name="circle">��������� ��������� ��������� Circle</param>
void WriteCircle(Circle* circle);
