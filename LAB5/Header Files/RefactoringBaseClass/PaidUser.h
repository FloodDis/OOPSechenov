#pragma once
#include <iostream>
#include "User.h"
#include "Post.h"
using namespace std;

//////////////////////// Paid User - пользователь с платным аккаунтом
class PaidUser: public User
{
	/// <summary>
	/// Массив постов 
	/// </summary>
	Post* _posts;

	/// <summary>
	/// Кол-во элементов в массиве
	/// </summary>
	int _postsCount;

public:
	
	/// <summary>
	/// Сеттер полей _posts и _postsCount
	/// </summary>
	/// <param name="posts">Массив постов</param>
	/// <param name="postsCount">Кол-во элементов в массиве</param>
	void SetPosts(Post* posts, int postsCount);

	/// <summary>
	/// Геттер поля _posts
	/// </summary>
	/// <returns>Массив постов</returns>
	Post* GetPosts();

	/// <summary>
	/// Геттер поля _postsCount
	/// </summary>
	/// <returns>Кол-во элементов в массиве</returns>
	int GetPostsCount();

	/// <summary>
	/// Конструктор класса PaidUser
	/// </summary>
	/// <param name="id">Идентификационный номер</param>
	/// <param name="login">Логин</param>
	/// <param name="password">Пароль</param>
	/// <param name="posts">Массив постов</param>
	/// <param name="postsCount">Кол-во элементов в массиве</param>
	PaidUser(int id, string login, string password, Post* posts, int postsCount);

	/// <summary>
	/// Конструктор класса PaidUser
	/// </summary>
	/// <param name="id">Идентификационный номер</param>
	/// <param name="login">Логин</param>
	/// <param name="password">Пароль</param>
	PaidUser(int id, string login, string password);
};
