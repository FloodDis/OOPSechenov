#pragma once
#include "Person.h"

/// <summary>
/// Студент
/// </summary>
class Student : public Person
{
private:

	/// <summary>
	/// Номер зачетной книжки
	/// </summary>
	int _creditCardNumber;

	/// <summary>
	/// Год поступления
	/// </summary>
	int _yearOfAdmission;

public:

	/// <summary>
	/// Конструктор класса Student
	/// </summary>
	Student();

	/// <summary>
	/// Конструктор класса Student
	/// </summary>
	/// <param name="name">Имя</param>
	/// <param name="surname">Фамилия</param>
	/// <param name="middleName">Отчество</param>
	/// <param name="creditCardNumber">Номер зачетной книжки</param>
	/// <param name="yearOfAdmission">Год поступления</param>
	Student(string name, string surname, string middleName,
		int creditCardNumber, int yearOfAdmission);

	/// <summary>
	/// Сеттер поля _creditCardNumber
	/// </summary>
	/// <param name="creditCardNumber">Номер зачетной книжки</param>
	void SetCreditCardNumber(int creditCardNumber);

	/// <summary>
	/// Сеттер поля _yearOfAdmission
	/// </summary>
	/// <param name="yearOfAdmission">Год поступления</param>
	void SetYearOfAdmission(int yearOfAdmission);

	/// <summary>
	/// Геттер поля _creditCardNumber
	/// </summary>
	/// <returns>Номер зачетной книжки</returns>
	int GetCreditCardNumber();

	/// <summary>
	/// Геттер поля _yearOfAdmission
	/// </summary>
	/// <returns>Год поступления</returns>
	int GetYearOfAdmission();
};