#include "Book.h"

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
		throw exception("Release must be positive\n");
	}
	book.ReleaseYear = releaseYear;
	cout << "Enter page count: ";
	cin >> pageCount;
	if (pageCount < 0 || pageCount > 2022)
	{
		throw exception
		("Page count must be positive and less than 2022\n");
	}
	book.PageCount = pageCount;
	cout << "Enter authors count: ";
	cin >> authorsCount;
	if (authorsCount < 0 || authorsCount > 10)
	{
		throw exception("Authors must be positive and less than 10\n");
	}
	book.AuthorCount = authorsCount;
	for (int i = 0; i < book.AuthorCount; i++)
	{
		cout << "Enter author ¹" << i + 1 << ": ";
		cin >> book.Authors[i];
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