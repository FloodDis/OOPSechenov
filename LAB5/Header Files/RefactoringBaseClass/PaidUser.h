#pragma once
#include <iostream>
#include "User.h"
#include "Post.h"
using namespace std;

//////////////////////// Paid User - ������������ � ������� ���������
class PaidUser: public User
{
	/// <summary>
	/// ������ ������ 
	/// </summary>
	Post* _posts;

	/// <summary>
	/// ���-�� ��������� � �������
	/// </summary>
	int _postsCount;

public:
	
	/// <summary>
	/// ������ ����� _posts � _postsCount
	/// </summary>
	/// <param name="posts">������ ������</param>
	/// <param name="postsCount">���-�� ��������� � �������</param>
	void SetPosts(Post* posts, int postsCount);

	/// <summary>
	/// ������ ���� _posts
	/// </summary>
	/// <returns>������ ������</returns>
	Post* GetPosts();

	/// <summary>
	/// ������ ���� _postsCount
	/// </summary>
	/// <returns>���-�� ��������� � �������</returns>
	int GetPostsCount();

	/// <summary>
	/// ����������� ������ PaidUser
	/// </summary>
	/// <param name="id">����������������� �����</param>
	/// <param name="login">�����</param>
	/// <param name="password">������</param>
	/// <param name="posts">������ ������</param>
	/// <param name="postsCount">���-�� ��������� � �������</param>
	PaidUser(int id, string login, string password, Post* posts, int postsCount);

	/// <summary>
	/// ����������� ������ PaidUser
	/// </summary>
	/// <param name="id">����������������� �����</param>
	/// <param name="login">�����</param>
	/// <param name="password">������</param>
	PaidUser(int id, string login, string password);
};
