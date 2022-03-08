#pragma once
#include <iostream>
using namespace std;

// Задание 3.2.1
/// <summary>
/// Книга
/// </summary>
struct Book
{
	/// <summary>
	/// Название книги
	/// </summary>
	string Name;

	/// <summary>
	/// Год издания
	/// </summary>
	int ReleaseYear;

	/// <summary>
	/// Кол-во страниц
	/// </summary>
	int PageCount;

	/// <summary>
	/// Авторы
	/// </summary>
	string Authors[10];

	/// <summary>
	/// Кол-во авторов
	/// </summary>
	int AuthorCount = 0;
};