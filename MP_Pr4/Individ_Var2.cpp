#include "MyTree.h"
#include <iostream>
#include <conio.h>
#include <string>


using namespace std;
using MyProg::MyTree;

void Choice(MyTree <int> Tr)
{
	char c;
	try{
		do
		{
			cout << endl;
			cout << "����� �������: ";
			cin >> c;
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
			case '4':
				Tr.Delete();
				break;
			case '5':
				cout << "::::::::::::::::::::::::::::::::::::" << endl;
				cout << "::                                ::" << endl;
				cout << "::  ������� ��. 735: ������ �.�.  ::" << endl;
				cout << "::                                ::" << endl;
				cout << "::::::::::::::::::::::::::::::::::::" << endl;
				break;
			case '0':
				Tr.Delete();
				cout << "�������� ���������." << endl;
				break;
			default:
				cout << "�������������������� �������. ��������� ��������!\n";
				break;
			}
		} while (c != '0');
	}

	catch (string e)
	{
		cout << e << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	MyTree <int> Tr;

	cout << "�������:" << endl;
	cout << "\t1. �������� ������� � ������" <<endl;
	cout << "\t2. �������� �������� ������" << endl;
	cout << "\t3. ������ ������� �������� ��� �������� ��� ����������� � ������" << endl;
	cout << "\t4. ������� ������" << endl;
	cout << "\t5. �� ������" << endl;
	cout << "\t0. �����" << endl;

	Choice(Tr);

	system("pause");
	return 0;
}