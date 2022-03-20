#pragma once
#include <iostream>
#include "SongClass.h"
using namespace std;

/// <summary>
/// ������
/// </summary>
class AlbumClass
{
private:

	/// <summary>
	/// �������� �������
	/// </summary>
	string _name;

	/// <summary>
	/// ��� �������
	/// </summary>
	int _yearRelease;

	/// <summary>
	/// ������ ����� � �������
	/// </summary>
	SongClass* _songs;

	/// <summary>
	/// ���-�� ����� � �������
	/// </summary>
	int _songsCount;

public:

	/// <summary>
	/// ����������� ������ AlbumClass
	/// </summary>
	AlbumClass();

	/// <summary>
	/// ����������� ������ AlbumClass
	/// </summary>
	/// <param name="name">�������� �������</param>
	/// <param name="yearOfRelease">��� �������</param>
	/// <param name="songs">������ �����</param>
	/// <param name="songsCount">���-�� ����� � �������</param>
	AlbumClass(string name, int yearRelease, SongClass* songs, int songsCount);

	/// <summary>
	/// ������ ���� _name
	/// </summary>
	/// <param name="name"></param>
	void SetName(string name);

	/// <summary>
	/// ������ ���� _yearRelease
	/// </summary>
	/// <param name="yearRelease">��� �������</param>
	void SetYearRelease(int yearRelease);

	/// <summary>
	/// ������ ���� _songs
	/// </summary>
	/// <param name="songs">������ ����� � ������</param>
	void SetSongs(SongClass* songs);

	/// <summary>
	/// ������ ���� _songsCount
	/// </summary>
	/// <param name="songsCount">���-�� ����� � </param>
	void SetSongsCount(int songsCount);

	/// <summary>
	/// ������ ���� _name
	/// </summary>
	/// <returns>�������� �����</returns>
	string GetName();

	/// <summary>
	/// ������ ���� _yearRelease
	/// </summary>
	/// <returns>��� �������</returns>
	int GetYearRelease();

	/// <summary>
	/// ������ ���� _songs
	/// </summary>
	/// <returns>������ ����� � �������</returns>
	SongClass* GetSongs();

	/// <summary>
	/// ������ ���� _songsCount
	/// </summary>
	/// <returns>���-�� ����� � �������</returns>
	int GetSongsCount();

};