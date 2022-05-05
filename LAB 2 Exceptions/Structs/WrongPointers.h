#pragma once
#include <iostream>
#include "Flight.h"
#include "Film.h"
using namespace std;

// 2.2.4 Работа с объектами структур через указатели
// Задача:
// Написать функцию WrongPointers(), в которой присвоить в указатель на Рейс
// адрес переменной Фильм и наоборот 

/// <summary>
/// Демонстрация работы присвоения указателя на неправильный тип объекта
/// </summary>
void WrongPointers();