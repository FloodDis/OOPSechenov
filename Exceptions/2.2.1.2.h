#pragma once
#include <exception>
#include <iostream>
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