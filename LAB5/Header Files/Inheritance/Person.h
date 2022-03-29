#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// �������
/// </summary>
class Person
{
private:

	/// <summary>
	/// ���
	/// </summary>
	string _name;

	/// <summary>
	/// �������
	/// </summary>
	string _surname;

	/// <summary>
	/// ��������
	/// </summary>
	string _middleName;

public:

	/// <summary>
	/// ����������� ������ Person
	/// </summary>
	Person();

	/// <summary>
	/// ����������� ������ Person
	/// </summary>
	/// <param name="name">���</param>
	/// <param name="surname">�������</param>
	/// <param name="middleName">��������</param>
	Person(string name, string surname, string middleName);

	/// <summary>
	/// ������ ���� _name
	/// </summary>
	/// <param name="name">���</param>
	void SetName(string name);

	/// <summary>
	/// ������ ���� _surname
	/// </summary>
	/// <param name="surname">�������</param>
	void SetSurname(string surname);

	/// <summary>
	/// ������ ���� _middleName
	/// </summary>
	/// <param name="middleName">��������</param>
	void SetMiddleName(string middleName);

	/// <summary>
	/// ������ ���� _name
	/// </summary>
	/// <returns>���</returns>
	string GetName();

	/// <summary>
	/// ������ ���� _surname
	/// </summary>
	/// <returns>�������</returns>
	string GetSurname();

	/// <summary>
	/// ������ ���� _middleName
	/// </summary>
	/// <returns>��������</returns>
	string GetMiddleName();
};