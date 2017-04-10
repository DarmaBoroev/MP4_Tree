#pragma once
#include <iostream>
#include "Stack.h"

using MyStack::Stack;

namespace MyProg
{
	template <class T>
	class MyTree
	{
		struct Node
		{
			T val;
			Node *son;
			Node *brother;
			Node() : son(0), brother(0) {};
		};
		Node *root;

	public:
		MyTree()
		{
			root = NULL;
		};

		~MyTree()
		{
			Delete(root);
		}

		void Add()
		{
			T x;
			cout << "\t������� ��������: ";
			cin >> x;
			Add(root, x);
		}

		void Show()
		{
			if (root == NULL)
			{
				cout << "\t������ ������! �������� �������� � ������!";
			}
			else
			{
				cout << "\t�������� ������: ";
				Show(root);
			}
		}

		void CountElem()
		{
			T E;
			if (root == NULL)
			{
				cout << "\t������ ������! �������� �������� � ������!\n";
			}
			else
			{
				cout << "\t������� ������� �: ";
				cin >> E;
				CountElem(root, E);
			}
		}

	private:
		void Add(Node *&node, const int &x)
		{
			if (node == NULL)
			{
				node = new Node;
				node->val = x;
			}
			else if (x < node->val)
			{
				Add(node->son, x);
			}
			else
			{
				Add(node->brother, x);
			}
		}

		void Delete(Node *node)
		{
			if (node)
			{
				Delete(node->son);
				Delete(node->brother);
				delete node;
			}
		}

		void Show(Node *&node)
		{
			if (node != NULL)
			{
				cout << node->val << " ";
				Show(node->brother);
				Show(node->son);
			}
		}

		void CountElem(Node *&node, const int &x)
		{
			Stack <Node*> St;
			int N = 0;
			do
			{
				if (x == node->val) N++;
				if (node->son != NULL)
				{
					St.push(node->son);
				}
				if (node->brother != NULL)
				{
					St.push(node->brother);
				}
			} while (node = St.pop());
			if (N == 0) cout << "\t������ �������� � ������ ���!\n";
			else cout << "\t����� ��������� �������� � � ������ � = " << N <<endl;
		}
	};
}