#pragma once
#include <iostream>
#include "GenreEnum.h"
using namespace std;

//������� 3.4.1

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