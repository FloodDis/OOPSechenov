#pragma once
#include "Person.h"

/// <summary>
/// ��������� �������
/// </summary>
enum Posistion
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
	Posistion _position;

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
		Posistion post);

	/// <summary>
	/// ������ ���� _position
	/// </summary>
	/// <param name="post">���������</param>
	void SetPost(Posistion post);

	/// <summary>
	/// ������ ���� _position
	/// </summary>
	/// <returns>���������</returns>
	Posistion GetPost();
};