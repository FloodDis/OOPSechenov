#pragma once
#include "Book.h"
#include <exception>
using namespace std;

// Задание 3.2.2
/// <summary>
/// Функция демонстрации структуры 
/// Book 
/// </summary>
void DemoBook();

// Задание 3.2.3
/// <summary>
/// Функция чтения значений
/// структуры Book с клавиатуры
/// </summary>
void ReadBookFromConsole(Book& book);

/// <summary>
/// Функция демонстрации метода 
/// чтения значений
/// структуры Book с клавиатуры
/// </summary>
void DemoReadBookFromConsole();

// Задание 3.2.4
/// <summary>
/// Функция вывода структуры
/// Book на экран
/// </summary>
void WriteBookToConsole(Book& book);

/// <summary>
/// Функция демонстрации работы
/// метода WriteBookToConsole
/// </summary>
void DemoWriteBook();

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

/// <summary>
/// Функция демонстрации метода
/// FindBookByAuthor
/// </summary>
void DemoFindBookByAuthor();