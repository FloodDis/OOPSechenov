#pragma once
#include "Person.h"

/// <summary>
/// �������
/// </summary>
class Student : public Person
{
private:

	/// <summary>
	/// ����� �������� ������
	/// </summary>
	int _creditCardNumber;

	/// <summary>
	/// ��� �����������
	/// </summary>
	int _yearOfAdmission;

public:

	/// <summary>
	/// ����������� ������ Student
	/// </summary>
	Student();

	/// <summary>
	/// ����������� ������ Student
	/// </summary>
	/// <param name="name">���</param>
	/// <param name="surname">�������</param>
	/// <param name="middleName">��������</param>
	/// <param name="creditCardNumber">����� �������� ������</param>
	/// <param name="yearOfAdmission">��� �����������</param>
	Student(string name, string surname, string middleName,
		int creditCardNumber, int yearOfAdmission);

	/// <summary>
	/// ������ ���� _creditCardNumber
	/// </summary>
	/// <param name="creditCardNumber">����� �������� ������</param>
	void SetCreditCardNumber(int creditCardNumber);

	/// <summary>
	/// ������ ���� _yearOfAdmission
	/// </summary>
	/// <param name="yearOfAdmission">��� �����������</param>
	void SetYearOfAdmission(int yearOfAdmission);

	/// <summary>
	/// ������ ���� _creditCardNumber
	/// </summary>
	/// <returns>����� �������� ������</returns>
	int GetCreditCardNumber();

	/// <summary>
	/// ������ ���� _yearOfAdmission
	/// </summary>
	/// <returns>��� �����������</returns>
	int GetYearOfAdmission();
};