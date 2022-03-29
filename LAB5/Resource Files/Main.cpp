#include "../Header Files/Inheritance/Teacher.h"
#include "../Header Files/Inheritance/DemoInheritence.h"
#include "../Header Files/Inheritance/Student.h"
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	Person* person = new Person("Владислав", "Сеченов", "Вадимович");
	ShowName(person);
	delete person;

	Student* student = new Student();
	student->SetName("Владислав");
	student->SetSurname("Сеченов");
	student->SetMiddleName("Вадимович");
	ShowName(student);
	delete student;

	Teacher* teacher = new Teacher();
	teacher->SetName("Владислав");
	teacher->SetSurname("Сеченов");
	teacher->SetMiddleName("Вадимович");
	ShowName(teacher);
	delete teacher;
}