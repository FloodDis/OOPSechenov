#pragma once
#include "Band.h"
using namespace std;

/// <summary>
/// ������� �������� ���������
/// Song
/// </summary>
/// <param name = "name">�������� �����</param>
/// <param name = "duration">������������ � �������</param>
/// <param name = "genre">���� �����</param>
/// <returns>
/// ��������� �� ������������������ ��������� Song
/// </returns>
Song* MakeSong(string name, int duration, Genre genre);

/// <summary>
/// ������ ���� Name
/// ��������� Song
/// </summary>
/// <param name = "song">��������� ��������� Song</param>
/// <param name = "name">��������</param>
void SetNameSong(Song& song, string name);

/// <summary>
/// ������ ���� Duration
/// ��������� Song
/// </summary>
/// <param name = "song">��������� ��������� Song</param>
/// <param name = "duration">������������ ����� � �������</param>
void SetDuration(Song& song, int duration);

/// <summary>
/// ������ ���� Genre
/// ��������� Song
/// </summary>
/// <param name = "song">��������� ��������� Song</param>
/// <param name = "genre">���� �����</param>
void SetGenre(Song& song, Genre genre);

/// <summary>
/// ������� �������� ���������
/// Album
/// </summary>
/// <param name = "name">�������� �������</param>
/// <param name = "yearOfRelease">��� �������</param>
/// <param name = "songs">������ �����</param>
/// <returns>
/// ��������� �� ������������������ ��������� Album
/// </returns>
Album* MakeAlbum(string name, int yearOfRelease, 
	Song* songs, int songsCount);

/// <summary>
/// ������ ���� Name
/// ��������� Album
/// </summary>
/// <param name = "album">��������� ��������� Album</param>
/// <param name = "name">�������� �������</param>
void SetNameAlbum(Album& album, string name);

/// <summary>
/// ������ ���� YearOfRelease
/// ��������� Album
/// </summary>
/// <param name = "album">��������� ��������� Album</param>
/// <param name = "yearOfRelease">��� �������</param>
void SetYearOfRelease(Album& album, int yearOfRelease);

/// <summary>
/// ������ ���� Songs
/// ��������� Album
/// </summary>
/// <param name = "album">��������� ��������� Album</param>
/// <param name = "songs">������ �����</param>
void SetSongs(Album& album, Song* songs);

/// <summary>
/// ������� �������� ���������
/// Band
/// </summary>
/// <param name = "name">�������� ������</param>
/// <param name = "information">���������� � ������</param>
/// <param name = "albums">������ ��������</param>
/// <returns>
/// ��������� �� ������������������ ��������� Band
/// </returns>
Band* MakeBand(string name, string information, 
	Album* albums, int albumsCount);

/// <summary>
/// ������ ���� Name
/// ��������� Band
/// </summary>
/// <param name = "band">��������� ��������� Band</param>
/// <param name = "name">�������� ������</param>
void SetNameBand(Band& band, string name);

/// <summary>
/// ������ ���� Information
/// ��������� Band
/// </summary>
/// <param name = "band">��������� ��������� Band</param>
/// <param name = "information">���������� � ������</param>
void SetInformation(Band& band, string information);

/// <summary>
/// ������ ���� Albums
/// ��������� Band
/// </summary>
/// <param name = "band">��������� ��������� Band</param>
/// <param name = "albums">������ ��������</param>
void SetAlbums(Band& band, Album* albums);

// ������� 3.4.2
/// <summary>
/// ������� ������ ����� ����� ���� �����
/// ������
/// </summary>
/// <param name = "band">����������� ������</param>
/// <param name = "songTitle">�������� �����</param>
/// <returns>
/// ��������� �� ��������� �����, ���� ����� ���� �
/// �����������,
/// nullptr - ���� ������� �� ������
/// </returns>
Song* FindSong(Band& band, string songTitle);

// ������� 3.4.3
/// <summary>
/// ������� ������ ������� �� �����
/// ������ �� ����� �������
/// </summary>
/// <param name = "band">����������� ������</param>
/// <param name = "song">��������� �����</param>
Album* FindAlbum(Band& band, Song* song);

// ������� 3.4.4
/// <summary>
/// ������� ��������� �������
/// ���� ����� �� ���� �������� ������
/// </summary>
/// <param name = "band">����������� ������</param>
/// <param name = "allSongsCount">���-�� ���� �����</param>
/// <returns>
/// ��������� �� ������ �� ����� �������
/// </returns>
Song* GetAllSongs(Band* band, int& allSongsCount);