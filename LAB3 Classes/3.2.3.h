#pragma once
#include "Book.h"
#include <iostream>
#include <exception>
using namespace std;

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