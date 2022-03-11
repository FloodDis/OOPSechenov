#pragma once
#include "Book.h"
#include "Route.h"
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
/// <param name="book">Экземпляр структуры Book</param>
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
/// <param name="book">Экземпляр структуры Book</param>
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

// Задание 3.2.6
/// <summary>
/// Функция чтения значений
/// структуры Route с клавиатуры
/// </summary>
/// <param name="route">Экземпляр структуры Route</param>
void ReadRouteFromConsole(Route& route);

/// <summary>
/// Функция вывода
/// структуры Route на экран
/// </summary>
/// <param name="route">Экземпляр структуры Route</param>
void WriteRouteFromConsole(Route& route);

/// <summary>
/// Функция поиска маршрута по
/// названию остановки
/// </summary>
/// <param name="routes">Массив структур Route</param>
/// <param name="routeCount">Кол-во элементов массива</param>
/// <param name="stop">Название остановки</param>
/// <returns>
/// Индекс найденного элемента, либо -1, если элемент
/// не найден
/// </returns>
int FindRouteTo(Route* routes, int routeCount, string stop);

/// <summary>
/// Функция демонстрации
/// работы структуры Route 
/// и методов для работы с
/// ней
/// </summary>
void DemoRoute();