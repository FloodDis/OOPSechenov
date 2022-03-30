#pragma once
#include <iostream>
using namespace std;

//////////////////////// User - обычный пользователь
class User
{
private:

	/// <summary>
	/// Идентификационный номер
	/// </summary>
	int _id;

	/// <summary>
	/// Логин
	/// </summary>
	string _login;

	/// <summary>
	/// Пароль
	/// </summary>
	string _password;

protected:

	/// <summary>
	/// Сеттер поля _id
	/// </summary>
	/// <param name="id">Идентификационный номер</param>
	void SetId(int id);

public:

	/// <summary>
	/// Сеттер поля _login
	/// </summary>
	/// <param name="login">Логин</param>
	void SetLogin(string login);

	/// <summary>
	/// Сеттер поля _password
	/// </summary>
	/// <param name="password">Пароль</param>
	void SetPassword(string password);

	/// <summary>
	/// Геттер поля _id
	/// </summary>
	/// <returns>Идентификационный номер</returns>
	int GetId();

	/// <summary>
	/// Геттер поля _login
	/// </summary>
	/// <returns>Логин</returns>
	string GetLogin();

	/// <summary>
	/// Геттер поля _password
	/// </summary>
	/// <returns>Пароль</returns>
	string GetPassword();

	/// <summary>
	/// Конструктор класса User
	/// </summary>
	/// <param name="id">Идентификационный номер</param>
	/// <param name="login">Логин</param>
	/// <param name="password">Пароль</param>
	User(int id, string login, string password);

	/// <summary>
	/// Проверка вводимого пароля
	/// </summary>
	/// <param name="password">Пароль</param>
	/// <returns>
	/// true - пароль верен,
	/// false - пароль не верен
	/// </returns>
	bool IsCorrectPassword(string password);
};
