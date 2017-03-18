#include "Dek.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <vector>

using namespace std;
using MyProg::Dek;

int main()
{
	setlocale(LC_ALL, "Rus");
	try{
		Dek <char> dk;
		dk.insertR('a'); 
		dk.insertR('b'); 
		dk.insertR('c'); 
		dk.insertR('d');
		dk.insertR('e');
		dk.insertR('f'); 
		dk.insertR('g'); 
		dk.insertR('h');
		dk.insertR('i');
		dk.insertR('j');
		dk.insertR('k');
		dk.insertR('l');
		dk.insertR('m');
		dk.insertR('n');
		dk.insertR('o');
		dk.insertR('p');
		dk.insertR('q');
		dk.insertR('r');
		dk.insertR('s');
		dk.insertR('t');
		dk.insertR('u');
		dk.insertR('v');
		dk.insertR('w');
		dk.insertR('x');
		dk.insertR('y'); 
		dk.insertR('z'); 
		cout << "Символы в деке: ";
		dk.showL();
		cout << endl;
		dk.shifr();
	}
	catch (const string& e)
	{
		cout << e << endl;
	}

	system("pause");
	return 0;
}