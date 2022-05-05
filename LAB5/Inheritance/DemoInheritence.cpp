#include "DemoInheritence.h"

void ShowName(Person* person)
{
	cout << person->GetSurname() << " " << person->GetName() << " "
		<< person->GetMiddleName() << "\n";
}