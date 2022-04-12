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

	// TODO: сделать хранение по указателю, а не массив фиксированного размера +
	/// <summary>
	/// Авторы
	/// </summary>
	string* Authors;

	/// <summary>
	/// Кол-во авторов
	/// </summary>
	int AuthorCount = 0;
};

// Задание 3.2.3
/// <summary>
/// Функция чтения значений
/// структуры Book с клавиатуры
/// </summary>
/// <param name="book">Экземпляр структуры Book</param>
void ReadBookFromConsole(Book& book);

// Задание 3.2.4
/// <summary>
/// Функция вывода структуры
/// Book на экран
/// </summary>
/// <param name="book">Экземпляр структуры Book</param>
void WriteBookToConsole(Book& book);

// Задание 3.2.5
/// <summary>
/// Функция поиска книги
/// по имени автора
/// </summary>
/// <param name="books">Массив структур Book</param>
/// <param name="booksCount">Кол-во элементов массива</param>
/// <param name="author">Имя автора</param>
/// <returns>
/// Индекс найденного элемента, либо -1, если элемент
/// не найден
/// </returns>
int FindBookByAuthor(Book* books, int booksCount, string author);