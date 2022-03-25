#pragma once
#include <iostream>
using namespace std;

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