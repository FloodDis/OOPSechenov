﻿#pragma once
#include <iostream>
#include "AlbumClass.h"
using namespace std;

/// <summary>
/// Музыкальная группа
/// </summary>
class BandClassFix
{
private:

	/// <summary>
	/// Название группы
	/// </summary>
	string _name;

	/// <summary>
	/// Информация о группе
	/// </summary>
	string _information;

	/// <summary>
	/// Массив альбомов
	/// </summary>
	AlbumClassFix* _albums;

	/// <summary>
	/// Кол-во альбомов
	/// </summary>
	int _albumsCount;

public:

	/// <summary>
	/// Конструктор класса BandClass
	/// </summary>
	BandClassFix();

	/// <summary>
	/// Конструктор класса BandClass
	/// </summary>
	/// <param name="name">Название группы</param>
	/// <param name="information">Информация о группе</param>
	/// <param name="albums">Массив альбомов</param>
	/// <param name="albumsCount">Кол-во альбомов</param>
	BandClassFix(string name, string information,
		AlbumClassFix* albums, int albumsCount);

	/// <summary>
	/// Сеттер поля _name
	/// </summary>
	/// <param name="name">Название группы</param>
	void SetName(string name);

	/// <summary>
	/// Сеттер поля _information
	/// </summary>
	/// <param name="information">Информация о группе</param>
	void SetInformation(string information);

	/// <summary>
	/// Сеттер поля _albums
	/// </summary>
	/// <param name="albums">Массив альбомов группы</param>
	void SetAlbums(AlbumClassFix* albums, int albumsCount);

	/// <summary>
	/// Геттер поля _name
	/// </summary>
	/// <returns>Название музыкальной группы</returns>
	string GetName();

	/// <summary>
	/// Геттер поля _information
	/// </summary>
	/// <returns>Информация о группе</returns>
	string GetInformation();

	/// <summary>
	/// Геттер поля _albums
	/// </summary>
	/// <returns>Массив альбомов</returns>
	AlbumClassFix* GetAlbums();

	/// <summary>
	/// Геттер поля _albumsCount
	/// </summary>
	/// <returns>Кол-во альбомов группы</returns>
	int GetAlbumsCount();

	/// <summary>
	/// Метод поиска песни среди всех
	/// альбомов группы
	/// </summary>
	/// <param name="songTitle">Название песни</param>
	/// <returns>Экземпляр структуры Song</returns>
	SongClassFix* FindSong(string songTitle);

	/// <summary>
	/// Метод поиска альбома по песне
	/// из этого альбома
	/// </summary>
	/// <param name="song">Структура Song</param>
	/// <returns>Экземпляр структуры Album</returns>
	AlbumClassFix* FindAlbum(SongClassFix* song);

	/// <summary>
	/// Метод получения массива всех песен
	/// из всех альбомов группы
	/// </summary>
	/// <param name="allSongsCount">Кол-во всех песен</param>
	/// <returns>Массив всех песен группы</returns>
	SongClassFix* GetAllSongs(int& allSongsCount);

	/// <summary>
	/// Метод получения массива всех
	/// песен группы определенного жанра
	/// </summary>
	/// <param name="findingGenre">Жанр искомых песен</param>
	/// <param name="allSongsCount">
	/// Кол-во всех песен определенного жанра
	/// </param>
	/// <returns>
	/// Массив всех песен группы определенного
	/// жанра
	/// </returns>
	SongClassFix* GetAllGenreSongs(Genre findingGenre, int& allSongsCount);
};