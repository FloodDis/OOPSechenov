#pragma once
#include "Person.h"

/// <summary>
/// Должность учителя
/// </summary>
enum Post
{
	/// <summary>
	/// Лектор
	/// </summary>
	Lecturer = 1,

	/// <summary>
	/// Практик
	/// </summary>
	Praсtician
};

/// <summary>
/// Учитель
/// </summary>
class Teacher : public Person
{
private:

	/// <summary>
	/// Должность учителя
	/// </summary>
	Post _post;

public: 

	/// <summary>
	/// Конструктор класса Teacher
	/// </summary>
	Teacher();

	/// <summary>
	/// Конструктор класса Teacher
	/// </summary>
	/// <param name="name">Имя</param>
	/// <param name="surname">Фамилия</param>
	/// <param name="middleName">Отчество</param>
	/// <param name="post">Должность</param>
	Teacher(string name, string surname, string middleName,
		Post post);

	/// <summary>
	/// Сеттер поля _post
	/// </summary>
	/// <param name="post">Должность</param>
	void SetPost(Post post);

	/// <summary>
	/// Геттер поля _post
	/// </summary>
	/// <returns>Должность</returns>
	Post GetPost();
};