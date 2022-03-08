#include "3.2.3.h"

void ReadBookFromConsole(Book& book)
{
	int releaseYear;
	int pageCount;
	int authorsCount;
	cout << "Enter name of the book: ";
	cin >> book.Name;
	cout << "Enter year of the release: ";
	cin >> releaseYear;
	if (releaseYear < 0)
	{
		throw exception("Wrong data!");
	}
	book.ReleaseYear = releaseYear;
	cout << "Enter page count: ";
	cin >> pageCount;
	if (pageCount < 0)
	{
		throw exception("Wrong data!");
	}
	book.PageCount = pageCount;
	cout << "Enter authors count: ";
	cin >> authorsCount;
	if (authorsCount < 0)
	{
		throw exception("Wrong data!");
	}
	book.AuthorCount = authorsCount;
	for (int i = 0; i < book.AuthorCount; i++)
	{
		cout << "Enter author ¹" << i + 1 << ": ";
		cin >> book.Authors[i];
	}
}

void DemoReadBookFromConsole()
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
}