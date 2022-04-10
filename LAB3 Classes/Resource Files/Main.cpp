#include "../Header Files/OneToManyAggregation/3.4.h"
#include "../Header Files/StructureArrayFields/3.2.h"
#include "../Header Files/Agregation/3.3.h"
#include "../Header Files/Classes/3.5.h"
using namespace std;

void main()
{
	// TODO: подписывать только номер задания - создавать неудобство пользователю. 
	// Только с номером надо постоянно открывать методичку и читать, что в этом задании должно быть. 
	// Правильнее - вместе с номером описывать саму задачу в пользовательском интерфейсе,
	// чтобы не надо было подглядывать в методичку
	setlocale(LC_ALL, "ru");
	cout << "Задание 3.2.2:\n";
	DemoBook();

	cout << "\nЗадание 3.2.3:\n";
	DemoReadBookFromConsole();

	cout << "\nЗадание 3.2.4:\n";
	DemoWriteBook();

	cout << "\nЗадание 3.2.5:\n";
	DemoFindBookByAuthor();

	cout << "\nЗадание 3.2.6:\n";
	DemoRoute();

	cout << "\nЗадание 3.3.1, 3.3.2, 3.3.3, 3.3.4, 3.3.5:\n";
	DemoRectangleWithPoint();

	cout << "\nЗадание 3.3.7, 3.3.8, 3.3.9, 3.3.10, 3.3.11:\n";
	DemoFlightWithTime();

	cout << "\nЗадание 3.4.1, 3.4.2, 3.4.3, 3.4.4, 3.4.5, 3.4.6:\n";
	DemoBand();

	cout << "\nЗадания 3.5.1-3.5.5:\n";
	DemoBandClass();
}