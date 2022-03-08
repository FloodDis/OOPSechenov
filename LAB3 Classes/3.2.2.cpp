#include "3.2.2.h"

void DemoBook()
{
	Book book;
	book.Name = "Sword of destiny";
	book.Authors[0] = "Andrzej Sapkowski";
	book.Authors[1] = "David French";
	book.PageCount = 2;
	book.ReleaseYear = 1992;
	book.PageCount = 384;

	cout << "Book " << book.Name << " was publsihed in "
		<< book.ReleaseYear << " and has authors: "
		<< book.Authors[0] << ", " << book.Authors[1] << "\n\n";
}