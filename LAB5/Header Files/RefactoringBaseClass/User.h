#pragma once
#include <iostream>
using namespace std;

//////////////////////// User - ������� ������������
class User
{
private:

	/// <summary>
	/// ����������������� �����
	/// </summary>
	int _id;

	/// <summary>
	/// �����
	/// </summary>
	string _login;

	/// <summary>
	/// ������
	/// </summary>
	string _password;

protected:

	/// <summary>
	/// ������ ���� _id
	/// </summary>
	/// <param name="id">����������������� �����</param>
	void SetId(int id);

public:

	/// <summary>
	/// ������ ���� _login
	/// </summary>
	/// <param name="login">�����</param>
	void SetLogin(string login);

	/// <summary>
	/// ������ ���� _password
	/// </summary>
	/// <param name="password">������</param>
	void SetPassword(string password);

	/// <summary>
	/// ������ ���� _id
	/// </summary>
	/// <returns>����������������� �����</returns>
	int GetId();

	/// <summary>
	/// ������ ���� _login
	/// </summary>
	/// <returns>�����</returns>
	string GetLogin();

	/// <summary>
	/// ������ ���� _password
	/// </summary>
	/// <returns>������</returns>
	string GetPassword();

	/// <summary>
	/// ����������� ������ User
	/// </summary>
	/// <param name="id">����������������� �����</param>
	/// <param name="login">�����</param>
	/// <param name="password">������</param>
	User(int id, string login, string password);

	/// <summary>
	/// �������� ��������� ������
	/// </summary>
	/// <param name="password">������</param>
	/// <returns>
	/// true - ������ �����,
	/// false - ������ �� �����
	/// </returns>
	bool IsCorrectPassword(string password);
};
