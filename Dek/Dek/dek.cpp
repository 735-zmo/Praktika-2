#include "Dek.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
using MyProg::Dek;

int main()
{
	setlocale(LC_ALL, "Rus");
	Dek <char> dk;

	dk.insertR('2');
	dk.insertR('3');
	dk.insertR('4');
	dk.insertL('1');
	try
	{
		cout << "������ ��������� ������� � ������ �����: ";
		dk.showL();
		cout << endl;
		cout << "������ ��������� ������� � ������� �����: ";
		dk.showR();
		cout << endl;
		cout << "���������� �������� � ������ �����: ";
		dk.delL();
		dk.showL();
		cout << endl;
		cout << "���������� �������� � ������� �����: ";
		dk.delR();
		dk.showL();
		cout << endl;
	}
	catch (const string& e)
	{
		cout << e << endl;
	}
	system("pause");
	return 0;
}