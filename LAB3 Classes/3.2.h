#pragma once
#include "Book.h"
#include "Route.h"
#include <exception>
using namespace std;

// ������� 3.2.2
/// <summary>
/// ������� ������������ ��������� 
/// Book 
/// </summary>
void DemoBook();

// ������� 3.2.3
/// <summary>
/// ������� ������ ��������
/// ��������� Book � ����������
/// </summary>
/// <param name="book">��������� ��������� Book</param>
void ReadBookFromConsole(Book& book);

/// <summary>
/// ������� ������������ ������ 
/// ������ ��������
/// ��������� Book � ����������
/// </summary>
void DemoReadBookFromConsole();

// ������� 3.2.4
/// <summary>
/// ������� ������ ���������
/// Book �� �����
/// </summary>
/// <param name="book">��������� ��������� Book</param>
void WriteBookToConsole(Book& book);

/// <summary>
/// ������� ������������ ������
/// ������ WriteBookToConsole
/// </summary>
void DemoWriteBook();

// ������� 3.2.5
/// <summary>
/// ������� ������ �����
/// �� ����� ������
/// </summary>
/// <param name="books">������ �������� Book</param>
/// <param name="booksCount">���-�� ��������� �������</param>
/// <param name="author">��� ������</param>
/// <returns>
/// ������ ���������� ��������, ���� -1, ���� �������
/// �� ������
/// </returns>
int FindBookByAuthor(Book* books, int booksCount, string author);

/// <summary>
/// ������� ������������ ������
/// FindBookByAuthor
/// </summary>
void DemoFindBookByAuthor();

// ������� 3.2.6
/// <summary>
/// ������� ������ ��������
/// ��������� Route � ����������
/// </summary>
/// <param name="route">��������� ��������� Route</param>
void ReadRouteFromConsole(Route& route);

/// <summary>
/// ������� ������
/// ��������� Route �� �����
/// </summary>
/// <param name="route">��������� ��������� Route</param>
void WriteRouteFromConsole(Route& route);

/// <summary>
/// ������� ������ �������� ��
/// �������� ���������
/// </summary>
/// <param name="routes">������ �������� Route</param>
/// <param name="routeCount">���-�� ��������� �������</param>
/// <param name="stop">�������� ���������</param>
/// <returns>
/// ������ ���������� ��������, ���� -1, ���� �������
/// �� ������
/// </returns>
int FindRouteTo(Route* routes, int routeCount, string stop);

/// <summary>
/// ������� ������������
/// ������ ��������� Route 
/// � ������� ��� ������ �
/// ���
/// </summary>
void DemoRoute();