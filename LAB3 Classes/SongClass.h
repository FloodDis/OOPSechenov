#pragma once
#include <iostream>
#include "GenreEnum.h"
using namespace std;

/// <summary>
/// �����
/// </summary>
class SongClass
{
private:

	/// <summary>
	/// �������� �����
	/// </summary>
	string _name;

	/// <summary>
	/// ������������ � �������
	/// </summary>
	int _duration;

	/// <summary>
	/// ���� �����
	/// </summary>
	Genre _genre;

public:

	/// <summary>
	/// ����������� ������ SongClass
	/// </summary>
	SongClass();

	/// <summary>
	/// ����������� ������ SongClass
	/// </summary>
	/// <param name="name">�������� �����</param>
	/// <param name="duration">������������ � �������</param>
	/// <param name="genre">���� �����</param>
	SongClass(string name, int duration, Genre genre);

	/// <summary>
	/// ������ ���� _name
	/// </summary>
	/// <param name="name">�������� �����</param>
	void SetName(string name);

	/// <summary>
	/// ������ ���� _duration
	/// </summary>
	/// <param name="duration">������������ � �������</param>
	void SetDuration(int duration);

	/// <summary>
	/// ������ ���� _genre
	/// </summary>
	/// <param name="genre">���� �����</param>
	void SetGenre(Genre genre);

	/// <summary>
	/// ������ ���� _name
	/// </summary>
	/// <returns>�������� �����</returns>
	string GetName();

	/// <summary>
	/// ������ ���� _duration
	/// </summary>
	/// <returns>������������ � �������</returns>
	int GetDuration();

	/// <summary>
	/// ������ ���� _genre
	/// </summary>
	/// <returns>���� �����</returns>
	Genre GetGenre();
};