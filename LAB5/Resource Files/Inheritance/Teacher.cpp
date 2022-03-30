#include "../../Header Files/Inheritance/Teacher.h"

Teacher::Teacher() :Person()
{

}

Teacher::Teacher(string name, string surname, string middleName,
	Posistion post) : Person(name, surname, middleName)
{
	this->SetPost(post);
}

void Teacher::SetPost(Posistion post)
{
	_position = post;
}

Posistion Teacher::GetPost()
{
	return _position;
}