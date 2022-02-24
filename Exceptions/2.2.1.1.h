#pragma once
#include <exception>
#include <iostream>
using namespace std;

///<summary>
///Функция сортировки массива
///</summary>
///<param name ="values">массив чисел типа double</param>
///<param name ="count">кол-во элементов в массиве</param>
void Sort(double* values, int count);

///<summary>
///Функция демонстрации работы функции сортировки
///</summary>
void DemoSort();