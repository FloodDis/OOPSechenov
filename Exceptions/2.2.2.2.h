#pragma once
#include <iostream>
using namespace std;

// TODO: ������ ��������� � ���� �����
/// <summary>
/// ������� � ���������� �����
/// </summary>
struct PhoneContact
{
	/// <summary>
	/// ���
	/// </summary>
	string Name;

	/// <summary>
	/// ����� ��������
	/// </summary>
	string Number;

	/// <summary>
	/// ������ ��������(������, �����)
	/// </summary>
	string Status;
};

/// <summary>
/// ����� � ������
/// </summary>
struct Song
{
	/// <summary>
	/// �������� �����
	/// </summary>
	string SongName;

	/// <summary>
	/// ������������ � �������
	/// </summary>
	int Duration;

	/// <summary>
	/// �������� ���������, � �������
	/// ��������� �����
	/// </summary>
	string PlaylistName;
};

/// <summary>
/// ���������� � �������� ������
/// </summary>
struct Subject
{
	/// <summary>
	/// �������� ����������
	/// </summary>
	string Name;

	/// <summary>
	/// ���-�� �����, ����������
	/// �� �������� ����������
	/// </summary>
	int Hours;

	/// <summary>
	/// ������ �� ����������
	/// </summary>
	int Score;
};

/// <summary>
/// ������� ������������
/// ������ ��������
/// </summary>
void DemoStructures2();