#pragma once
#include <iostream>
#include "Song.h"
using namespace std;

/// <summary>
/// Альбом
/// </summary>
class Album
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
	Song* _songs;

	/// <summary>
	/// Кол-во песен в альбоме
	/// </summary>
	int _songsCount;

public:

	/// <summary>
	/// Конструктор класса Album
	/// </summary>
	Album();

	/// <summary>
	/// Конструктор класса Album
	/// </summary>
	/// <param name="name">Название альбома</param>
	/// <param name="yearOfRelease">Год выпуска</param>
	/// <param name="songs">Массив песен</param>
	/// <param name="songsCount">Кол-во песен в альбоме</param>
	Album(string name, int yearRelease,
		Song* songs, int songsCount);

	/// <summary>
	/// Сеттер поля _name
	/// </summary>
	/// <param name="name"></param>
	void SetName(string name);

	/// <summary>
	/// Сеттер поля _yearRelease
	/// </summary>
	/// <param name="yearRelease">Год выпуска</param>
	void SetYearRelease(int yearRelease);

	/// <summary>
	/// Сеттер полей _songs и _songsCount
	/// </summary>
	/// <param name="songs">Массив песен в албоме</param>
	/// <param name="songsCount">Кол-во песен</param>
	void SetSongs(Song* songs, int songsCount);

	/// <summary>
	/// Геттер поля _name
	/// </summary>
	/// <returns>Название песни</returns>
	string GetName();

	/// <summary>
	/// Геттер поля _yearRelease
	/// </summary>
	/// <returns>Год выпускс</returns>
	int GetYearRelease();

	/// <summary>
	/// Геттер поля _songs
	/// </summary>
	/// <returns>Массив песен в альбоме</returns>
	Song* GetSongs();

	/// <summary>
	/// Геттер поля _songsCount
	/// </summary>
	/// <returns>Кол-во песен в массиве</returns>
	int GetSongsCount();
};