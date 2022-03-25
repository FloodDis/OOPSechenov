#pragma once
#include <exception>
#include <iostream>
#include "2.2.1.1.h"
using namespace std;

///<summary>
///Функция сортировки массива с обработкой исключений
///</summary>
///<param name ="values">массив чисел типа double</param>
///<param name ="count">кол-во элементов в массиве</param>
void SortException(double* values, int count);

///<summary>
///Функция демонстрации работы функции сортировки
///с обработкой исключений
///</summary>
void DemoSortException();