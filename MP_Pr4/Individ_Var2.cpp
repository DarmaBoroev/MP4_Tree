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
			cout << "Выбор команды: ";
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
				cout << "::  Студент гр. 735: Бороев Д.Б.  ::" << endl;
				cout << "::                                ::" << endl;
				cout << "::::::::::::::::::::::::::::::::::::" << endl;
				break;
			case '0':
				Tr.Delete();
				cout << "Закрытие программы." << endl;
				break;
			default:
				cout << "Незарегистрированная команда. Повторите действие!\n";
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

	cout << "Команды:" << endl;
	cout << "\t1. Добавить элемент в дерево" <<endl;
	cout << "\t2. Показать элементы дерева" << endl;
	cout << "\t3. Ввести искомое значение для подсчета его присутствия в дереве" << endl;
	cout << "\t4. Удалить дерево" << endl;
	cout << "\t5. Об авторе" << endl;
	cout << "\t0. Выход" << endl;

	Choice(Tr);

	system("pause");
	return 0;
}