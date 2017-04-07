#include "MyTree.h"
#include <iostream>
#include <conio.h>


using namespace std;
using MyProg::MyTree;

int main()
{
	MyTree <int> Tr;
	setlocale(LC_ALL, "Rus");
	Tr.Add(20);
	Tr.Add(9);
	Tr.Add(14);
	Tr.Add(1);
	Tr.Add(5);
	Tr.Add(7);
	Tr.Show();
	system("pause");
	return 0;
}