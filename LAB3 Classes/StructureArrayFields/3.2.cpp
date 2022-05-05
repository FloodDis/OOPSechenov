#include "3.2.h"

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

// TODO: утечка памяти в функции +
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
	delete[] book;
}

// TODO: утечка памяти в функции +
void DemoFindBookByAuthor()
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
	string author;
	cout << "Enter author: ";
	cin >> author;
	int index = FindBookByAuthor(book, 3, author);
	if (index == -1)
	{
		cout << "Element isn't found!\n";
	}
	else
	{
		cout << "Author's book: ";
		WriteBookToConsole(book[index]);
	}
	delete[] book;
}

void DemoRoute()
{
	Route* routes = new Route[3];
	bool tryAgain = true;
	while (tryAgain)
	{
		try
		{
			for (int i = 0; i < 3; i++)
			{
				ReadRouteFromConsole(routes[i]);
			}
			tryAgain = false;
		}
		catch (exception error)
		{
			cout << "Wrong data!";
		}
	}
	string stop;
	cout << "Enter stop: ";
	cin >> stop;
	int index = FindRouteTo(routes, 3, stop);
	if (index == -1)
	{
		cout << "Element isn't found!\n";
	}
	else
	{
		cout << "Found route:\n";
		WriteRouteFromConsole(routes[index]);
	}
	
	delete[] routes;
}