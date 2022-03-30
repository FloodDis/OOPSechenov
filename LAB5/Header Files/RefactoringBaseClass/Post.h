#pragma once
#include <iostream>
using namespace std;

//////////////////////// Post - ���� � ����� ������������ � ������� ���������
class Post
{
	/// <summary>
	/// �������� �����
	/// </summary>
	string _title;

	/// <summary>
	/// ����� �����
	/// </summary>
	string _text;

public:

	/// <summary>
	/// ������ ���� _title
	/// </summary>
	/// <param name="title">�������� �����</param>
	void SetTitle(string title);

	/// <summary>
	/// ������ ������ _text
	/// </summary>
	/// <param name="text">����� �����</param>
	void SetText(string text);

	/// <summary>
	/// ������ ���� _title
	/// </summary>
	/// <returns>�������� �����</returns>
	string GetTitle();

	/// <summary>
	/// ������ ���� _text
	/// </summary>
	/// <returns>����� �����</returns>
	string GetText();

	/// <summary>
	/// ����������� ������ Post
	/// </summary>
	/// <param name="title">�������� �����</param>
	/// <param name="text">����� �����</param>
	Post(string title, string text);
};
