#pragma once
#include <iostream>
#include "User.h"
using namespace std;

/// <summary>
/// Функция поиска пользователя
/// с введеными логином и паролем
/// </summary>
/// <param name="users">Массив пользователей</param>
/// <param name="usersCount">Кол-во элементов в массиве</param>
/// <param name="enteredLogin">Введенный логин</param>
/// <param name="enteredPassword">Введенный пароль</param>
/// <returns>
/// Указатель на найденный элемент и
/// nullptr, если элемент не найден
/// </returns>
User* Login(User** users, int usersCount, 
	string enteredLogin, string enteredPassword);