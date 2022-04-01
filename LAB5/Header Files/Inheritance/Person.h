#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// Человек
/// </summary>
class Person
{
private:

	/// <summary>
	/// Имя
	/// </summary>
	string _name;

	/// <summary>
	/// Фамилия
	/// </summary>
	string _surname;

	/// <summary>
	/// Отчество
	/// </summary>
	string _middleName;

public:

	/// <summary>
	/// Конструктор класса Person
	/// </summary>
	Person();

	/// <summary>
	/// Конструктор класса Person
	/// </summary>
	/// <param name="name">Имя</param>
	/// <param name="surname">Фамилия</param>
	/// <param name="middleName">Отчество</param>
	Person(string name, string surname, string middleName);

	/// <summary>
	/// Сеттер поля _name
	/// </summary>
	/// <param name="name">Имя</param>
	void SetName(string name);

	/// <summary>
	/// Сеттер поля _surname
	/// </summary>
	/// <param name="surname">Фамилия</param>
	void SetSurname(string surname);

	/// <summary>
	/// Сеттер поля _middleName
	/// </summary>
	/// <param name="middleName">Отчество</param>
	void SetMiddleName(string middleName);

	/// <summary>
	/// Геттер поля _name
	/// </summary>
	/// <returns>Имя</returns>
	string GetName();

	/// <summary>
	/// Геттер поля _surname
	/// </summary>
	/// <returns>Фамилия</returns>
	string GetSurname();

	/// <summary>
	/// Геттер поля _middleName
	/// </summary>
	/// <returns>Отчество</returns>
	string GetMiddleName();
};