#include "2.2.1.1.h"
#include "2.2.1.2.h"
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "��������� ������ ����������:\n";
	DemoSort();
	cout << "\n";
	cout << "��������� ������ ���������� � ���������� ����������:\n";
	DemoSortException();
}