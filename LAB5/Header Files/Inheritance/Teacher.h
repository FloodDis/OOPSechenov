#pragma once
#include "Person.h"

/// <summary>
/// ��������� �������
/// </summary>
enum Post
{
	/// <summary>
	/// ������
	/// </summary>
	Lecturer = 1,

	/// <summary>
	/// �������
	/// </summary>
	Pra�tician
};

/// <summary>
/// �������
/// </summary>
class Teacher : public Person
{
private:

	/// <summary>
	/// ��������� �������
	/// </summary>
	Post _post;

public: 

	/// <summary>
	/// ����������� ������ Teacher
	/// </summary>
	Teacher();

	/// <summary>
	/// ����������� ������ Teacher
	/// </summary>
	/// <param name="name">���</param>
	/// <param name="surname">�������</param>
	/// <param name="middleName">��������</param>
	/// <param name="post">���������</param>
	Teacher(string name, string surname, string middleName,
		Post post);

	/// <summary>
	/// ������ ���� _post
	/// </summary>
	/// <param name="post">���������</param>
	void SetPost(Post post);

	/// <summary>
	/// ������ ���� _post
	/// </summary>
	/// <returns>���������</returns>
	Post GetPost();
};