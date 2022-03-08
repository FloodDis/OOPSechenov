#include "3.2.4.h"

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.AuthorCount; i++)
	{
		if (i == book.AuthorCount)
		{
			cout << book.Authors[i]<<". ";
		}
		else
		{
			cout << book.Authors[i] << ", ";
		}
	}
	cout << book.Name << ". ";
	cout << book.ReleaseYear << ". - ";
	cout << book.PageCount << ".\n";
}

void DemoWriteBook()
{
	Book book;
	bool tryAgain = true;
	while (tryAgain)
	{
		try
		{
			ReadBookFromConsole(book);
			tryAgain = false;
		}
		catch (exception error)
		{
			cout << "Wrong data!";
		}
	}
	
	WriteBookToConsole(book);
}