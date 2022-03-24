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

	/// <summary>
	/// Кол-во песен в
	/// альбоме
	/// </summary>
	int SongsCount;
};

/// <summary>
/// Функция создания структуры
/// Album
/// </summary>
/// <param name = "name">Название альбома</param>
/// <param name = "yearOfRelease">Год выпуска</param>
/// <param name = "songs">Массив песен</param>
/// <returns>
/// Указатель на инициализированную структуру Album
/// </returns>
Album* MakeAlbum(string name, int yearOfRelease,
	Song* songs, int songsCount);

/// <summary>
/// Сеттер поля Name
/// структуры Album
/// </summary>
/// <param name = "album">Экземпляр структуры Album</param>
/// <param name = "name">Название альбома</param>
void SetNameAlbum(Album& album, string name);

/// <summary>
/// Сеттер поля YearOfRelease
/// структуры Album
/// </summary>
/// <param name = "album">Экземпляр структуры Album</param>
/// <param name = "yearOfRelease">Год выпуска</param>
void SetYearOfRelease(Album& album, int yearOfRelease);

/// <summary>
/// Сеттер поля Songs
/// структуры Album
/// </summary>
/// <param name = "album">Экземпляр структуры Album</param>
/// <param name = "songs">Массив песен</param>
void SetSongs(Album& album, Song* songs);