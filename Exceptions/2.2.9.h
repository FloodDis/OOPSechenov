#pragma once
#include <iostream>
#include "2.2.8.1.h"
using namespace std;

//������� 2.2.9.1
/// <summary>
/// �����
/// </summary>
struct FilmEnum
{
	/// <summary>
	/// ��������
	/// </summary>
	string Name;

	/// <summary>
	/// ����������������� � �������
	/// </summary>
	int Duration;

	/// <summary>
	/// ��� �������
	/// </summary>
	int YearOfRelease;

	/// <summary>
	/// ����
	/// </summary>
	Genre Genre;

	/// <summary>
	/// ������� ������
	/// </summary>
	double Rate;
};

//������� 2.2.9.2
/// <summary>
/// ������� ������������
/// ��������� FilmEnum
/// </summary>
void DemoMovieWithGenre();

//������� 2.2.9.3
/// <summary>
/// ������� ��������
/// ��������� FilmEnum
/// </summary>
/// <param name="name">�������� ������</param>
/// <param name="duration">����������������� � �������</param>
/// <param name="yearOfRelease">��� �������</param>
/// <param name="genre">����</param>
/// <returns>
/// ��������� ��������� FilmEnum
/// </returns>
FilmEnum* MakeMovieRemastered(string name, int duration,
	int yearOfRelease, Genre genre, double rate);

//������� 2.2.9.4
/// <summary>
/// ������� �������� ���-��
/// ��������� FilmEnum �������������
/// �����
/// </summary>
///	<param name="movies">������ �������� FilmEnum</param>
/// <param name="count">���-�� ��������� �������</param>
/// <param name="findGenre">���� ������� �������</param>
/// <returns>
/// ���-�� ������� ������������� �����
/// </returns>
int CountMoviesByGenre(FilmEnum* movies, int count, Genre findGenre);

//������� 2.2.9.5
/// <summary>
/// ������� ����������
/// ��������� �������������
/// ����� FilmEnum � ���������� ��������� 
/// </summary>
///	<param name="movies">������ �������� FilmEnum</param>
/// <param name="count">���-�� ��������� �������</param>
/// <param name="findGenre">���� ������� �������</param>
/// <returns>
/// ��������� FilmEnum ������������� �����
///  � ���������� ���������
/// ��� nullptr, ���� �������� � ����� ������
/// �� �������
/// </returns>
FilmEnum* FindBestGenreMovie(FilmEnum* movies, int count, Genre findGenre);