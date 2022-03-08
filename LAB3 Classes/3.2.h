#pragma once
#include "Book.h"
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