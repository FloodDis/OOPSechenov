#pragma once
#include <iostream>
#include "SongClass.h"
using namespace std;

/// <summary>
/// Альбом
/// </summary>
class AlbumClass
{
private:

	/// <summary>
	/// Название альбома
	/// </summary>
	string _name;

	/// <summary>
	/// Год выпуска
	/// </summary>
	int _yearRelease;

	/// <summary>
	/// Массив песен в альбоме
	/// </summary>
	SongClass* _songs;

	/// <summary>
	/// Кол-во песен в альбоме
	/// </summary>
	int _songsCount;

public:

	/// <summary>
	/// Конструктор класса AlbumClass
	/// </summary>
	AlbumClass();

	/// <summary>
	/// Конструктор класса AlbumClass
	/// </summary>
	/// <param name="name">Название альбома</param>
	/// <param name="yearOfRelease">Год выпуска</param>
	/// <param name="songs">Массив песен</param>
	/// <param name="songsCount">Кол-во песен в альбоме</param>
	AlbumClass(string name, int yearRelease, SongClass* songs, int songsCount);

	/// <summary>
	/// Сеттер поля _name
	/// </summary>
	/// <param name="name">Название альбома</param>
	void SetName(string name);

	/// <summary>
	/// Сеттер поля _yearRelease
	/// </summary>
	/// <param name="yearRelease">Год выпуска</param>
	void SetYearRelease(int yearRelease);

	/// <summary>
	/// Сеттер поля _songs
	/// </summary>
	/// <param name="songs">Массив песен в албоме</param>
	void SetSongs(SongClass* songs);

	/// <summary>
	/// Сеттер поля _songsCount
	/// </summary>
	/// <param name="songsCount">Кол-во песен в альбоме</param>
	void SetSongsCount(int songsCount);

	/// <summary>
	/// Геттер поля _name
	/// </summary>
	/// <returns>Название песни</returns>
	string GetName();

	/// <summary>
	/// Геттер поля _yearRelease
	/// </summary>
	/// <returns>Год выпуска</returns>
	int GetYearRelease();

	/// <summary>
	/// Геттер поля _songs
	/// </summary>
	/// <returns>Массив песен в альбоме</returns>
	SongClass* GetSongs();

	/// <summary>
	/// Геттер поля _songsCount
	/// </summary>
	/// <returns>Кол-во песен в массиве</returns>
	int GetSongsCount();

};