#pragma once
#include "Band.h"
using namespace std;

/// <summary>
/// Функция создания структуры
/// Song
/// </summary>
/// <param name = "name">Название песни</param>
/// <param name = "duration">Длительность в минутах</param>
/// <param name = "genre">Жанр песни</param>
/// <returns>
/// Указатель на инициализированную структуру Song
/// </returns>
Song* MakeSong(string name, int duration, Genre genre);

/// <summary>
/// Сеттер поля Name
/// структуры Song
/// </summary>
/// <param name = "song">Экземпляр структуры Song</param>
/// <param name = "name">Название</param>
void SetNameSong(Song& song, string name);

/// <summary>
/// Сеттер поля Duration
/// структуры Song
/// </summary>
/// <param name = "song">Экземпляр структуры Song</param>
/// <param name = "duration">Длительность песни в минутах</param>
void SetDuration(Song& song, int duration);

/// <summary>
/// Сеттер поля Genre
/// структуры Song
/// </summary>
/// <param name = "song">Экземпляр структуры Song</param>
/// <param name = "genre">Жанр песни</param>
void SetGenre(Song& song, Genre genre);

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

/// <summary>
/// Функция создания структуры
/// Band
/// </summary>
/// <param name = "name">Название группы</param>
/// <param name = "information">Информация о группе</param>
/// <param name = "albums">Массив альбомов</param>
/// <returns>
/// Указатель на инициализированную структуру Band
/// </returns>
Band* MakeBand(string name, string information, 
	Album* albums, int albumsCount);

/// <summary>
/// Сеттер поля Name
/// структуры Band
/// </summary>
/// <param name = "band">Экземпляр структуры Band</param>
/// <param name = "name">Название группы</param>
void SetNameBand(Band& band, string name);

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