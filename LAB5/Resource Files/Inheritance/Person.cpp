#include "../../Header Files/Inheritance/Person.h"

Person::Person()
{

}

Person::Person(string name, string surname, string middleName)
{
	this->SetName(name);
	this->SetSurname(surname);
	this->SetMiddleName(middleName);
}

void Person::SetName(string name)
{
	_name = name;
}

void Person::SetSurname(string surname)
{
	_surname = surname;
}

void Person::SetMiddleName(string middleName)
{
	_middleName = middleName;
}

string Person::GetName()
{
	return _name;
}

string Person::GetSurname()
{
	return _surname;
}

string Person::GetMiddleName()
{
	return _middleName;
}