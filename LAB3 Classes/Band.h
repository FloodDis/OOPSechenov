#pragma once
#include <iostream>
#include "Album.h"
using namespace std;

/// <summary>
/// Музыкальная группа
/// </summary>
struct Band
{
	/// <summary>
	/// Название группы
	/// </summary>
	string Name;

	/// <summary>
	/// Информация о группе
	/// </summary>
	string Information;

	/// <summary>
	/// Массив альбомов
	/// </summary>
	Album* Albums;

	/// <summary>
	/// Кол-во альбомов
	/// </summary>
	int AlbumsCount;
};