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
	if (pageCount < 0 || pageCount > 2022)
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

int FindBookByAuthor(Book* books, int booksCount, string author)
{
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books->AuthorCount; j++)
		{
			if (books[i].Authors[j] == author)
			{
				return i;
			}
		}

	}
	return -1;
}

void DemoFindBookByAuthor()
{
	Book* book = new Book[3];
	bool tryAgain = true;
	while (tryAgain)
	{
		try
		{
			for (int i = 0; i < 2; i++)
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
	int index = FindBookByAuthor(book, 2, author);
	if (index == -1)
	{
		cout << "Element isn't found!\n";
	}
	else
	{
		cout << "Author's book: ";
		WriteBookToConsole(book[index]);
	}
}