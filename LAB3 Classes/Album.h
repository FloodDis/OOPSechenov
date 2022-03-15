#pragma once
#include <iostream>
#include "Song.h"
using namespace std;

/// <summary>
/// Альбом
/// </summary>
struct Album
{
	/// <summary>
	/// Название
	/// </summary>
	string Name;

	/// <summary>
	/// Год выпуска
	/// </summary>
	int YearOfRelease;

	/// <summary>
	/// Массив песен
	/// </summary>
	Song* Songs;
};