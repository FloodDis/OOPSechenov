#pragma once
#include "Person.h"

/// <summary>
/// Должность учителя
/// </summary>
enum Posistion
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
	Posistion _position;

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
		Posistion post);

	/// <summary>
	/// Сеттер поля _position
	/// </summary>
	/// <param name="post">Должность</param>
	void SetPost(Posistion post);

	/// <summary>
	/// Геттер поля _position
	/// </summary>
	/// <returns>Должность</returns>
	Posistion GetPost();
};