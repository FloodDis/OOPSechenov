#pragma once
#include <iostream>
using namespace std;

// 2.2.2 Создание структур
// Задача: Описать структуру телефонный контакт

/// <summary>
/// Контакт в телефонной книге
/// </summary>
struct PhoneContact
{
	/// <summary>
	/// Имя
	/// </summary>
	string Name;

	/// <summary>
	/// Номер телефона
	/// </summary>
	string Number;

	/// <summary>
	/// Статус контакта(работа, семья)
	/// </summary>
	string Status;
};