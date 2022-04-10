#pragma once
#include <iostream>
#include "AlbumClass.h"
using namespace std;

/// <summary>
/// Музыкальная группа
/// </summary>
class BandClass
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
	AlbumClass* _albums;

	/// <summary>
	/// Кол-во альбомов
	/// </summary>
	int _albumsCount;

public:

	/// <summary>
	/// Конструктор класса BandClass
	/// </summary>
	BandClass();

	// TODO: строки в функции передавать по ссылке, иначе они каждый раз будут копироваться
	/// <summary>
	/// Конструктор класса BandClass
	/// </summary>
	/// <param name="name">Название группы</param>
	/// <param name="information">Информация о группе</param>
	/// <param name="albums">Массив альбомов</param>
	/// <param name="albumsCount">Кол-во альбомов</param>
	BandClass(string name, string information, AlbumClass* albums, int albumsCount);

	// TODO: строки в функции передавать по ссылке, иначе они каждый раз будут копироваться
	/// <summary>
	/// Сеттер поля _name
	/// </summary>
	/// <param name="name">Название группы</param>
	void SetName(string name);

	// TODO: строки в функции передавать по ссылке, иначе они каждый раз будут копироваться
	/// <summary>
	/// Сеттер поля _information
	/// </summary>
	/// <param name="information">Информация о группе</param>
	void SetInformation(string information);

	/// <summary>
	/// Сеттер поля _albums
	/// </summary>
	/// <param name="albums">Массив альбомов группы</param>
	void SetAlbums(AlbumClass* albums);

	/// <summary>
	/// Сеттер поля _albumsCount
	/// </summary>
	/// <param name="albumsCount">Кол-во альбомов</param>
	void SetAlbumsCount(int albumsCount);

	// TODO: строки в функции передавать по ссылке, иначе они каждый раз будут копироваться
	/// <summary>
	/// Геттер поля _name
	/// </summary>
	/// <returns>Название музыкальной группы</returns>
	string GetName();

	// TODO: строки в функции передавать по ссылке, иначе они каждый раз будут копироваться
	/// <summary>
	/// Геттер поля _information
	/// </summary>
	/// <returns>Информация о группе</returns>
	string GetInformation();

	/// <summary>
	/// Геттер поля _albums
	/// </summary>
	/// <returns>Массив альбомов</returns>
	AlbumClass* GetAlbums();

	/// <summary>
	/// Геттер поля _albumsCount
	/// </summary>
	/// <returns>Кол-во альбомов</returns>
	int GetAlbumsCount();

	// TODO: строки в функции передавать по ссылке, иначе они каждый раз будут копироваться
	/// <summary>
	/// Метод поиска песни среди всех
	/// альбомов группы
	/// </summary>
	/// <param name="songTitle">Название песни</param>
	/// <returns>
	/// Указатель на найденную песню или
	/// nullptr, если песня не найдена
	/// </returns>
	SongClass* FindSong(string songTitle);

	/// <summary>
	/// Метод поиска альбома по песне
	/// из этого альбома
	/// </summary>
	/// <param name="song">Экземпляр класса SongClass</param>
	/// <returns></returns>
	AlbumClass* FindAlbum(SongClass* song);

	/// <summary>
	/// Метод получения массива всех песен
	/// из всех альбомов группы
	/// </summary>
	/// <param name="allSongsCount">Кол-во всех песен</param>
	/// <returns>Массив всех песен из всех альбомов</returns>
	SongClass* GetAllSongs(int& allSongsCount);

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
	SongClass* GetAllGenreSongs(Genre findingGenre, int& allSongsCount);
};