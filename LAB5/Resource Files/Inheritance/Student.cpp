#include "../../Header Files/Inheritance/Student.h"

Student::Student() : Person()
{

}

Student::Student(string name, string surname, string middleName,
	int creditCardNumber, int yearOfAdmission) :
	Person(name, surname, middleName)
{
	this->SetCreditCardNumber(creditCardNumber);
	this->SetYearOfAdmission(yearOfAdmission);
}

void Student::SetCreditCardNumber(int creditCardNumber)
{
	if (creditCardNumber < 0)
	{
		throw exception("Credit card number must be positive\n");
	}
	_creditCardNumber = creditCardNumber;
}

void Student::SetYearOfAdmission(int yearOfAdmission)
{
	if (yearOfAdmission < 0)
	{
		throw exception("Year of admission must be positive\n");
	}
	_yearOfAdmission = yearOfAdmission;
}

int Student::GetCreditCardNumber()
{
	return _creditCardNumber;
}

int Student::GetYearOfAdmission()
{
	return _yearOfAdmission;
}