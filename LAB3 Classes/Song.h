#pragma once
#include <iostream>
using namespace std;

//������� 3.4.1
/// <summary>
/// ���� �����
/// </summary>
enum Genre
{
	/// <summary>
	/// ���
	/// </summary>
	Pop=1,

	/// <summary>
	/// ���
	/// </summary>
	Rap,

	/// <summary>
	/// ���
	/// </summary>
	Rock,

	/// <summary>
	/// ����������� ����-�-����
	/// </summary>
	RnB,

	/// <summary>
	/// ����
	/// </summary>
	Folk
};

/// <summary>
/// �����
/// </summary>
struct Song
{
	/// <summary>
	/// ��������
	/// </summary>
	string Name;

	/// <summary>
	/// ������������ � �������
	/// </summary>
	int Duration;

	/// <summary>
	/// ����
	/// </summary>
	Genre Genre;
};