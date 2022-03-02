#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Песня в плеере
/// </summary>
struct Song
{
	/// <summary>
	/// Название песни
	/// </summary>
	string SongName;

	/// <summary>
	/// Длительность в минутах
	/// </summary>
	int Duration;

	/// <summary>
	/// Название плейлиста, в котором
	/// находится песня
	/// </summary>
	string PlaylistName;
};