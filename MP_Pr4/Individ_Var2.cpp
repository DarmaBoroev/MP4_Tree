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
		cout << "Выбор команды: ";
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
			cout << "Закрытие программы." << endl;
			break;
		default:
			cout << "Незарегистрированная команда. Повторите действие!\n";
			return Choice(Tr);
			break;
		}
	} while (c != '0');
}

int main()
{
	setlocale(LC_ALL, "Rus");

	MyTree <int> Tr;

	cout << "Команды:" << endl;
	cout << "\t1. Добавить элемент в дерево" <<endl;
	cout << "\t2. Показать элементы дерева" << endl;
	cout << "\t3. Ввести значение для подсчета его присутствия в дереве" << endl;
	cout << "\t0. Выход" << endl;

	Choice(Tr);

	system("pause");
	return 0;
}