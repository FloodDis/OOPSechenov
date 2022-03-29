#include "../../Header Files/Inheritance/Teacher.h"

Teacher::Teacher() :Person()
{

}

Teacher::Teacher(string name, string surname, string middleName,
	Post post) : Person(name, surname, middleName)
{
	this->SetPost(post);
}

void Teacher::SetPost(Post post)
{
	_post = post;
}

Post Teacher::GetPost()
{
	return _post;
}