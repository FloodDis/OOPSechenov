#include "3.2.4.h"

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.AuthorCount; i++)
	{
		if (i == book.AuthorCount)
		{
			cout << book.Authors[i] << ". ";
		}
		else
		{
			cout << book.Authors[i] << ", ";
		}
	}
	cout << book.Name << ". ";
	cout << book.ReleaseYear << ". - ";
	cout << book.PageCount << " ñ.\n";
}

void DemoWriteBook()
{
	Book* book = new Book[3];
	bool tryAgain = true;
	while (tryAgain)
	{
		try
		{
			for (int i = 0; i < 3; i++)
			{
				ReadBookFromConsole(book[i]);
			}
			tryAgain = false;
		}
		catch (exception error)
		{
			cout << "Wrong data!";
		}
	}
	for (int i = 0; i < 3; i++)
	{
		WriteBookToConsole(book[i]);
	}
}