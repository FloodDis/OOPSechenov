#pragma once
#include "Book.h"
#include "Route.h"
#include <exception>
using namespace std;
// TODO: раскидать все файлы по подпапкам под каждую предметную область
// TODO: раскидать демо-функции для каждой предметной области по отдельным файлам и поместить в подпапки своей предметной области
// TODO: переименовать все файлы с числовыми названиями в понятные названия
// TODO: зачем указатель на ссылку? Почему не просто ссылка?
// Задание 3.2.2
/// <summary>
/// Функция демонстрации структуры 
/// Book 
/// </summary>
void DemoBook();

/// <summary>
/// Функция демонстрации метода 
/// чтения значений
/// структуры Book с клавиатуры
/// </summary>
void DemoReadBookFromConsole();

/// <summary>
/// Функция демонстрации работы
/// метода WriteBookToConsole
/// </summary>
void DemoWriteBook();

/// <summary>
/// Функция демонстрации метода
/// FindBookByAuthor
/// </summary>
void DemoFindBookByAuthor();

/// <summary>
/// Функция демонстрации
/// работы структуры Route 
/// и методов для работы с
/// ней
/// </summary>
void DemoRoute();