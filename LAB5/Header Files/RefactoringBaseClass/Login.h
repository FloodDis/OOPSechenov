#pragma once
#include <iostream>
#include "User.h"
using namespace std;

/// <summary>
/// ������� ������ ������������
/// � ��������� ������� � �������
/// </summary>
/// <param name="users">������ �������������</param>
/// <param name="usersCount">���-�� ��������� � �������</param>
/// <param name="enteredLogin">��������� �����</param>
/// <param name="enteredPassword">��������� ������</param>
/// <returns>
/// ��������� �� ��������� ������� �
/// nullptr, ���� ������� �� ������
/// </returns>
User* Login(User** users, int usersCount, 
	string enteredLogin, string enteredPassword);