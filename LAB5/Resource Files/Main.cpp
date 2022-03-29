#include "../Header Files/Inheritance/Teacher.h"
#include "../Header Files/Inheritance/DemoInheritence.h"
#include "../Header Files/Inheritance/Student.h"
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	Person* person = new Person("���������", "�������", "���������");
	ShowName(person);
	delete person;

	Student* student = new Student();
	student->SetName("���������");
	student->SetSurname("�������");
	student->SetMiddleName("���������");
	ShowName(student);
	delete student;

	Teacher* teacher = new Teacher();
	teacher->SetName("���������");
	teacher->SetSurname("�������");
	teacher->SetMiddleName("���������");
	ShowName(teacher);
	delete teacher;
}