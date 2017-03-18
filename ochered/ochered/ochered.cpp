#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "queue.h"

using namespace std;
using MyProg::Queue;

int main()
{
	setlocale(LC_ALL, "Rus");
	try
	{
		Queue <int> que;
		que.insert(1);
		que.insert(2);
		que.insert(3);
		//que.del();
		//que.de;();
		//que.del();
		que.print();
		cout << endl;
		que.del();
		que.print();
		cout << endl;
	}

	catch (const string& e)
	{
		cout << e << endl;
	}
	system("pause");
	return 0;
}