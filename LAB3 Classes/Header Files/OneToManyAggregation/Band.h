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

// TODO: строки в функции передавать по ссылке, иначе они каждый раз будут копироваться
/// <summary>
/// Функция создания структуры
/// Band
/// </summary>
/// <param name = "name">Название группы</param>
/// <param name = "information">Информация о группе</param>
/// <param name = "albums">Массив альбомов</param>
/// <param name = "albumsCount">Кол-во альбомов в массиве</param>
/// <returns>
/// Указатель на инициализированную структуру Band
/// </returns>
Band* MakeBand(string name, string information,
	Album* albums, int albumsCount);

// TODO: строки в функции передавать по ссылке, иначе они каждый раз будут копироваться
/// <summary>
/// Сеттер поля Name
/// структуры Band
/// </summary>
/// <param name = "band">Экземпляр структуры Band</param>
/// <param name = "name">Название группы</param>
void SetNameBand(Band& band, string name);

// TODO: строки в функции передавать по ссылке, иначе они каждый раз будут копироваться
/// <summary>
/// Сеттер поля Information
/// структуры Band
/// </summary>
/// <param name = "band">Экземпляр структуры Band</param>
/// <param name = "information">Информация о группе</param>
void SetInformation(Band& band, string information);

/// <summary>
/// Сеттер поля Albums
/// структуры Band
/// </summary>
/// <param name = "band">Экземпляр структуры Band</param>
/// <param name = "albums">Массив альбомов</param>
void SetAlbums(Band& band, Album* albums);

// TODO: строки в функции передавать по ссылке, иначе они каждый раз будут копироваться
// Задание 3.4.2
/// <summary>
/// Функция поиска песни среди всех песен
/// группы
/// </summary>
/// <param name = "band">Музыкальная группа</param>
/// <param name = "songTitle">Название песни</param>
/// <returns>
/// Указатель на найденную песню, если такая есть в
/// дискографии,
/// nullptr - если элемент не найден
/// </returns>
Song* FindSong(Band& band, string songTitle);

// Задание 3.4.3
/// <summary>
/// Функция поиска альбома по песне
/// группы из этого альбома
/// </summary>
/// <param name = "band">Музыкальная группа</param>
/// <param name = "song">Экземпляр песни</param>
Album* FindAlbum(Band& band, Song* song);

// Задание 3.4.4
/// <summary>
/// Функция получения массива
/// всех песен из всех альбомов группы
/// </summary>
/// <param name = "band">Музыкальная группа</param>
/// <param name = "allSongsCount">Кол-во всех песен</param>
/// <returns>
/// Указатель на массив со всеми песнями
/// </returns>
Song* GetAllSongs(Band* band, int& allSongsCount);

// Задание 3.4.6
/// <summary>
/// Функция получения массива всех
/// песен группы определенного жанра
/// </summary>
/// <param name="band">Структура типа Band</param>
/// <param name="findingGenre">Жанр искомых песен</param>
/// <param name="allSongsCount">
/// Кол-во всех песен определенного жанра
/// </param>
/// <returns>
/// Массив всех песен группы определенного
/// жанра
/// </returns>
Song* GetAllGenreSongs(Band* band, Genre
	findingGenre, int& allSongsCount);