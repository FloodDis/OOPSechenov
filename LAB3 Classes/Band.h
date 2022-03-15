#pragma once
#include <iostream>
#include "Album.h"
using namespace std;

/// <summary>
/// ����������� ������
/// </summary>
struct Band
{
	/// <summary>
	/// �������� ������
	/// </summary>
	string Name;

	/// <summary>
	/// ���������� � ������
	/// </summary>
	string Information;

	/// <summary>
	/// ������ ��������
	/// </summary>
	Album* Albums;

	/// <summary>
	/// ���-�� ��������
	/// </summary>
	int AlbumsCount;
};