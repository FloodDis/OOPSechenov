#include "../Header Files/Inheritance/Teacher.h"
#include "../Header Files/Inheritance/DemoInheritence.h"
#include "../Header Files/Inheritance/Student.h"
#include "../Header Files/RefactoringBaseClass/PaidUser.h"
#include "../Header Files/RefactoringBaseClass/Login.h"
#include "../Header Files/Polymorphism/5.3.h"
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

	cout << "\n";
	int userCount = 4;
	User** users = new User * []
	{
		new User(100000, "morkovka1995", "1995morkovka"),
			new User(100001, "ilonMask", "XA12"),
			new User(100002, "megazver", "password"),
			new User(100003, "yogurt", "ksTPQzSu"),
	};
	int paidUserCount = 4;
	User** paidUsers = new User * []
	{
		new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
			new PaidUser(200001, "systemEXE", "UgfkDGmU"),
			new PaidUser(200002, "RazorQ", "TBgRnbCP"),
			new PaidUser(200003, "schdub", "CetyQVID"),
	};

	string login = "megazver";
	string password = "password";
	User* loginedUser = Login(users, userCount, login, password);

	cout << "Signed in as: " << loginedUser->GetLogin() << '\n';

	login = "systemEXE";
	password = "UgfkDGmU";
	User* loginedPaidUser = 
		Login(paidUsers, paidUserCount, login, password);

	cout << "Signed in as: " << loginedPaidUser->GetLogin() << '\n';

	for (int i = 0; i < userCount; i++)
	{
		delete users[i];
	}
	delete[] users;

	for (int i = 0; i < paidUserCount; i++)
	{
		delete paidUsers[i];
	}
	delete[] paidUsers;

	cout << "\n";
	DemoDiscount();
}