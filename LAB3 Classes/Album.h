#pragma once
#include <iostream>
#include "Song.h"
using namespace std;

/// <summary>
/// ������
/// </summary>
struct Album
{
	/// <summary>
	/// ��������
	/// </summary>
	string Name;

	/// <summary>
	/// ��� �������
	/// </summary>
	int YearOfRelease;

	/// <summary>
	/// ������ �����
	/// </summary>
	Song* Songs;
};