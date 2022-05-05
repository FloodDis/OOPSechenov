#pragma once
#include <iostream>
using namespace std;

//////////////////////// Post - пост в блоге пользователя с платным аккаунтом
class Post
{
	/// <summary>
	/// Название поста
	/// </summary>
	string _title;

	/// <summary>
	/// Текст поста
	/// </summary>
	string _text;

public:

	/// <summary>
	/// Сеттер поля _title
	/// </summary>
	/// <param name="title">Название поста</param>
	void SetTitle(string title);

	/// <summary>
	/// Сеттер класса _text
	/// </summary>
	/// <param name="text">Текст поста</param>
	void SetText(string text);

	/// <summary>
	/// Геттер поля _title
	/// </summary>
	/// <returns>Название поста</returns>
	string GetTitle();

	/// <summary>
	/// Геттер поля _text
	/// </summary>
	/// <returns>Текст поста</returns>
	string GetText();

	/// <summary>
	/// Конструктор класса Post
	/// </summary>
	/// <param name="title">Название поста</param>
	/// <param name="text">Текст поста</param>
	Post(string title, string text);
};
