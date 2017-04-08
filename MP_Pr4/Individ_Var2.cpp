#include "MyTree.h"
#include <iostream>
#include <conio.h>


using namespace std;
using MyProg::MyTree;

int main()
{
	try
	{
		MyTree Tr;
		int x, c;
		setlocale(LC_ALL, "Rus");
		Tr.Add(20);
		Tr.Add(9);
		Tr.Add(14);
		Tr.Add(1);
		Tr.Add(5);
		Tr.Add(7);
		Tr.Show();
		cout << "Введите элемент Е: ";
		cin >> x;
		Tr.CountElem(x);
	}

	catch (string e)
	{
		cout << e << endl;
	}

	system("pause");
	return 0;
}