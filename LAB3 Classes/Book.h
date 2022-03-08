#pragma once
#include <iostream>
using namespace std;

// ������� 3.2.1
/// <summary>
/// �����
/// </summary>
struct Book
{
	/// <summary>
	/// �������� �����
	/// </summary>
	string Name;

	/// <summary>
	/// ��� �������
	/// </summary>
	int ReleaseYear;

	/// <summary>
	/// ���-�� �������
	/// </summary>
	int PageCount;

	/// <summary>
	/// ������
	/// </summary>
	string Authors[10];

	/// <summary>
	/// ���-�� �������
	/// </summary>
	int AuthorCount = 0;
};