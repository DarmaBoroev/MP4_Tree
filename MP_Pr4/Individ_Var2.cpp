#include "MyTree.h"
#include <iostream>
#include <conio.h>


using namespace std;
using MyProg::MyTree;

void Choice(MyTree <int> Tr)
{
	char c;
	int x;
	do
	{
		cout << "����� �������: ";
		cin >> c;
		c = cin.get();
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		switch (c)
		{
		case '1':
			Tr.Add();
			break;
		case '2':
			Tr.Show();
			cout << endl;
			break;
		case '3':
			Tr.CountElem();
			break;
		case '0':
			cout << "�������� ���������." << endl;
			break;
		default:
			cout << "�������������������� �������. ��������� ��������!\n";
			return Choice(Tr);
			break;
		}
	} while (c != '0');
}

int main()
{
	setlocale(LC_ALL, "Rus");

	MyTree <int> Tr;

	cout << "�������:" << endl;
	cout << "\t1. �������� ������� � ������" <<endl;
	cout << "\t2. �������� �������� ������" << endl;
	cout << "\t3. ������ �������� ��� �������� ��� ����������� � ������" << endl;
	cout << "\t0. �����" << endl;

	Choice(Tr);

	system("pause");
	return 0;
}