#pragma once
#include <iostream>
#include "AlbumClass.h"
using namespace std;

/// <summary>
/// ����������� ������
/// </summary>
class BandClass
{
private:

	/// <summary>
	/// �������� ������
	/// </summary>
	string _name;

	/// <summary>
	/// ���������� � ������
	/// </summary>
	string _information;

	/// <summary>
	/// ������ ��������
	/// </summary>
	AlbumClass* _albums;

	/// <summary>
	/// ���-�� ��������
	/// </summary>
	int _albumsCount;

public:

	/// <summary>
	/// ����������� ������ BandClass
	/// </summary>
	BandClass();

	/// <summary>
	/// ����������� ������ BandClass
	/// </summary>
	/// <param name="name">�������� ������</param>
	/// <param name="information">���������� � ������</param>
	/// <param name="albums">������ ��������</param>
	/// <param name="albumsCount">���-�� ��������</param>
	BandClass(string name, string information, AlbumClass* albums, int albumsCount);

	/// <summary>
	/// ������ ���� _name
	/// </summary>
	/// <param name="name">�������� ������</param>
	void SetName(string name);

	/// <summary>
	/// ������ ���� _information
	/// </summary>
	/// <param name="information">���������� � ������</param>
	void SetInformation(string information);

	/// <summary>
	/// ������ ���� _albums
	/// </summary>
	/// <param name="albums">������ �������� ������</param>
	void SetAlbums(AlbumClass* albums);

	/// <summary>
	/// ������ ���� _albumsCount
	/// </summary>
	/// <param name="albumsCount">���-�� ��������</param>
	void SetAlbumsCount(int albumsCount);

	/// <summary>
	/// ������ ���� _name
	/// </summary>
	/// <returns>�������� ����������� ������</returns>
	string GetName();

	/// <summary>
	/// ������ ���� _information
	/// </summary>
	/// <returns>���������� � ������</returns>
	string GetInformation();

	/// <summary>
	/// ������ ���� _albums
	/// </summary>
	/// <returns>������ ��������</returns>
	AlbumClass* GetAlbums();

	/// <summary>
	/// ������ ���� _albumsCount
	/// </summary>
	/// <returns></returns>
	int GetAlbumsCount();

	/// <summary>
	/// ����� ������ ����� ����� ����
	/// �������� ������
	/// </summary>
	/// <param name="songTitle"></param>
	/// <returns></returns>
	SongClass* FindSong(string songTitle);

	/// <summary>
	/// ����� ������ ������� �� �����
	/// �� ����� �������
	/// </summary>
	/// <param name="song"></param>
	/// <returns></returns>
	AlbumClass* FindAlbum(SongClass* song);

	/// <summary>
	/// ����� ��������� ������� ���� �����
	/// �� ���� �������� ������
	/// </summary>
	/// <param name="allSongsCount">���-�� ���� �����</param>
	/// <returns></returns>
	SongClass* GetAllSongs(int& allSongsCount);

	/// <summary>
	/// ����� ��������� ������� ����
	/// ����� ������ ������������� �����
	/// </summary>
	/// <param name="findingGenre">���� ������� �����</param>
	/// <param name="allSongsCount">
	/// ���-�� ���� ����� ������������� �����
	/// </param>
	/// <returns>
	/// ������ ���� ����� ������ �������������
	/// �����
	/// </returns>
	SongClass* GetAllGenreSongs(Genre findingGenre, int& allSongsCount);
};